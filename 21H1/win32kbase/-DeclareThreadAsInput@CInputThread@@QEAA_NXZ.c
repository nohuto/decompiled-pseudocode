/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C003A180
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C003AA14 (UserSetMITInputCallbacks.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C003A460 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C003A4B0 (SetThreadBasePriority.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C003A550 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  char v2; // di
  __int64 v3; // rcx

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  if ( *((_QWORD *)v1 + 3) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    CInputThread::InputThreadState::Init((CInputThread *)((char *)v1 + 16));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
