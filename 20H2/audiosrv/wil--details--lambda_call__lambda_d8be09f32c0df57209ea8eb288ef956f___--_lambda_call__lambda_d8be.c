/*
 * XREFs of wil::details::lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___::_lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___ @ 0x180118B18
 * Callers:
 *     _CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c____::_1_::dtor$0 @ 0x180117C0D (_CEndpointCharacteristics--GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c____--_1_--d.c)
 *     _CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b____::_1_::dtor$0 @ 0x180117EBA (_CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b____--_1_--d.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___::_lambda_call__lambda_d8be09f32c0df57209ea8eb288ef956f___(
        __int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  if ( *((_BYTE *)a1 + 8) )
  {
    *((_BYTE *)a1 + 8) = 0;
    v4 = 0LL;
    v1 = *a1;
    v3 = 0LL;
    return (*(__int64 (__fastcall **)(_QWORD, void *, __int128 *))(**(_QWORD **)(v1 + 40) + 48LL))(
             *(_QWORD *)(v1 + 40),
             &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
             &v3);
  }
  return result;
}
