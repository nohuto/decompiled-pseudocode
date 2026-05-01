/*
 * XREFs of _lambda_0fe7ca22b45d32197121ecf13016f570_::_lambda_0fe7ca22b45d32197121ecf13016f570_ @ 0x18044DBF8
 * Callers:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18044DDF0 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0fe7ca22b45d32197121ecf13016f570_::_lambda_0fe7ca22b45d32197121ecf13016f570_(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 8));
  *(_DWORD *)(a1 + 16) = *a4;
  *(_DWORD *)(a1 + 20) = *a5;
  *(_DWORD *)(a1 + 24) = *a6;
  return a1;
}
