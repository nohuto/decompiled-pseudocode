/*
 * XREFs of AcpiShutdownNotificationTimerWorkItem @ 0x1C005F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalEvaluateOST @ 0x1C0056B24 (ACPIInternalEvaluateOST.c)
 *     ACPIInitShutdownInProgress @ 0x1C005E7BC (ACPIInitShutdownInProgress.c)
 *     ACPIStopShutdownInProgress @ 0x1C005F058 (ACPIStopShutdownInProgress.c)
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
