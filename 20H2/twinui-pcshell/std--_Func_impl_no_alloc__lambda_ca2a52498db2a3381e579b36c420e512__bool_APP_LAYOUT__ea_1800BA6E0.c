/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ca2a52498db2a3381e579b36c420e512__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800BA6E0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

bool __fastcall std::_Func_impl_no_alloc__lambda_ca2a52498db2a3381e579b36c420e512__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(*(__int64 **)(a1 + 16), *(_QWORD *)(a2 + 16));
  return PPIWin32VtcLayoutOperation::_sideBarLocation != 0;
}
