/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C0062E54
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C0062DE0 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMUnregisterForInput @ 0x1C0026970 (RIMUnregisterForInput.c)
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0063040 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NTSTATUS v4; // ebx
  int v5; // edx
  struct _LIST_ENTRY *v6; // rbp
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *i; // r14
  int v12; // edx
  _QWORD *v13; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v16; // rcx
  struct _LIST_ENTRY *v17; // rax
  _QWORD *v18; // rsi
  int v19; // eax
  int v20; // edx
  _QWORD *v21; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+38h] [rbp-20h]

  v4 = 0;
  v6 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v5, 1, 18, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids);
  }
  v22 = (struct _LIST_ENTRY *)&v21;
  v21 = &v21;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v6 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
      v4 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v4 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v7, v9, v10);
      v17 = v22;
      if ( v22->Flink != (struct _LIST_ENTRY *)&v21 )
        __fastfail(3u);
      i[38].Flink = v22;
      v8 = &v21;
      *p_Blink = (struct _LIST_ENTRY *)&v21;
      v17->Flink = (struct _LIST_ENTRY *)p_Blink;
      v22 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C024E368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v13 = v21;
  while ( v13 != &v21 )
  {
    v18 = v13 - 77;
    v19 = RIMUnregisterForInput(*(v13 - 68));
    v4 = v19;
    if ( v19 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v20, 1, 19, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v19);
      }
      v4 = 0;
    }
    v13 = (_QWORD *)*v13;
    ObfDereferenceObject(v18);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 20, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v4);
  }
  return (unsigned int)v4;
}
