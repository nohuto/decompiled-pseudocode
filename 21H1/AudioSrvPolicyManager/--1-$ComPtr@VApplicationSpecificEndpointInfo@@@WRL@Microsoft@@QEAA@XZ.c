/*
 * XREFs of ??1?$ComPtr@VApplicationSpecificEndpointInfo@@@WRL@Microsoft@@QEAA@XZ @ 0x18000D434
 * Callers:
 *     _CWindowsPolicyManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180040A2D (_CWindowsPolicyManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$5 @ 0x180041488 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$5.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::ComPtr<ApplicationSpecificEndpointInfo>::~ComPtr<ApplicationSpecificEndpointInfo>(
        _QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
