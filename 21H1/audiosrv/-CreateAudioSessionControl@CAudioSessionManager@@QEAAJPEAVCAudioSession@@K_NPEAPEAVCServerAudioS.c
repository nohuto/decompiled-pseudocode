/*
 * XREFs of ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180044BB4
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180044AE0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800CF7C0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 * Callees:
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180044CA8 (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180044CD8 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800BE2B0 (WPP_SF_qS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::CreateAudioSessionControl(
        CAudioSessionManager *this,
        struct CAudioSession *a2,
        unsigned int a3,
        char a4,
        struct CServerAudioSessionControl **a5)
{
  CServerAudioSessionControl *v8; // rax
  CServerAudioSessionControl *v9; // rax
  __int64 v10; // r8
  CServerAudioSessionControl *v11; // rbx
  int v12; // edi

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids, 0LL);
  }
  v8 = (CServerAudioSessionControl *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    v11 = 0LL;
    goto LABEL_17;
  }
  v9 = CServerAudioSessionControl::CServerAudioSessionControl(v8);
  v11 = v9;
  if ( !v9 )
  {
LABEL_17:
    v12 = -2147024882;
    goto LABEL_18;
  }
  LOBYTE(v10) = a4;
  v12 = (*(__int64 (__fastcall **)(CServerAudioSessionControl *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v9 + 256LL))(
          v9,
          a3,
          v10,
          a2);
  if ( v12 < 0 )
  {
LABEL_18:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1FEu, v12);
    goto LABEL_9;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12,
      (unsigned int)&WPP_fe6ee92afb383bb0444ef271973e06e1_Traceguids,
      (_DWORD)v11,
      0LL);
  }
  CServerAudioSessionControl::AddClientReference(v11);
  *a5 = v11;
LABEL_9:
  if ( v11 )
    (*(void (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v12;
}
