/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C006AADC
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C006AE90 (RIMOnProcessDestroy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     RIMUnregisterForInput @ 0x1C00A0B60 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // ebx
  int v2; // edx
  struct _LIST_ENTRY *v3; // rbp
  _QWORD *v4; // rcx
  struct _LIST_ENTRY *i; // r14
  int v6; // edx
  _QWORD *v7; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v10; // rcx
  struct _LIST_ENTRY *v11; // rax
  _QWORD *v12; // rsi
  int v13; // eax
  int v14; // edx
  _QWORD *v15; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v16; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v3 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 18, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids);
  }
  v16 = (struct _LIST_ENTRY *)&v15;
  v15 = &v15;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v3 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
      v11 = v16;
      if ( v16->Flink != (struct _LIST_ENTRY *)&v15 )
        __fastfail(3u);
      i[38].Flink = v16;
      v4 = &v15;
      *p_Blink = (struct _LIST_ENTRY *)&v15;
      v11->Flink = (struct _LIST_ENTRY *)p_Blink;
      v16 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v7 = v15;
  while ( v7 != &v15 )
  {
    v12 = v7 - 77;
    v13 = RIMUnregisterForInput(*(v7 - 68));
    v1 = v13;
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, 19, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v13);
      }
      v1 = 0;
    }
    v7 = (_QWORD *)*v7;
    ObfDereferenceObject(v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 20, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v1);
  }
  return (unsigned int)v1;
}
