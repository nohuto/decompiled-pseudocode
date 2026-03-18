/*
 * XREFs of PipDmgReevaluateQueue @ 0x1408AD10C
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x140733F10 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x14078B494 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408AD048 (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x1408ADE10 (PiCslIsConsoleLocked.c)
 */

void PipDmgReevaluateQueue()
{
  if ( PipDmaGuardPolicy == 1 )
  {
LABEL_6:
    PipDmgFlushQueueAndRestartDevices();
    return;
  }
  if ( PipDmaGuardPolicy == 2 )
  {
    if ( (unsigned __int8)PiCslIsConsoleLocked() )
      return;
    goto LABEL_6;
  }
  if ( PipDmaGuardPolicy != 3 )
    __fastfail(5u);
}
