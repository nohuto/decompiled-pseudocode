/*
 * XREFs of HvpTruncateBins @ 0x140689848
 * Callers:
 *     HvStoreModifiedData @ 0x140689424 (HvStoreModifiedData.c)
 * Callees:
 *     ExIsResourceAcquiredExclusiveLite @ 0x140212860 (ExIsResourceAcquiredExclusiveLite.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvpMapEntryGetFreeBin @ 0x14079B740 (HvpMapEntryGetFreeBin.c)
 *     HvpGetCellMap @ 0x140AB44C0 (HvpGetCellMap.c)
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

  v2 = (int *)(BugCheckParameter2 + 280);
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
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x1392uLL);
        FreeBin = HvpMapEntryGetFreeBin(CellMap);
        if ( !FreeBin )
          break;
        v4 = *(_DWORD *)(FreeBin + 20);
      }
      while ( v4 );
    }
    if ( i
      || (unsigned int)(v4 + 0x10000) <= *(_DWORD *)(BugCheckParameter2 + 1792)
      && ExIsResourceAcquiredExclusiveLite((PERESOURCE)&CmpRegistryLock) )
    {
      HvFreeHivePartial(BugCheckParameter2);
    }
    v2 += 158;
  }
  return 0;
}
