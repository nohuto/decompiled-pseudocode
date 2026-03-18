/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0046F3C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0005888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0047110 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rbx
  int v7; // eax
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  v6 = (int *)((char *)v1 + 16);
  v7 = *((_DWORD *)v1 + 4);
  if ( v7 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v7 = *v6;
  }
  if ( v7 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v7 = *v6;
  }
  if ( !v7 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v7 = *v6;
  }
  v8 = 1;
  if ( v7 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11, v12);
    *v6 = 2;
  }
  else
  {
    v8 = 0;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v8;
}
