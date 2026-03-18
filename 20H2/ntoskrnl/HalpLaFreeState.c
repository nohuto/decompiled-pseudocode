/*
 * XREFs of HalpLaFreeState @ 0x1404D97B4
 * Callers:
 *     HalpDmaAllocateDomain @ 0x1403C67F8 (HalpDmaAllocateDomain.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C3128 (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140379260 (HalpMmAllocCtxFree.c)
 *     HalpLapDeleteSubtree @ 0x1404D9BE0 (HalpLapDeleteSubtree.c)
 */

__int64 __fastcall HalpLaFreeState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  HalpLapDeleteSubtree(a1, *(_QWORD *)(a1 + 56));
  HalpMmAllocCtxFree(v2, *(_QWORD *)(a1 + 64));
  HalpMmAllocCtxFree(v3, *(_QWORD *)(a1 + 56));
  return HalpMmAllocCtxFree(v4, a1);
}
