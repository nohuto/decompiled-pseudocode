/*
 * XREFs of SetThreadPriority @ 0x1C003A110
 * Callers:
 *     <none>
 * Callees:
 *     SetThreadBasePriority @ 0x1C003A4B0 (SetThreadBasePriority.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C003A528 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void SetThreadPriority()
{
  CInputThread *v0; // rbx
  __int64 v1; // rcx

  v0 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( *((_DWORD *)v0 + 4) == 1 )
  {
    if ( CInputThread::_CalledOnInputThread(v0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1);
    SetThreadBasePriority(**((PETHREAD **)v0 + 3));
  }
  *((_QWORD *)v0 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
