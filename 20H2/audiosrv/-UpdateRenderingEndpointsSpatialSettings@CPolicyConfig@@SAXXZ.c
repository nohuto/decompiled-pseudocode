/*
 * XREFs of ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18005854C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_::_Do_call @ 0x1800691C0 (std--_Func_impl_no_alloc__lambda_65e9a6d7f64f8b4ca9838a0c7b29edbf__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_::_Do_call @ 0x1800D8C80 (std--_Func_impl_no_alloc__lambda_98875cb7b650817bfd28d2b98d662752__void_--_Do_call.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800D8CF0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 *     PolicyConfigSetAccessibilityAudioMonoMixState @ 0x1800D9880 (PolicyConfigSetAccessibilityAudioMonoMixState.c)
 * Callees:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18001BF40 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18002AF34 (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(void)
{
  void *v0; // rcx
  unsigned int v1; // ebx
  unsigned int v2; // [rsp+30h] [rbp-50h] BYREF
  int v3; // [rsp+34h] [rbp-4Ch] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-40h] BYREF
  __int64 v6; // [rsp+48h] [rbp-38h] BYREF
  CEndpointCharacteristics *v7; // [rsp+50h] [rbp-30h]
  struct _tagpropertykey v8; // [rsp+58h] [rbp-28h] BYREF

  v2 = 0;
  v5 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         0LL,
         1LL,
         &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v2) >= 0 )
  {
    v7 = 0LL;
    v0 = 0LL;
    pv = 0LL;
    v8.fmtid = (GUID)PKEY_SpatialAudio_Signaling_Key;
    v8.pid = 2;
    v1 = 0;
    if ( v2 )
    {
      do
      {
        v6 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 32LL))(v5, v1, &v6) >= 0
          && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0
          && (*(int (__fastcall **)(PVOID, LPVOID, __int64))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
               g_pEndpointCharacteristicsCache,
               pv,
               1LL) >= 0 )
        {
          v3 = 0;
          CEndpointCharacteristics::ProcessPropertyChange(v7, &v8, &v3);
          if ( v3 )
            CPolicyConfig::DisconnectHelper((const unsigned __int16 *)pv);
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v1;
      }
      while ( v1 < v2 );
      v0 = pv;
    }
    CoTaskMemFree(v0);
    pv = 0LL;
    if ( v7 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
}
