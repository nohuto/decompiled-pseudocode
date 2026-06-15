/*
 * XREFs of ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800300F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     WPP_SF_sd @ 0x18002B0D4 (WPP_SF_sd.c)
 *     ?RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ @ 0x18002B840 (-RegisterSessionDisplayNotificationCallback@TSSession@@QEAAXXZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18002D0B0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D258 (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002E10C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18002E2C8 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002ECD4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x18002EEAC (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x18002EF70 (-TsSessionIdLogoff@@YAJK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TS_SessionChanged(unsigned int a1, struct tagWTSSESSION_NOTIFICATION *a2)
{
  DWORD dwSessionId; // ebx
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  struct TSSession *v4; // rbx
  const char *v5; // r9
  const char *v6; // r9
  struct TSSession *v7; // [rsp+48h] [rbp+10h] BYREF
  void *v8; // [rsp+50h] [rbp+18h] BYREF
  void *v9; // [rsp+58h] [rbp+20h] BYREF

  dwSessionId = a2->dwSessionId;
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
      goto LABEL_27;
    if ( a1 != 3 )
    {
      if ( a1 != 4 )
      {
        if ( a1 != 5 )
        {
          if ( a1 == 6 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x25u,
                &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
                dwSessionId);
            }
            TsSessionIdLogoff(dwSessionId);
          }
          else if ( a1 == 11 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_d(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x23u,
                &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
                dwSessionId);
            }
            TsSessionIdTerminate(dwSessionId);
          }
          return;
        }
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x24u,
            &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids,
            dwSessionId);
        }
        v7 = 0LL;
        v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        v8 = v3;
        if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 1, &v9, &v7) )
        {
          v4 = v7;
          TsSessionRefreshSessionInformation(v7);
          TSSession::RegisterSessionDisplayNotificationCallback(v4);
          if ( !*((_DWORD *)v4 + 1) )
            TsSessionNewPrimaryConsoleAudioSession(v4);
          g_bIsSystemAsleep = 0;
        }
        goto LABEL_36;
      }
LABEL_27:
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v5 = "WTS_REMOTE_DISCONNECT";
        if ( a1 == 2 )
          v5 = "WTS_CONSOLE_DISCONNECT";
        WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x21u, a1, v5, a2->dwSessionId);
      }
      v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
      v9 = v3;
      if ( !(unsigned int)TsSessionFromSessionId(dwSessionId, 0, &v8, &v7) && *((_DWORD *)v7 + 1) )
        TsSessionUpdateAudioProtocol(v7, v8, 0xFFFF);
LABEL_36:
      if ( v3 )
        LeaveCriticalSection(v3);
      return;
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = "WTS_REMOTE_CONNECT";
    if ( a1 == 1 )
      v6 = "WTS_CONSOLE_CONNECT";
    WPP_SF_sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x22u, a1, v6, a2->dwSessionId);
  }
  TsSessionIdConnect(dwSessionId);
}
