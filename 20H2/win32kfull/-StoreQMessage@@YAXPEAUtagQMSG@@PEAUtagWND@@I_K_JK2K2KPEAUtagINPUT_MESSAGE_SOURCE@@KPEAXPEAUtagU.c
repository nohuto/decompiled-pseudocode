/*
 * XREFs of ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x1C0053840
 * Callers:
 *     _ScheduleDispatchNotification @ 0x1C004E6D0 (_ScheduleDispatchNotification.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxRealInternalGetMessage @ 0x1C004FF70 (xxxRealInternalGetMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostThreadMessageEx @ 0x1C00BE604 (_PostThreadMessageEx.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     PostInputMessage @ 0x1C00D6C28 (PostInputMessage.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01E61E4 (xxxCallJournalPlaybackHook.c)
 * Callees:
 *     WPP_RECORDER_SF_Ddd @ 0x1C000342C (WPP_RECORDER_SF_Ddd.c)
 *     IsCurrentDesktopComposed @ 0x1C0013E30 (IsCurrentDesktopComposed.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C01084D0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 *     LogQMsg @ 0x1C01D2A30 (LogQMsg.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall StoreQMessage(
        struct tagQMSG *a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned __int64 a9,
        char a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        struct tagUIPI_INFO *a14)
{
  int v14; // ebp
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  LARGE_INTEGER PerformanceCounter; // r15
  __int64 v21; // rcx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v23; // r8d
  int v24; // r8d
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // ecx
  int v29; // ecx
  __int64 Prop; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // r9
  struct tagUIPI_INFO *v35; // rax
  __int64 v36; // rax
  int v37; // [rsp+20h] [rbp-48h]

  v14 = 0;
  if ( a2 )
    v18 = *(_QWORD *)a2;
  else
    v18 = 0LL;
  *((_QWORD *)a1 + 2) = v18;
  *((_DWORD *)a1 + 6) = a3;
  *((_QWORD *)a1 + 4) = a4;
  *((_QWORD *)a1 + 5) = a5;
  if ( a6 )
    LODWORD(v19) = a6;
  else
    v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *((_DWORD *)a1 + 12) = v19;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 12);
  *((LARGE_INTEGER *)a1 + 16) = PerformanceCounter;
  if ( (unsigned int)(a3 - 512) <= 0xE && (unsigned int)IsCurrentDesktopComposed() )
  {
    *((_DWORD *)a1 + 13) = (__int16)a5;
    *((_DWORD *)a1 + 14) = SWORD1(a5);
  }
  else
  {
    *(_QWORD *)((char *)a1 + 52) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  *((_DWORD *)a1 + 24) = a8;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v21);
  v23 = *((_DWORD *)a1 + 25) & 0xFFFFFFFE;
  *((_QWORD *)a1 + 9) = a9;
  v24 = (CurrentProcessWow64Process != 0) | v23;
  *((_DWORD *)a1 + 25) = v24;
  *((_QWORD *)a1 + 10) = *(_QWORD *)(gpsi + 4960LL);
  v25 = 0;
  *((_QWORD *)a1 + 11) = *(_QWORD *)(gpsi + 4952LL);
  if ( (a10 & 4) != 0 )
    v25 = 0x400000;
  v26 = v25 | (v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)(2 * a10)) & 2) & 0xFFBFFFFF;
  v27 = 0;
  if ( (a10 & 0x20) != 0 )
    v27 = 0x800000;
  v28 = v27 | v26 & 0xFF7FFFFF;
  if ( (a10 & 0x40) != 0 )
    v14 = 0x2000000;
  *((_DWORD *)a1 + 25) = v14 | v28 & 0xFDFFFFFF;
  if ( a11 )
  {
    *((_DWORD *)a1 + 30) = *(_DWORD *)a11;
    *((_DWORD *)a1 + 31) = *((_DWORD *)a11 + 1);
  }
  else
  {
    SetUnavailableInputSource((char *)a1 + 120);
  }
  *((_QWORD *)a1 + 18) = a13;
  if ( (a10 & 2) == 0
    && (a1 == (struct tagQMSG *)-120LL
     || (unsigned int)(a3 - 512) > 0xE
     || ((*((_DWORD *)a1 + 30) - 4) & 0xFFFFFFFB) != 0) )
  {
    *((_DWORD *)a1 + 25) &= ~0x1000u;
  }
  else
  {
    v35 = a14;
    if ( !a14 )
      v35 = (struct tagUIPI_INFO *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    v36 = *(_QWORD *)v35;
    *((_DWORD *)a1 + 25) |= 0x1000u;
    *((_QWORD *)a1 + 14) = v36;
  }
  v29 = *((_DWORD *)a1 + 25);
  if ( a1 != (struct tagQMSG *)-120LL
    && (unsigned int)(a3 - 512) <= 0xE
    && ((*((_DWORD *)a1 + 30) - 4) & 0xFFFFFFFB) == 0 )
  {
    *((_QWORD *)a1 + 9) = (unsigned __int8)a9 | 0xFF515700LL;
    *((_DWORD *)a1 + 38) = *((_DWORD *)a1 + 12) - ((int)a9 >> 8);
  }
  if ( (v29 & 8) != 0 )
  {
    if ( a2 )
    {
      Prop = RealGetProp(*((_QWORD *)a2 + 18), CInputQueueProp::s_atom, 1LL);
      if ( Prop )
      {
        if ( !*(_DWORD *)(Prop + 24) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33, v34);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ddd(v32, v31, v33, v34, v37);
        InputTransform::OnInput(a2, (struct tagWND *)PerformanceCounter.QuadPart, v33);
      }
    }
  }
  EtwTraceQueueMessage(a1);
  if ( (_DWORD)gMsgQLog )
    LogQMsg(a1);
}
