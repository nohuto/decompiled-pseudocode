/*
 * XREFs of ?VAD_AudiosrvAudioDGProcessTerminated@@YAX_N@Z @ 0x18002A7A0
 * Callers:
 *     ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x18002A790 (-OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002AD50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z @ 0x18002ADA8 (-NotifyAudioDGTerminated@CAudioSessionManagerProvider@@QEAAX_N@Z.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002AEC8 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VAD_AudiosrvAudioDGProcessTerminated(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rcx
  struct CAudioSessionManagerProvider *v3; // [rsp+30h] [rbp-9h] BYREF
  int v4; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v6; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v7; // [rsp+50h] [rbp+17h]
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  void *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v1 = (unsigned __int8)a1;
  v2 = *((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     a1,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
       + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v4 = v1;
    v13 = &v4;
    v14 = 4;
    v15 = 0;
    v5[0] = 184549376;
    v5[1] = 5;
    v6 = 0LL;
    v7 = *(unsigned __int16 **)(v2 + 8);
    v8 = *v7;
    v9 = 2;
    v10 = &unk_180166001;
    v11 = 29;
    v12 = 1;
    LODWORD(v3) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v2 + 32), v5, 0LL);
  }
  v3 = 0LL;
  if ( (int)GetAudioSessionManagerProvider(&v3) >= 0 )
    CAudioSessionManagerProvider::NotifyAudioDGTerminated(v3, v1);
  if ( g_pVolumeProvider )
    (*(void (__fastcall **)(struct IVolumeProvider *))(*(_QWORD *)g_pVolumeProvider + 40LL))(g_pVolumeProvider);
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v3);
}
