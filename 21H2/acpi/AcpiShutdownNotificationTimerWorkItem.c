/*
 * XREFs of AcpiShutdownNotificationTimerWorkItem @ 0x1C0060070
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C00573B4 (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x1C005F760 (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x1C005FFD8 (ACPIStopShutdownInProgress.c)
 */

void __fastcall AcpiShutdownNotificationTimerWorkItem(PVOID DeferredContext)
{
  KeAcquireGuardedMutex(&AcpiShutdownInProgressWorkerLock);
  if ( *(_BYTE *)DeferredContext )
  {
    if ( ++*((_DWORD *)DeferredContext + 48) < 3u )
    {
      ACPIInitShutdownInProgress((char *)DeferredContext);
    }
    else
    {
      ACPIInternalEvaluateOST(*((_QWORD *)DeferredContext + 25), 129, 128);
      ACPIStopShutdownInProgress(*((_QWORD *)DeferredContext + 25));
    }
  }
  KeReleaseGuardedMutex(&AcpiShutdownInProgressWorkerLock);
}
