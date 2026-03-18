/*
 * XREFs of PipDmgReevaluateQueue @ 0x140956BBC
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407669D4 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x140826E04 (PipDmgInitPhaseTwo.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x1409569F4 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x140956ADC (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x140957DE0 (PiCslIsConsoleLocked.c)
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
