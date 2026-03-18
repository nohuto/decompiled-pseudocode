/*
 * XREFs of PipDmgInitPhaseTwo @ 0x140826E04
 * Callers:
 *     PiDmaGuardInitialize @ 0x1403C09F8 (PiDmaGuardInitialize.c)
 * Callees:
 *     PnpTraceDmaGuardSystemPolicy @ 0x140826E28 (PnpTraceDmaGuardSystemPolicy.c)
 *     PipDmgInitReadGroupPolicy @ 0x140949330 (PipDmgInitReadGroupPolicy.c)
 *     PipDmgReevaluateQueue @ 0x140956BBC (PipDmgReevaluateQueue.c)
 */

__int64 PipDmgInitPhaseTwo()
{
  int GroupPolicy; // eax

  if ( PipDmaGuardPolicy )
  {
    GroupPolicy = PipDmgInitReadGroupPolicy();
    if ( !GroupPolicy )
      GroupPolicy = 2;
    PipDmaGuardPolicy = GroupPolicy;
    PipDmgReevaluateQueue();
  }
  PnpTraceDmaGuardSystemPolicy();
  return 0LL;
}
