/*
 * XREFs of _CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor$5 @ 0x18007A7BF
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x1800C2900 (--1-$out_param_t@V-$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U-$function_deleter@P6AXPEAX@Z$1-C.c)
 */

__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 208) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 208) &= ~1u;
    return wil::details::out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(a2 + 56);
  }
  return result;
}
