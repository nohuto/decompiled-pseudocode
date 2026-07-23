/*
 * XREFs of HvpTruncateBins @ 0x1406F8CDC
 * Callers:
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140207DC0 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x1406F8D94 (HvFreeHivePartial.c)
 *     HvpMapEntryGetFreeBin @ 0x14071F4EC (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x14071FB10 (HvpGetCellMap.c)
 */

char __fastcall HvpTruncateBins(ULONG_PTR BugCheckParameter2)
{
  int *v2; // r14
  int i; // ebx
  int v4; // edi
  int v5; // r8d
  __int64 CellMap; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // r10d
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
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0x138FuLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap, v7, v8);
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
