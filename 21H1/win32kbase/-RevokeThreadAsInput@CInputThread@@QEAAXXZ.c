/*
 * XREFs of ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C003A21C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C003A528 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputThread::RevokeThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( *((_DWORD *)v1 + 4) != 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  *((_OWORD *)v1 + 1) = 0LL;
  *((_OWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
