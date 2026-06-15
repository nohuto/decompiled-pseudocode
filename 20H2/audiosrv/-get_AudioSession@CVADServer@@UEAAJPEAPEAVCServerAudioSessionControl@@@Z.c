/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180044260
 * Callers:
 *     <none>
 * Callees:
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180044378 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800443C0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int AudioSessionControl; // edi
  struct CServerAudioSessionControl **v5; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  struct CServerAudioSessionControl *v7; // rbx

  AudioSessionControl = 0;
  if ( *((_DWORD *)this + 46) )
  {
    v5 = (struct CServerAudioSessionControl **)((char *)this + 160);
    if ( !*((_QWORD *)this + 20) )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
      if ( !*v5 )
        AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(
                                *((CAudioSessionManager **)this + 19),
                                *((_DWORD *)this + 16),
                                1,
                                *((struct CAudioSession **)this + 21),
                                v5);
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( AudioSessionControl )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
            AudioSessionControl);
        }
        goto LABEL_12;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, *v5);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v5 + 8) & -(__int64)(*v5 != 0LL))) )
    {
      AudioSessionControl = -2147024882;
      goto LABEL_26;
    }
    *a2 = *v5;
    v7 = *v5;
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)*v5 + 8LL))(*v5);
    _InterlockedIncrement((volatile signed __int32 *)v7 + 6);
LABEL_12:
    if ( (AudioSessionControl & 0x80000000) == 0 )
      return AudioSessionControl;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x557u, AudioSessionControl);
    return AudioSessionControl;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
  }
  return 2290679809LL;
}
