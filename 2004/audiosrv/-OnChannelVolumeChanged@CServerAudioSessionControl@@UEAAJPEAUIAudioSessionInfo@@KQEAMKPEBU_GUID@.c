/*
 * XREFs of ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800CC500
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062470 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800BE428 (WPP_SF_qd.c)
 *     WPP_SF_Sdg @ 0x1800C2F88 (WPP_SF_Sdg.c)
 *     WPP_SF_Sdd @ 0x1800CBD80 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnChannelVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        unsigned int a3,
        float *const a4,
        unsigned int a5,
        struct _GUID *a6)
{
  int MediaEvent; // edi
  CAudioSessionManager *v10; // rcx
  __int64 v11; // rax
  _DWORD *v12; // rax
  _DWORD *v13; // rbx
  GUID *v14; // rax
  GUID v15; // xmm0
  __int64 v16; // r15
  char *v17; // r15
  __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+20h] [rbp-38h]
  unsigned int v23; // [rsp+60h] [rbp+8h]

  MediaEvent = 0;
  v10 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x24u,
        (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
        0LL);
      v10 = WPP_GLOBAL_Control;
    }
    if ( v10 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v10 + 28) & 0x40) != 0
      && *((_BYTE *)v10 + 25) >= 4u )
    {
      WPP_SF_Sdd(*((_QWORD *)v10 + 2), 0x25u, (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v11 = *((_QWORD *)this + 9);
  if ( v11 )
  {
    v23 = 2 * *(_DWORD *)(*(_QWORD *)(v11 + 728) - 16LL) + 2;
    v12 = operator new[]((v23 + 4 * a3 + 75) & 0xFFFFFFFC, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      *v12 = (v23 + 4 * a3 + 75) & 0xFFFFFFFC;
      v14 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a6 )
        v14 = a6;
      v15 = *v14;
      v13[13] = a5;
      *(GUID *)(v13 + 7) = v15;
      v13[1] = 2;
      v13[6] = v23;
      v16 = (v23 + 75) & 0xFFFFFFFC;
      v13[14] = a3;
      v13[12] = v16;
      v17 = (char *)v13 + v16;
      if ( a3 )
      {
        v18 = v17 - (char *)a4;
        do
        {
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            LODWORD(v22) = MediaEvent;
            WPP_SF_Sdg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x26u,
              (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
              0LL,
              v22,
              *a4);
          }
          ++MediaEvent;
          *(float *const)((char *)a4 + v18) = *a4;
          ++a4;
        }
        while ( MediaEvent < a3 );
      }
      StringCbCopyW((char *)v13 + 72, v23, *(char **)(*((_QWORD *)this + 9) + 728LL));
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v22) = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x27u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v13,
          v22);
      }
      MediaEvent = GenerateMediaEvent(v13, *((unsigned int *)this + 20), v19, v20);
      operator delete(v13);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnChannelVolumeChanged", 1373, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
