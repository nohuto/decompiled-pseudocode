/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C003A28C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C0036888 (UserActivateMITInputProcessing.c)
 * Callees:
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C003A460 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rsi
  __int64 v2; // rcx
  int *v3; // rbx
  int v4; // eax
  char v5; // di
  __int64 v6; // rcx

  v1 = gpInputThread;
  RIMLockExclusive(gpInputThread);
  v3 = (int *)((char *)v1 + 16);
  v4 = *((_DWORD *)v1 + 4);
  if ( v4 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v4 = *v3;
  }
  if ( v4 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v4 = *v3;
  }
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v4 = *v3;
  }
  v5 = 1;
  if ( v4 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
    *v3 = 2;
  }
  else
  {
    v5 = 0;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
