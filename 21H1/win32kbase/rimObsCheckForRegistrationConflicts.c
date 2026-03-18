/*
 * XREFs of rimObsCheckForRegistrationConflicts @ 0x1C0183D70
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01843F4 (rimObsAddInputObserver.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C0185F58 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     rimObsIsObserverTarget @ 0x1C0183ED4 (rimObsIsObserverTarget.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0184168 (WPP_RECORDER_SF_qdd.c)
 *     WPP_RECORDER_SF_ss @ 0x1C0184264 (WPP_RECORDER_SF_ss.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall rimObsCheckForRegistrationConflicts(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // ebx
  char v7; // r14
  struct _LIST_ENTRY *Flink; // r10
  struct _LIST_ENTRY *v9; // r11
  int v10; // r14d
  struct _LIST_ENTRY *v11; // rsi
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // edx
  int v18; // r8d
  int v19; // r9d

  v6 = a2;
  v7 = a1;
  if ( a2 > 2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  Flink = gObRimInputObserverList.Flink;
  v9 = &gObRimInputObserverList;
  v10 = v7 & 2;
  while ( 1 )
  {
    if ( Flink == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          a2,
          23,
          40,
          (__int64)&WPP_6fc7381aee0e372bb3b376f4de323b29_Traceguids);
      }
      return 1;
    }
    v11 = Flink - 1;
    if ( !v10 )
      break;
    if ( (unsigned int)rimObsIsObserverTarget(&Flink[-1], v6, a3, a4) )
      goto LABEL_14;
LABEL_9:
    Flink = Flink->Flink;
  }
  if ( ((__int64)v11[7].Blink & 2) == 0 || !(unsigned int)rimObsIsObserverTarget(&Flink[-1], v6, a3, a4) )
    goto LABEL_9;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessId((PEPROCESS)v11[2].Flink);
    PsGetThreadId((PETHREAD)v11[2].Blink);
    WPP_RECORDER_SF_qdd(v14, v13, v15, v16);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ss((unsigned int)"shared", v17, v18, v19);
  }
  return 0;
}
