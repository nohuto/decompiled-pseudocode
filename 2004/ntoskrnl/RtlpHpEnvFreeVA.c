/*
 * XREFs of RtlpHpEnvFreeVA @ 0x140253038
 * Callers:
 *     RtlpHpFreeVA @ 0x14025255C (RtlpHpFreeVA.c)
 *     RtlpHpEnvAllocVA @ 0x14025839C (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x1402D83AC (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpVaMgrCtxFree @ 0x1402D843C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFree @ 0x1402D85A0 (RtlpHpVaMgrRangeFree.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x1402D89D8 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpHpVaMgrAlloc @ 0x1402D8F3C (RtlpHpVaMgrAlloc.c)
 *     RtlCSparseBitmapCleanup @ 0x14038A2E0 (RtlCSparseBitmapCleanup.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14025307C (MmFreePoolMemory.c)
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
