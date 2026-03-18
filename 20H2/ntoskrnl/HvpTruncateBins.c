/*
 * XREFs of HvpTruncateBins @ 0x1405DEE3C
 * Callers:
 *     HvStoreModifiedData @ 0x1405DEA18 (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x1402EF2A0 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x1405DEEF4 (HvFreeHivePartial.c)
 *     HvpMapEntryGetFreeBin @ 0x14070790C (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140707F30 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  __int64 CellMap; // rax
  unsigned int v7; // r10d
  __int64 FreeBin; // rax

  v2 = (int *)(BugCheckParameter2 + 272);
  for ( i = 0; i < 2; ++i )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = i << 31;
      do
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, (unsigned int)(v5 + v4 - 4096));
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x138FuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 1784)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
