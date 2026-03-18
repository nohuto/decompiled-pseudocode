/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x1408D9F00
 * Callers:
 *     MiCommitExistingVad @ 0x14027A570 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MiFreePhysicalPageChain @ 0x14054A0E8 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
