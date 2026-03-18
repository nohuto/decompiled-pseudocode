/*
 * XREFs of ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00A84EC
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0007434 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C00A8610 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C00A86D8 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeactivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
  v6 = 1;
  if ( (unsigned int)(*((_DWORD *)v1 + 4) - 1) > 1 )
  {
    v6 = 0;
  }
  else
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
    *((_DWORD *)v1 + 4) = 3;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
