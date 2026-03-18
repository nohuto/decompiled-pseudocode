/*
 * XREFs of MiGetSlabAllocator @ 0x140333098
 * Callers:
 *     MiPfPutPagesInTransition @ 0x14024CE50 (MiPfPutPagesInTransition.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1406253C0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140680D90 (MiPfPrepareReadList.c)
 *     MiCreateKernelHalSlabRange @ 0x140A4DD60 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A54EA4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeProtection @ 0x140A95B38 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSlabAllocator(__int64 a1, int a2, char a3)
{
  int v4; // eax
  __int64 v5; // r8

  v4 = a3 & 5;
  if ( v4 == 4 || (v5 = 0LL, a2) && v4 == 5 )
  {
    v5 = 3LL;
  }
  else if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( a2 || (MiFlags & 0x10000) != 0 )
        v5 = 1LL;
    }
    else
    {
      v5 = 2LL;
    }
  }
  return a1 + 120 * (v5 + 4LL * a2) + 5184;
}
