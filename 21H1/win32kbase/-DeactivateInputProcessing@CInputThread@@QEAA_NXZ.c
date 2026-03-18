/*
 * XREFs of ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A33C
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0038434 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C003A460 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C003A528 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeactivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rdi
  __int64 v2; // rcx
  char v3; // bl
  __int64 v4; // rcx

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
  v3 = 1;
  if ( (unsigned int)(*((_DWORD *)v1 + 4) - 1) > 1 )
  {
    v3 = 0;
  }
  else
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    *((_DWORD *)v1 + 4) = 3;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
