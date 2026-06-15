/*
 * XREFs of ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA1C8
 * Callers:
 *     ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180035C10 (-OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA1C8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B3D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002B548 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002BF80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F0C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B80F4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BA1C8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     WPP_SF_S @ 0x1800BBFB0 (WPP_SF_S.c)
 *     ?TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800D1FC0 (-TryGetAudioSessionManager@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@.c)
 *     ?GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z @ 0x18011C310 (-GetAliasedEndpointId@@YAJPEBGPEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CAudioSrv::ProcessDeviceInternal(CAudioSrv *this, unsigned __int16 *a2)
{
  int v4; // r15d
  bool v5; // r14
  CAudioSessionManagerProvider *v6; // rcx
  unsigned int i; // ebx
  _DWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int AudioSessionManagerProvider; // eax
  CAudioSessionManagerProvider *v12; // rdi
  int AudioSessionManager; // eax
  LPVOID v14; // rbx
  struct IUnknown *v15; // rcx
  __int64 v16; // r8
  CAudioSessionManagerProvider *v17; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 *v18; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v20; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  struct IUnknown *v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+48h] BYREF

  v4 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  LODWORD(v18) = 0;
  v25 = 0;
  v26 = 0;
  if ( (*(int (__fastcall **)(_QWORD, unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v23) >= 0
    && ((int (__fastcall *)(struct IUnknown *, int *))v23->lpVtbl[2].QueryInterface)(v23, &v25) >= 0
    && v25 == 1 )
  {
    v5 = 1;
LABEL_22:
    v17 = 0LL;
    (*(void (__fastcall **)(PVOID, unsigned __int16 *, _QWORD, _QWORD, CAudioSessionManagerProvider **))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
      g_pEndpointCharacteristicsCache,
      a2,
      0LL,
      0LL,
      &v17);
    if ( v17 )
      (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v17 + 16LL))(v17);
    goto LABEL_40;
  }
  v5 = 0;
  if ( GetAliasedEndpointId(a2, &v20, (int *)&v18) >= 0
    && (*(int (__fastcall **)(_QWORD, unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v20,
         &v24) >= 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v24 + 48LL))(v24, &v25) >= 0 )
  {
    v5 = v25 == 1;
  }
  if ( (_DWORD)v18 )
  {
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
           *(_QWORD *)&g_DeviceEnumerator,
           2LL,
           14LL,
           &v22) < 0
      || (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v22 + 24LL))(v22, &v26) < 0 )
    {
      goto LABEL_48;
    }
    for ( i = 0; i < v26; ++i )
    {
      v17 = 0LL;
      v18 = 0LL;
      pv = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, CAudioSessionManagerProvider **))(*(_QWORD *)v22 + 32LL))(
             v22,
             i,
             &v17) >= 0
        && (*(int (__fastcall **)(CAudioSessionManagerProvider *, unsigned __int16 **))(*(_QWORD *)v17 + 40LL))(
             v17,
             &v18) >= 0
        && GetAliasedEndpointId(v18, (unsigned __int16 **)&pv, 0LL) >= 0
        && !(unsigned int)_o__wcsicmp(pv, a2) )
      {
        CAudioSrv::ProcessDeviceInternal(this, v18);
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(v18);
      v18 = 0LL;
      v6 = v17;
      if ( v17 )
        (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v17 + 16LL))(v17);
    }
  }
  if ( v5 )
    goto LABEL_22;
  v8 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   (__int64)v6,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 4u )
  {
    v17 = (CAudioSessionManagerProvider *)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v8,
      byte_180166FEF,
      v9,
      v10,
      (void **)&v17);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *))(*(_QWORD *)g_PolicyManager + 240LL))(
    g_PolicyManager,
    a2);
  v17 = 0LL;
  AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v17);
  v12 = v17;
  if ( AudioSessionManagerProvider >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_d589406c240c3254166a1ed404a43ff9_Traceguids, a2);
    }
    pv = 0LL;
    AudioSessionManager = CAudioSessionManagerProvider::TryGetAudioSessionManager(
                            v12,
                            a2,
                            (struct CAudioSessionManager **)&pv);
    v14 = pv;
    if ( AudioSessionManager >= 0 )
    {
      if ( pv )
      {
        v4 = CAudioSessionManager::Disconnect((__int64)pv, 0, 1);
        if ( v4 < 0 )
        {
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v14);
          if ( v12 )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v12);
          goto LABEL_46;
        }
      }
    }
    if ( v14 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release((__int64)v14);
  }
  if ( v12 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v12);
LABEL_40:
  v15 = v21;
  if ( v21 != v23 )
  {
    ATL::AtlComQIPtrAssign(&v21, v23, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v15 = v21;
  }
  if ( v15
    && ((int (__fastcall *)(struct IUnknown *, unsigned __int16 **))v15->lpVtbl[1].QueryInterface)(v15, &v18) >= 0
    && !(_DWORD)v18 )
  {
    LOBYTE(v16) = v5;
    (*(void (__fastcall **)(struct IAudioPolicyManager *, unsigned __int16 *, __int64))(*(_QWORD *)g_PolicyManager
                                                                                      + 248LL))(
      g_PolicyManager,
      a2,
      v16);
  }
LABEL_46:
  if ( v4 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSrv::ProcessDeviceInternal", 1977, v4);
LABEL_48:
  CoTaskMemFree(v20);
  v20 = 0LL;
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
}
