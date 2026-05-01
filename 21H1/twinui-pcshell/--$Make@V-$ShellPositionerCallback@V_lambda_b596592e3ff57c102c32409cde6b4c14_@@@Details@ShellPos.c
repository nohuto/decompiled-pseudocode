/*
 * XREFs of ??$Make@V?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@@12@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x1803AF42C
 * Callers:
 *     ??$PerformCallbackOnView@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@ShellPositionerHelpers@@YAJPEAUIUnknown@@PEAUIApplicationView@@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x1803AF8D4 (--$PerformCallbackOnView@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@ShellPositionerHelpers@@YA.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180069E90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositionerHelpers@@QEAA@$$QEAV_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Z @ 0x1803B0110 (--0-$ShellPositionerCallback@V_lambda_b596592e3ff57c102c32409cde6b4c14_@@@Details@ShellPositione.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>,_lambda_b596592e3ff57c102c32409cde6b4c14_>(
        __int64 *a1,
        __int64 a2)
{
  void *v4; // rax
  volatile int *v5; // rdx
  __int64 v6; // rdi

  *a1 = 0LL;
  v4 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>::ShellPositionerCallback<_lambda_b596592e3ff57c102c32409cde6b4c14_>(
           v4,
           a2);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
        *a1,
        v5);
    *a1 = v6;
  }
  return a1;
}
