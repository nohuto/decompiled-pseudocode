/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___ @ 0x1800EA260
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180013588 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_de7ed09d8f6289655c27b09af6e26d02___(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  _QWORD *i; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v11);
    v9 = *v8 - *(_QWORD *)(a4 + 48);
    if ( *v8 == *(_QWORD *)(a4 + 48) )
      v9 = v8[1] - *(_QWORD *)(a4 + 56);
    if ( !v9 )
      break;
  }
  *a1 = i;
  return a1;
}
