/*
 * XREFs of ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000D3E4
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$0 @ 0x180041A5B (_CApplicationManager--RpcGetProcess_--_1_--dtor$0.c)
 *     __lambda_da3c4423bc006446ff702ddfa9ae13f4_::_lambda_invoker_cdecl__::_1_::dtor$1 @ 0x180041C58 (__lambda_da3c4423bc006446ff702ddfa9ae13f4_--_lambda_invoker_cdecl__--_1_--dtor$1.c)
 *     _CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange_::_1_::dtor$0 @ 0x180041CC4 (_CApplicationManager--RegisterMixedRealitySpatialAudioFormatPolicyChange_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 32LL))(v1);
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
    }
  }
  return result;
}
