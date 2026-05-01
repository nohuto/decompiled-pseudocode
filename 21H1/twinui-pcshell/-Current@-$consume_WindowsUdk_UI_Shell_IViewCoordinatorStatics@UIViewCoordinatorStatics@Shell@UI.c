/*
 * XREFs of ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUViewCoordinator@Shell@UI@WindowsUdk@3@XZ @ 0x18006601C
 * Callers:
 *     ??$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@Z @ 0x180065EA4 (--$call@AEAV_lambda_711c13f4a08a1e89e6ea62835a20ef04_@@@-$factory_cache_entry@UViewCoordinator@S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18018E8E8 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 48LL))(v2, &v6);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a2 = v6;
  return a2;
}
