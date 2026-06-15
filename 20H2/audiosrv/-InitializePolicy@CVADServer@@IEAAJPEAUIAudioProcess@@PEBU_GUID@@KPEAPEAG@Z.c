/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180016E00
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x1800192A0 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180017660 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180018390 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180018480 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x1800188A0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019E70 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001B670 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B900 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005EA28 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x18006D32C (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800BB410 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D0A20 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D68F4 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800D6ABC (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  __int64 v9; // rdi
  struct _GUID v10; // xmm0
  int OwningThread; // ebx
  __int64 v12; // r12
  int v13; // ebx
  int AudioSession; // esi
  __int64 v15; // rcx
  CVADServer *v16; // rax
  BOOL v17; // r14d
  char *v18; // rbx
  int v19; // r13d
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  struct IAudioProcess *v24; // rcx
  __int64 v25; // rbx
  unsigned __int16 *v27; // rdx
  void **v28; // r14
  __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int16 v31; // ax
  unsigned __int16 *v32; // rax
  void *v33; // rbx
  HANDLE ProcessHeap; // rax
  int *v35; // rbx
  __int64 v36; // rdx
  CVADServer *v37; // rsi
  const unsigned __int16 *v38; // r14
  int v39; // eax
  int AudioSessionManagerInternal; // eax
  __int64 v41; // rdx
  CVADServer *v42; // rsi
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // ebx
  int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // [rsp+20h] [rbp-81h]
  unsigned int v49; // [rsp+40h] [rbp-61h]
  __int64 v50; // [rsp+48h] [rbp-59h] BYREF
  __int64 v51; // [rsp+50h] [rbp-51h] BYREF
  CVADServer *v52; // [rsp+58h] [rbp-49h]
  __int64 v53; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int16 **v54; // [rsp+68h] [rbp-39h] BYREF
  int v55; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v56; // [rsp+74h] [rbp-2Dh]
  __int64 v57; // [rsp+78h] [rbp-29h] BYREF
  __int64 v58; // [rsp+80h] [rbp-21h] BYREF
  struct CAudioSessionManager *v59[2]; // [rsp+88h] [rbp-19h] BYREF
  const struct _GUID *v60; // [rsp+98h] [rbp-9h]
  struct _GUID v61; // [rsp+A0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v60 = a3;
  v52 = this;
  v54 = a5;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v57 = v9;
  v10 = *a3;
  *(struct _GUID *)v59 = v10;
  v61 = v10;
  v58 = 0LL;
  v53 = 0LL;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    *(struct CAudioSessionManager **)&v10.Data1 = v59[0];
    if ( OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
      a4 |= 0x20000000u;
  }
  v12 = *(_QWORD *)v61.Data4;
  if ( __PAIR128__(*(unsigned __int64 *)v61.Data4, *(unsigned __int64 *)&v10.Data1) != *(_OWORD *)&GUID_SystemSounds_AudioSessionId )
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  LODWORD(v50) = a4 & 0x10000;
  v56 = a4 & 0x60000000;
  v13 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v13 = (a4 >> 28) & 1;
  v49 = v13;
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 26),
                   &v58);
  if ( AudioSession < 0 )
    goto LABEL_51;
  v15 = v53;
  if ( v53 != v58 )
  {
    v15 = 0LL;
    v53 = 0LL;
    if ( v58 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v58)(v58, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v53);
      v15 = v53;
    }
  }
  if ( !v15 )
  {
    AudioSession = -2147467262;
LABEL_51:
    AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x508u, AudioSession);
    goto LABEL_52;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v55);
  if ( AudioSession < 0 )
    goto LABEL_51;
  if ( !v55 )
  {
    v13 |= 8u;
LABEL_19:
    v49 = v13;
    goto LABEL_20;
  }
  if ( v55 == 1 )
  {
    v13 &= ~2u;
    goto LABEL_19;
  }
LABEL_20:
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
    v49 = v13 | 0x20;
  v16 = v52;
  *((_DWORD *)v52 + 67) = a4;
  v17 = v50 != 0;
  v18 = (char *)v16 + 72;
  AudioSession = CAudioEndpointId::Initialize((CVADServer *)((char *)v16 + 72), *((const unsigned __int16 **)v16 + 26));
  if ( AudioSession < 0 )
    goto LABEL_45;
  if ( (_DWORD)v50
    && *(_QWORD *)&v10.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    && v12 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    AudioSession = -2147024809;
    v19 = v50;
LABEL_39:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, AudioSession);
    goto LABEL_40;
  }
  *(_OWORD *)(v18 + 24) = *(_OWORD *)v59;
  v19 = v50;
  if ( !(_DWORD)v50 )
  {
    v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v20 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)(v20 + 2 * v21) );
    }
    else
    {
      LODWORD(v21) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v18 + 16, v20, (unsigned int)v21);
    v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)(v22 + 2 * v23) );
    }
    else
    {
      LODWORD(v23) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v18 + 8, v22, (unsigned int)v23);
  }
  *((_DWORD *)v18 + 12) = v17;
  AudioSession = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)(v18 + 8));
  if ( AudioSession < 0 )
    goto LABEL_39;
LABEL_40:
  if ( AudioSession < 0
    || ((*((_DWORD *)v18 + 16) = v17, v24 = a2, !v19)
      ? (*((_DWORD *)v18 + 14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2), v24 = a2)
      : (struct IAudioProcess *)(*((_DWORD *)v18 + 14) = 0),
        *((_DWORD *)v18 + 15) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(v24),
        AudioSession = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v18),
        AudioSession < 0) )
  {
LABEL_45:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, AudioSession);
    v19 = v50;
  }
  if ( AudioSession < 0 )
    goto LABEL_51;
  AudioSession = CAudioSessionInstanceId::ToString(v18, &v57);
  v9 = v57;
  if ( AudioSession < 0 )
    goto LABEL_51;
  v25 = (unsigned int)(*(_DWORD *)(v57 - 16) + 1);
  if ( (unsigned __int64)(2 * v25) > 0x40000 )
  {
    *v54 = 0LL;
LABEL_50:
    AudioSession = -2147024882;
    goto LABEL_51;
  }
  v27 = (unsigned __int16 *)operator new[](2 * v25, (const struct std::nothrow_t *)&std::nothrow);
  v28 = (void **)v54;
  *v54 = v27;
  if ( !v27 )
    goto LABEL_50;
  AudioSession = 0;
  if ( (unsigned __int64)(v25 - 1) > 0x7FFFFFFE )
    AudioSession = -2147024809;
  if ( AudioSession < 0 )
  {
    if ( v25 )
      *v27 = 0;
  }
  else
  {
    if ( v25 )
    {
      v29 = 2147483646 - v25;
      v30 = v9 - (_QWORD)v27;
      do
      {
        if ( !(v29 + v25) )
          break;
        v31 = *(unsigned __int16 *)((char *)v27 + v30);
        if ( !v31 )
          break;
        *v27++ = v31;
        --v25;
      }
      while ( v25 );
    }
    v32 = v27 - 1;
    if ( v25 )
      v32 = v27;
    *v32 = 0;
    AudioSession = -2147024774;
    if ( v25 )
      AudioSession = 0;
  }
  if ( AudioSession < 0 )
  {
    v33 = *v28;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v33);
    *v28 = 0LL;
    goto LABEL_51;
  }
  v35 = 0LL;
  v54 = 0LL;
  EnterCriticalSection(&g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
      g_SingletonAudioSessionManagerProvider,
      v36,
      &v54);
    v35 = (int *)v54;
  }
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( !v35 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
    }
    AudioSession = -2004287487;
    goto LABEL_51;
  }
  if ( WPP_GLOBAL_Control == (CAudioSessionManager *)&WPP_GLOBAL_Control
    || (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) == 0 )
  {
    v37 = v52;
  }
  else
  {
    v37 = v52;
    if ( *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
        *((_QWORD *)v52 + 26));
  }
  v38 = (const unsigned __int16 *)*((_QWORD *)v37 + 26);
  if ( !v38 )
  {
    AudioSession = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)0x80070057LL,
      v48);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v35);
    goto LABEL_51;
  }
  v51 = 0LL;
  v39 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          v38,
          &v51);
  AudioSession = v39;
  if ( v39 >= 0 )
  {
    v50 = 0LL;
    AudioSessionManagerInternal = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v51)(
                                    v51,
                                    &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                    &v50);
    AudioSession = AudioSessionManagerInternal;
    if ( AudioSessionManagerInternal >= 0 )
    {
      AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                      (CAudioSessionManagerProvider *)v35,
                                      v38,
                                      v59);
      AudioSession = AudioSessionManagerInternal;
      if ( AudioSessionManagerInternal >= 0 )
      {
        if ( v50 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
        if ( v51 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
        goto LABEL_100;
      }
      v41 = 174LL;
    }
    else
    {
      v41 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v41,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)AudioSessionManagerInternal,
      v48);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v50);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v39,
      v48);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
  if ( AudioSession < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v35);
    goto LABEL_51;
  }
LABEL_100:
  v42 = v52;
  if ( *((_QWORD *)v52 + 19) )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
  *((struct CAudioSessionManager **)v42 + 19) = v59[0];
  if ( !ATL::SafeDecrementReferenceMultiThread(v35 + 3) )
  {
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v35 + 24LL))(v35, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( g_DuckingManager )
  {
    v43 = *(_QWORD *)g_DuckingManager;
    v44 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(v43 + 48))(g_DuckingManager, v44);
  }
  v45 = v49;
  if ( v19
    && *(_QWORD *)&v60->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v60->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    v45 = v49 | 4;
  }
  v46 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
  if ( v46 == 1 )
  {
    v47 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v47);
  }
  else if ( v46 == 2 )
  {
    CPolicyConfig::DisconnectAllRenderEndpoints();
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, v42);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   *((CAudioSessionManager **)v42 + 19),
                   a2,
                   (CVADServer *)((char *)v42 + 72),
                   v45,
                   v56,
                   *((_DWORD *)v42 + 16),
                   (struct CAudioSession **)v42 + 21);
  if ( AudioSession < 0 )
    goto LABEL_51;
LABEL_52:
  if ( v53 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
  if ( v58 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 24) + 8LL))(*(_QWORD *)(v9 - 24));
  return (unsigned int)AudioSession;
}
