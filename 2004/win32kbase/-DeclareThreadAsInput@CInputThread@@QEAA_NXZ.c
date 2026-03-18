/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0046E30
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0047964 (UserSetMITInputCallbacks.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0047110 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C0047160 (SetThreadBasePriority.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C0047200 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5, v6);
    CInputThread::InputThreadState::Init((CInputThread *)((char *)v1 + 16));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
