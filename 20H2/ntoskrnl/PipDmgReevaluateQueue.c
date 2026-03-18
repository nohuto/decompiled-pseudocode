/*
 * XREFs of PipDmgReevaluateQueue @ 0x1408B3F5C
 * Callers:
 *     PiDmaGuardProcessPostRemove @ 0x1407415D0 (PiDmaGuardProcessPostRemove.c)
 *     PipDmgInitPhaseTwo @ 0x140799AA4 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     PipDmgFlushQueueAndRestartDevices @ 0x1408B3E98 (PipDmgFlushQueueAndRestartDevices.c)
 *     PiCslIsConsoleLocked @ 0x1408B4C60 (PiCslIsConsoleLocked.c)
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
