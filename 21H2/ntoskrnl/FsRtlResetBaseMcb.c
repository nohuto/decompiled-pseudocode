/*
 * XREFs of FsRtlResetBaseMcb @ 0x1402D2610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlResetBaseMcb(PBASE_MCB Mcb)
{
  Mcb->PairCount = 0;
}
