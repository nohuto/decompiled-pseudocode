/*
 * XREFs of wil::details::lambda_call__lambda_58c84bfdfad45e155fd0baa76dfd3b86___::_lambda_call__lambda_58c84bfdfad45e155fd0baa76dfd3b86___ @ 0x180119734
 * Callers:
 *     _CEndpointCharacteristics::SetDeviceFormatAndSpatialSettings_::_1_::dtor$7 @ 0x18007C6A7 (_CEndpointCharacteristics--SetDeviceFormatAndSpatialSettings_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_58c84bfdfad45e155fd0baa76dfd3b86___::_lambda_call__lambda_58c84bfdfad45e155fd0baa76dfd3b86___(
        __int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    v1 = *a1;
    *((_BYTE *)a1 + 8) = 0;
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)g_policyConfigInternal + 32LL))(
             g_policyConfigInternal,
             *(_QWORD *)(v1 + 24));
  }
  return result;
}
