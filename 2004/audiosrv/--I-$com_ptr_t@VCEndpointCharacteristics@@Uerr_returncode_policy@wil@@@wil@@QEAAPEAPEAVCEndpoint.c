/*
 * XREFs of ??I?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAVCEndpointCharacteristics@@XZ @ 0x1800720E4
 * Callers:
 *     AudioServerIsOffloadCapable @ 0x1800E0940 (AudioServerIsOffloadCapable.c)
 *     ?RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z @ 0x1800F7DB0 (-RuntimeClassInitialize@DialogSession@@QEAAJPEAUIAudioProcess@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F7FEC (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::operator&(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
