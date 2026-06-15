/*
 * XREFs of ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180043D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800CB490 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800CD10C (WPP_SF_SS.c)
 *     WPP_SF_qqS @ 0x1800CD324 (WPP_SF_qqS.c)
 */

__int64 __fastcall CServerAudioSessionControl::FinishConstruction(
        CServerAudioSessionControl *this,
        int a2,
        char a3,
        struct CAudioSession *a4)
{
  struct CAudioSession *v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      11,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      0LL);
  }
  *((_DWORD *)this + 20) = a2;
  *((_QWORD *)this + 9) = a4;
  v8 = a4;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qqS(*((_QWORD *)WPP_GLOBAL_Control + 2), 12, a3, (_DWORD)this, (char)a4, 0LL);
    v8 = (struct CAudioSession *)*((_QWORD *)this + 9);
  }
  (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD, CServerAudioSessionControl *))(**((_QWORD **)this + 9) + 224LL))(
          *((_QWORD *)this + 9),
          this);
  if ( v10 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, this, a4);
    }
    v13 = *((_QWORD *)this + 9);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *((_QWORD *)this + 9) = 0LL;
    }
  }
  else
  {
    v11 = *((_QWORD *)this + 9);
    LOBYTE(v9) = a3;
    *((_BYTE *)this + 84) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 320LL))(v11, v9);
  }
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::FinishConstruction", 0x7Du, v10);
  return (unsigned int)v10;
}
