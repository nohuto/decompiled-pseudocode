/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140002970
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14003B3E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140001358 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140002CD8 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x1400037D4 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072E0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000F1F0 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  HRESULT Instance; // edi
  __int64 v10; // r10
  int v11; // eax
  _WORD v13[2]; // [rsp+30h] [rbp-59h] BYREF
  __int16 v14; // [rsp+34h] [rbp-55h]
  __int128 v15; // [rsp+48h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-2Dh]
  __int64 v17; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  __int64 v19; // [rsp+70h] [rbp-19h]
  __int64 v20; // [rsp+78h] [rbp-11h]
  __int128 v21; // [rsp+80h] [rbp-9h]
  __int128 v22; // [rsp+90h] [rbp+7h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v21 = v4;
  v22 = v4;
  EtwEventActivityIdControl(4LL, &v22);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v13, 0, 0x40uLL);
    v13[0] = 80;
    v15 = AEWMIGUID_PERFORMANCE;
    v16 = 0x20000;
    v14 = 1033;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v13);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_12;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_772e809a_d1b5_46e6_afac_5e169b6ff5a5,
               (LPVOID *)this + 41);
  if ( Instance >= 0 )
  {
    *((_DWORD *)this + 56) = a4;
    if ( *((struct IUnknown **)this + 40) != a3 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 40, a3);
      a4 = *((_DWORD *)this + 56);
    }
    v10 = *((_QWORD *)this + 41);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
    Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, unsigned __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 a2,
                 ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                 a4);
    if ( Instance >= 0 )
    {
      *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
      *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
      v11 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
      *((_DWORD *)this + 85) = v11;
      if ( v11 )
      {
        Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
        if ( Instance >= 0 )
        {
          if ( *((_DWORD *)this + 88) == 1 )
            CSystemAudioDeviceSharedBase::SetGraphState((unsigned __int64)this, 3);
LABEL_12:
          if ( Instance >= 0 )
            goto LABEL_13;
        }
      }
      else
      {
        Instance = -2147024882;
      }
    }
  }
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
LABEL_13:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v13, 0, 0x40uLL);
    v16 = 0x20000;
    v15 = AEWMIGUID_PERFORMANCE;
    v13[0] = 80;
    v14 = 1034;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v20 = 0LL;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v13);
  }
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_37da20c15bc235f9225204c9f98ffd3c_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBFu, Instance);
  }
  PublishDeviceGraphWnfState();
  if ( this != (CSystemAudioDeviceSharedBase *)-184LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  EtwEventActivityIdControl(4LL, &v22);
  return (unsigned int)Instance;
}
