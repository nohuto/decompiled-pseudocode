/*
 * XREFs of ?Invoke@?$delegate@U?$AsyncOperationCompletedHandler@I@Foundation@Windows@winrt@@V_lambda_6db4ebbdf38e00e5e14b8dc39eeb8db6_@@@impl@winrt@@UEAAHPEAXH@Z @ 0x180440280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<unsigned int>,_lambda_6db4ebbdf38e00e5e14b8dc39eeb8db6_>::Invoke(
        __int64 a1)
{
  signed int v1; // eax
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+40h] [rbp-18h] BYREF
  int v4; // [rsp+60h] [rbp+8h] BYREF

  v3[0] = 0LL;
  v3[1] = *(_QWORD *)(a1 + 8);
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void (***)(void)), _QWORD *, void *, int, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
         *(_QWORD *)(a1 + 16),
         _lambda_54b66c8acde6d03bc095a0ebbc80a1f1_::_lambda_invoker_cdecl_,
         v3,
         &winrt::impl::guid_storage<winrt::impl::ICallbackWithNoReentrancyToApplicationSTA>::value,
         5,
         0LL);
  try
  {
    if ( v1 < 0 )
      winrt::throw_hresult(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
