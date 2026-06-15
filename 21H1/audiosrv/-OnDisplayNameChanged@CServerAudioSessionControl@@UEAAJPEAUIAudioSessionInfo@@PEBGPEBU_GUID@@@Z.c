/*
 * XREFs of ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800CC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180062370 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ABC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_qd @ 0x1800BE338 (WPP_SF_qd.c)
 *     WPP_SF_SS @ 0x1800CDCDC (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnDisplayNameChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        char *a3,
        struct _GUID *a4)
{
  int MediaEvent; // edi
  __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rax
  unsigned int v10; // r15d
  unsigned __int64 v11; // r12
  unsigned int v12; // r13d
  _DWORD *v13; // rax
  _DWORD *v14; // rbx
  GUID *v15; // rax
  GUID v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+20h] [rbp-38h]

  MediaEvent = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      18,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      (__int64)a3);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = *((_QWORD *)this + 9);
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(v7 + 728) - 16LL);
    v9 = -1LL;
    v10 = 2 * v8 + 2;
    do
      ++v9;
    while ( *(_WORD *)&a3[2 * v9] );
    v11 = 2 * v9 + 2;
    v12 = v11 + 2 * v8 + 74;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      *v13 = v12;
      v15 = &GUID_00000000_0000_0000_0000_000000000000;
      if ( a4 )
        v15 = a4;
      v16 = *v15;
      v14[1] = 16;
      v14[6] = v10;
      *(GUID *)(v14 + 7) = v16;
      v14[12] = v11;
      v14[13] = v10 + 72;
      StringCbCopyW((char *)v14 + 72, v10, *(char **)(*((_QWORD *)this + 9) + 728LL));
      StringCbCopyW((char *)v14 + (unsigned int)v14[13], v11, a3);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v20) = *((_DWORD *)this + 20);
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x13u,
          (__int64)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
          v14,
          v20);
      }
      MediaEvent = GenerateMediaEvent(v14, *((unsigned int *)this + 20), v17, v18);
      operator delete(v14);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnDisplayNameChanged", 402, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
