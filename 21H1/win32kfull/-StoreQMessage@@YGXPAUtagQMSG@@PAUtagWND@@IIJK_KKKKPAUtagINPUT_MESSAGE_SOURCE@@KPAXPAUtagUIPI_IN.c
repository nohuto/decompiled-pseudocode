/*
 * XREFs of ?StoreQMessage@@YGXPAUtagQMSG@@PAUtagWND@@IIJK_KKKKPAUtagINPUT_MESSAGE_SOURCE@@KPAXPAUtagUIPI_INFO@@@Z @ 0xEFC1E
 * Callers:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     ?_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x6CB50 (-_PostTransformableMessageExtended@@YGPAUtagQMSG@@PAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@H@Z.c)
 *     _DoTimer@4 @ 0x742FA (_DoTimer@4.c)
 *     __PostThreadMessageEx@20 @ 0x82662 (__PostThreadMessageEx@20.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     _xxxCallJournalPlaybackHook@4 @ 0x1527A2 (_xxxCallJournalPlaybackHook@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_Ddd@32 @ 0x11C16 (_WPP_RECORDER_SF_Ddd@32.c)
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _IsCurrentDesktopComposed@0 @ 0x7C988 (_IsCurrentDesktopComposed@0.c)
 *     _IsPointerPromotedMouseMessage@8 @ 0x9461E (_IsPointerPromotedMouseMessage@8.c)
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 *     _LogQMsg@4 @ 0x141ED4 (_LogQMsg@4.c)
 */

void __userpurge StoreQMessage(
        HWND *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagQMSG *a3,
        struct tagWND *a4,
        unsigned int a5,
        InputTransform *a6,
        int a7,
        unsigned int a8,
        unsigned __int64 a9,
        char a10,
        _DWORD *a11,
        unsigned int a12,
        struct tagINPUT_MESSAGE_SOURCE *a13,
        _DWORD *a14,
        void *a15,
        struct tagUIPI_INFO *a16)
{
  HWND *v16; // edi
  _DWORD *v17; // esi
  HWND v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  int v22; // edi
  unsigned int v23; // edx
  LARGE_INTEGER PerformanceCounter; // kr00_8
  _DWORD *v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  _DWORD *v28; // ecx
  int v29; // [esp-18h] [ebp-2Ch]
  int v30; // [esp-14h] [ebp-28h]
  int v31; // [esp-10h] [ebp-24h]
  unsigned __int64 v32; // [esp+0h] [ebp-14h]

  v16 = a1;
  v17 = a2;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0;
  v19 = a5;
  a2[2] = v18;
  a2[3] = a3;
  a2[4] = a4;
  v20 = (unsigned int)a6;
  a2[5] = a5;
  if ( !a6 )
  {
    v21 = MEMORY[0xFFDF0004];
    if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
    {
      v22 = MEMORY[0xFFDF0324];
      v23 = MEMORY[0xFFDF0320];
      if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      {
        do
        {
          _mm_pause();
          v22 = MEMORY[0xFFDF0324];
          v23 = MEMORY[0xFFDF0320];
        }
        while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
        v17 = a2;
        v19 = a5;
        v21 = MEMORY[0xFFDF0004];
      }
      v20 = v21 * (v22 << 8) + (((unsigned int)v21 * (unsigned __int64)v23) >> 24);
      v16 = a1;
    }
    else
    {
      v20 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
    }
  }
  v17[6] = v20;
  PerformanceCounter = KeQueryPerformanceCounter(0);
  v17[23] = PerformanceCounter.HighPart;
  v17[27] = v17[6];
  v17[22] = PerformanceCounter.LowPart;
  if ( (unsigned int)a3 - 512 <= 0xE && IsCurrentDesktopComposed() )
  {
    v17[7] = (__int16)v19;
    v17[8] = SHIWORD(v19);
  }
  else
  {
    *(_QWORD *)(v17 + 7) = LogicalCursorPosFromDpiAwarenessContext(a12);
  }
  v17[15] = a9;
  v17[10] = HIDWORD(a9);
  v17[11] = *(_DWORD *)(_gpsi + 4428);
  v17[12] = *(_DWORD *)(_gpsi + 4432);
  v25 = v17 + 20;
  v17[13] = *(_DWORD *)(_gpsi + 4420);
  v17[14] = *(_DWORD *)(_gpsi + 4424);
  v26 = v17[16] & 0xFD3FFFFD | (2 * (a10 & 1 | ((a10 & 0x20 | (2 * (a10 & 0x40 | (2 * (a10 & 4))))) << 17)));
  v17[16] = v26;
  if ( a11 )
  {
    *v25 = *a11;
    v17[21] = a11[1];
  }
  else
  {
    SetUnavailableInputSource(v17 + 20);
    v26 = v17[16];
    v25 = v17 + 20;
  }
  v17[26] = a13;
  if ( (a10 & 2) != 0 || IsPointerPromotedMouseMessage((int)a3, v25) )
  {
    v28 = a14;
    if ( !a14 )
      v28 = (_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 496);
    v27 = v26 | 0x1000;
    v17[18] = *v28;
    v17[19] = v28[1];
  }
  else
  {
    v27 = v26 & 0xFFFFEFFF;
  }
  v17[16] = v27;
  if ( IsPointerPromotedMouseMessage((int)a3, v25) )
  {
    v17[10] = BYTE4(a9) | 0xFF515700;
    v17[27] = v17[6] - (SHIDWORD(a9) >> 8);
  }
  if ( (v27 & 8) != 0 && v16 && IsCompositionInputWindow() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ddd(v29, v30, v31, v17[3], v17[7], v17[8]);
    InputTransform::OnInput(v16, PerformanceCounter.QuadPart, v32);
  }
  EtwTraceQueueMessage(v17);
  if ( gMsgQLog )
    LogQMsg(v17);
}
