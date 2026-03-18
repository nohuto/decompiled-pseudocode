/*
 * XREFs of RtlpHpEnvFreeVA @ 0x1402AC068
 * Callers:
 *     RtlpHpFreeVA @ 0x1402AB58C (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x1402B13CC (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x140360180 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x140360210 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x140360374 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1403607AC (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrAlloc @ 0x140360D10 (RtlpHpVaMgrAlloc.c)
 *     RtlCSparseBitmapCleanup @ 0x140389270 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x1402AC0AC (MmFreePoolMemory.c)
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
