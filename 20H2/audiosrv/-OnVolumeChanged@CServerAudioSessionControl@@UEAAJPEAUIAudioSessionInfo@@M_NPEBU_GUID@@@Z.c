/*
 * XREFs of ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800324A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_qd @ 0x1800BD798 (WPP_SF_qd.c)
 *     WPP_SF_Sgd @ 0x1800CD284 (WPP_SF_Sgd.c)
 */

__int64 __fastcall CServerAudioSessionControl::OnVolumeChanged(
        CServerAudioSessionControl *this,
        struct IAudioSessionInfo *a2,
        float a3,
        char a4,
        struct _GUID *a5)
{
  int v5; // r8d
  int MediaEvent; // ebp
  CAudioSessionManager *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned int v12; // ebx
  unsigned int v13; // edi
  unsigned int *v14; // rax
  unsigned __int64 v15; // r8
  unsigned int *v16; // r14
  GUID *v17; // rax
  unsigned __int64 v18; // rdx
  _WORD *v19; // rcx
  GUID v20; // xmm0
  __int64 v21; // r9
  __int16 v22; // ax
  HANDLE ProcessHeap; // rax
  __int64 v25; // [rsp+20h] [rbp-48h]
  double v26; // [rsp+20h] [rbp-48h]

  MediaEvent = 0;
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
  {
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, 0LL);
      v9 = WPP_GLOBAL_Control;
    }
    if ( v9 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v9 + 28) & 0x40) != 0
      && *((_BYTE *)v9 + 25) >= 4u )
    {
      v26 = a3;
      WPP_SF_Sgd(*((_QWORD *)v9 + 2), (_DWORD)a2, v5, 0, SLOBYTE(v26), a4);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v10 = *((_QWORD *)this + 9);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 728);
    v12 = 2 * *(_DWORD *)(v11 - 16) + 2;
    v13 = 2 * *(_DWORD *)(v11 - 16) + 74;
    v14 = (unsigned int *)operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
    v16 = v14;
    if ( v14 )
    {
      *v14 = v13;
      v17 = a5;
      if ( !a5 )
        v17 = &GUID_00000000_0000_0000_0000_000000000000;
      v18 = (unsigned __int64)v12 >> 1;
      v19 = v16 + 18;
      v20 = *v17;
      v16[1] = 1;
      *((float *)v16 + 12) = a3;
      *(GUID *)(v16 + 7) = v20;
      v16[6] = v12;
      *((_BYTE *)v16 + 52) = a4;
      v21 = *(_QWORD *)(*((_QWORD *)this + 9) + 728LL);
      if ( v18 )
      {
        v15 = 2147483646 - v18;
        v21 -= (__int64)v19;
        while ( v15 + v18 )
        {
          v22 = *(_WORD *)((char *)v19 + v21);
          if ( !v22 )
            break;
          *v19++ = v22;
          if ( !--v18 )
          {
            --v19;
            break;
          }
        }
        *v19 = 0;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v25) = *((_DWORD *)this + 20);
        WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v16, v25);
      }
      MediaEvent = GenerateMediaEvent(v16, *((unsigned int *)this + 20), v15, v21);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v16);
      if ( MediaEvent < 0 )
        AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::OnVolumeChanged", 0x46Bu, MediaEvent);
    }
  }
  if ( this != (CServerAudioSessionControl *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  return (unsigned int)MediaEvent;
}
