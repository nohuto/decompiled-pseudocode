/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140237A70
 * Callers:
 *     RtlpHpFreeVA @ 0x1402379DC (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x1402CB4C8 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140306644 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x1403066D4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140306838 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x140306C70 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrAlloc @ 0x1403071D4 (RtlpHpVaMgrAlloc.c)
 *     RtlCSparseBitmapCleanup @ 0x14038C580 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x140237AB4 (MmFreePoolMemory.c)
 */

__int64 __fastcall RtlpHpEnvFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10

  if ( a3 != 0x8000 )
    return MmFreePoolMemory();
  v4 = (*a1 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL;
  v5 = *a1 + *a2 - v4;
  *a1 = v4;
  *a2 = v5;
  if ( v5 )
    return MmFreePoolMemory();
  else
    return 0LL;
}
