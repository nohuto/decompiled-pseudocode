/*
 * XREFs of RIMUnregisterCurrentProcessForInput @ 0x1C00AA734
 * Callers:
 *     RIMOnProcessDestroy @ 0x1C00AA6C0 (RIMOnProcessDestroy.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0072EBC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00AA920 (WPP_RECORDER_SF_d.c)
 *     RIMUnregisterForInput @ 0x1C00AB430 (RIMUnregisterForInput.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMUnregisterCurrentProcessForInput(__int64 a1)
{
  NTSTATUS v1; // ebx
  int v2; // edx
  struct _LIST_ENTRY *v3; // rbp
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY *i; // r14
  int v9; // edx
  _QWORD *v10; // rdi
  struct _LIST_ENTRY **p_Blink; // rdi
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  _QWORD *v15; // rsi
  int v16; // eax
  int v17; // edx
  _QWORD *v18; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v19; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v3 = *(struct _LIST_ENTRY **)PsGetCurrentProcessWin32Process(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v2, 1, 18, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids);
  }
  v19 = (struct _LIST_ENTRY *)&v18;
  v18 = &v18;
  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
  {
    if ( !LOBYTE(i[4].Flink) && !BYTE1(i[4].Flink) && i[1].Flink == v3 )
    {
      p_Blink = &i[37].Blink;
      if ( i[38].Flink != (struct _LIST_ENTRY *)&i[37].Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
      if ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
      v1 = ObReferenceObjectByPointer(&i[-1], 3u, ExRawInputManagerObjectType, 0);
      if ( v1 < 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v4, v6, v7);
      v14 = v19;
      if ( v19->Flink != (struct _LIST_ENTRY *)&v18 )
        __fastfail(3u);
      i[38].Flink = v19;
      v5 = &v18;
      *p_Blink = (struct _LIST_ENTRY *)&v18;
      v14->Flink = (struct _LIST_ENTRY *)p_Blink;
      v19 = (struct _LIST_ENTRY *)((char *)i + 600);
    }
  }
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  v10 = v18;
  while ( v10 != &v18 )
  {
    v15 = v10 - 77;
    v16 = RIMUnregisterForInput(*(v10 - 68));
    v1 = v16;
    if ( v16 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v17, 1, 19, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v16);
      }
      v1 = 0;
    }
    v10 = (_QWORD *)*v10;
    ObfDereferenceObject(v15);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v9, 1, 20, (__int64)&WPP_d20cf136c9a4320ea9528c837bf5ce2a_Traceguids, v1);
  }
  return (unsigned int)v1;
}
