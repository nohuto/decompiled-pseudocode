/*
 * XREFs of ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0046ECC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C00471D8 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputThread::RevokeThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( *((_DWORD *)v1 + 4) != 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8, v9);
  *((_OWORD *)v1 + 1) = 0LL;
  *((_OWORD *)v1 + 2) = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
