/*
 * XREFs of MiGetSlabAllocator @ 0x14029959C
 * Callers:
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MiPfPutPagesInTransition @ 0x140306370 (MiPfPutPagesInTransition.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MiPfPrepareSequentialReadList @ 0x1407051B0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140706CF0 (MiPfPrepareReadList.c)
 *     MiCreateKernelHalSlabRange @ 0x140A506A0 (MiCreateKernelHalSlabRange.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A574C0 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MmUpdateSlabRangeProtection @ 0x140A939A8 (MmUpdateSlabRangeProtection.c)
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
