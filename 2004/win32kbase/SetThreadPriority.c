/*
 * XREFs of SetThreadPriority @ 0x1C0046DC0
 * Callers:
 *     <none>
 * Callees:
 *     SetThreadBasePriority @ 0x1C0047160 (SetThreadBasePriority.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C00471D8 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void SetThreadPriority()
{
  CInputThread *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  v0 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( *((_DWORD *)v0 + 4) == 1 )
  {
    if ( CInputThread::_CalledOnInputThread(v0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3, v4);
    SetThreadBasePriority(**((PETHREAD **)v0 + 3));
  }
  *((_QWORD *)v0 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
