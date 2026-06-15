/*
 * XREFs of ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180032860
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800BD798 (WPP_SF_qd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnStateChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        unsigned int a4)
{
  int MediaEvent; // ebp
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  unsigned int *v11; // rax
  unsigned __int64 v12; // r9
  unsigned int *v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  _WORD *v16; // rax
  __int16 v17; // cx
  HANDLE ProcessHeap; // rax

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = *((_QWORD *)this + 9);
  if ( !v7 )
    goto LABEL_15;
  v8 = *(_QWORD *)(v7 + 728);
  v9 = 2 * *(_DWORD *)(v8 - 16) + 2;
  v10 = 2 * *(_DWORD *)(v8 - 16) + 74;
  v11 = (unsigned int *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v11;
  if ( !v11 )
  {
    MediaEvent = -2147024882;
LABEL_21:
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnStateChanged", 0x2FDu, MediaEvent);
    goto LABEL_15;
  }
  *v11 = v10;
  v11[1] = 8;
  v11[6] = v9;
  v11[12] = a4;
  v14 = (unsigned __int64)v9 >> 1;
  v15 = *(_QWORD *)(*((_QWORD *)this + 9) + 728LL);
  v16 = v11 + 18;
  if ( v14 )
  {
    v12 = 2147483646 - v14;
    v15 -= (__int64)v16;
    while ( v12 + v14 )
    {
      v17 = *(_WORD *)((char *)v16 + v15);
      if ( !v17 )
        break;
      *v16++ = v17;
      if ( !--v14 )
      {
        --v16;
        break;
      }
    }
    *v16 = 0;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25LL,
      &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      v13,
      *((_DWORD *)this + 20));
  }
  MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v15, v12);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v13);
  if ( MediaEvent < 0 )
    goto LABEL_21;
LABEL_15:
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
