/*
 * XREFs of ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D74C4
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180017480 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800DA450 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002B5B4 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800529B8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CPolicyConfig::DisconnectAllRenderEndpoints(__int64 a1)
{
  _DWORD *v1; // rcx
  unsigned int i; // ebx
  bool v3; // di
  unsigned int v4; // [rsp+30h] [rbp-50h] BYREF
  __int64 v5; // [rsp+38h] [rbp-48h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  __int64 v7; // [rsp+48h] [rbp-38h] BYREF
  void **p_pv; // [rsp+50h] [rbp-30h] BYREF
  void *v9; // [rsp+58h] [rbp-28h] BYREF
  char v10; // [rsp+60h] [rbp-20h]

  v5 = 0LL;
  v1 = (_DWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                   a1,
                   _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)[1];
  if ( *v1 > 4u )
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v1, byte_180168320, 0LL, 0LL, 2, (__int64)&p_pv);
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v4) >= 0 )
  {
    for ( i = 0; i < v4; ++i )
    {
      v7 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, i, &v7) >= 0 )
      {
        pv = 0LL;
        p_pv = &pv;
        v9 = 0LL;
        v10 = 1;
        v3 = (*(int (__fastcall **)(__int64, void **))(*(_QWORD *)v7 + 40LL))(v7, &v9) >= 0;
        if ( v10 )
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
            p_pv,
            v9);
        if ( v3 )
          CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
        if ( pv )
          CoTaskMemFree(pv);
      }
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
