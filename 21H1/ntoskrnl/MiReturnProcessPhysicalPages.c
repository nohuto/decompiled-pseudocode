/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x1408D2D70
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
