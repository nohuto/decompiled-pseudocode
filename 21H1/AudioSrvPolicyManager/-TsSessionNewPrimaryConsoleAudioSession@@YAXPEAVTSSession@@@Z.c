/*
 * XREFs of ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D258
 * Callers:
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18002D398 (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x18002ECD4 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x1800300F0 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800055F4 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x180015684 (WPP_SF_dd.c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18002D1D4 (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 */

void __fastcall TsSessionNewPrimaryConsoleAudioSession(struct TSSession *a1)
{
  int *v2; // rbx
  _QWORD *v3; // rax
  int *v4; // rcx
  int v5; // esi
  int v6; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  EnterCriticalSection(&stru_180056188);
  if ( *(_DWORD *)a1 )
  {
    v3 = qword_180056208;
    while ( v3 )
    {
      v4 = (int *)v3[2];
      v3 = (_QWORD *)*v3;
      if ( *v4 && v4[86] )
      {
        v2 = v4;
        break;
      }
    }
    if ( v2 != (int *)a1 )
    {
      v5 = -2;
      if ( v2 )
      {
        v2[86] = 0;
        v5 = *v2;
        if ( g_MaxSessions <= 1 )
          v2[13] = 1;
      }
      *((_DWORD *)a1 + 13) = 0;
      *((_DWORD *)a1 + 86) = 1;
      if ( g_MaxSessions <= 1 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v6 = *(_DWORD *)a1;
          WPP_SF_dd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xEu, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids, v5, v6);
        }
        if ( (int)QueueSessionMuteUnmute(v5, *(_DWORD *)a1) < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xFu, &WPP_e1a7a5e290533704050c869bb9bcb4b5_Traceguids);
        }
      }
    }
  }
  LeaveCriticalSection(&stru_180056188);
}
