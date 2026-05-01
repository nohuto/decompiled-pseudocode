/*
 * XREFs of ??1?$ComPtr@V?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@@WRL@Microsoft@@QEAA@XZ @ 0x1803D1300
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_b596592e3ff57c102c32409cde6b4c14____::_1_::dtor$2 @ 0x1803D0A8A (_ShellPositionerHelpers--PerformCallbackOnView__lambda_b596592e3ff57c102c32409cde6b_ea_1803D0A8A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A5B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>>::~ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
