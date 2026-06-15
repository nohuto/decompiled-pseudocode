/*
 * XREFs of ?TsSessionIdConnect@@YAXK@Z @ 0x1800293D4
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18002A7F0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800277B0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x1800278D4 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180027958 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x1800289C8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180036708 (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdConnect(DWORD a1)
{
  int TsAudioProtocol; // esi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  struct TSSession *v4; // rbx
  _UNKNOWN **v5; // rcx
  struct TSSession *v6; // [rsp+58h] [rbp+10h] BYREF
  void *v7; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+68h] [rbp+20h]

  TsAudioProtocol = GetTsAudioProtocol(a1);
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v8 = v3;
  if ( (unsigned int)TsSessionFromSessionId(a1, 1, &v7, &v6) )
    goto LABEL_27;
  v4 = v6;
  TsSessionRefreshSessionInformation(v6);
  TsSessionUpdateAudioProtocol(v4, v7, TsAudioProtocol);
  if ( *((_QWORD *)v4 + 5) != -130LL && *(_WORD *)(*((_QWORD *)v4 + 5) + 130LL) )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
      *(_DWORD *)v4);
  }
  *((_DWORD *)v4 + 13) = 0;
  *((_DWORD *)v4 + 86) = 0;
  if ( (int)QueueSessionMuteUnmute(-1, *(_DWORD *)v4) >= 0 )
    goto LABEL_13;
  v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x15u,
      &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
      *(_DWORD *)v4);
LABEL_13:
    v5 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( TsAudioProtocol )
  {
    if ( TsAudioProtocol != 0xFFFF )
    {
      if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x40000000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        WPP_SF_d((TRACEHANDLE)v5[2], 0x16u, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, *(_DWORD *)v4);
      *((_DWORD *)v4 + 13) = 0;
      *((_DWORD *)v4 + 86) = 0;
      if ( (int)QueueSessionMuteUnmute(-1, *(_DWORD *)v4) < 0
        && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x17u,
          &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
          *(_DWORD *)v4);
      }
    }
  }
  else if ( *(_QWORD *)(*((_QWORD *)v4 + 5) + 200LL) )
  {
    TsSessionNewPrimaryConsoleAudioSession(v4);
  }
LABEL_27:
  if ( v3 )
    LeaveCriticalSection(v3);
}
