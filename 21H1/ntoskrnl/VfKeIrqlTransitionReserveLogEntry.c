/*
 * XREFs of VfKeIrqlTransitionReserveLogEntry @ 0x1409D8DE0
 * Callers:
 *     ViKeLowerIrqlSanityChecks @ 0x1409D90C8 (ViKeLowerIrqlSanityChecks.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x1409D920C (ViKeRaiseIrqlSanityChecks.c)
 *     VerifierExAcquireFastMutex @ 0x1409E16A0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexNoReboot @ 0x1409E1750 (VerifierExAcquireFastMutexNoReboot.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E1DC0 (ViExReleaseFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x1409E1E00 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     <none>
 */

char *__fastcall VfKeIrqlTransitionReserveLogEntry(char a1, char a2)
{
  char *v2; // r8

  v2 = 0LL;
  if ( ViTrackIrqlQueue )
  {
    if ( ViKeTrackIrqlDisabled )
    {
      _InterlockedIncrement(&ViKeTrackIrqlSkipped);
    }
    else
    {
      v2 = (char *)ViTrackIrqlQueue
         + 56 * (_InterlockedIncrement(&ViTrackIrqlIndex) & (unsigned int)(ViTrackIrqlQueueLength - 1));
      v2[8] = a1;
      v2[9] = a2;
      *((_WORD *)v2 + 5) = KeGetPcr()->Prcb.Number;
    }
  }
  return v2;
}
