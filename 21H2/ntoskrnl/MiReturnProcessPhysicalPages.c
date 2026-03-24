/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x1408D76C0
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MiFreePhysicalPageChain @ 0x14054BBE8 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
