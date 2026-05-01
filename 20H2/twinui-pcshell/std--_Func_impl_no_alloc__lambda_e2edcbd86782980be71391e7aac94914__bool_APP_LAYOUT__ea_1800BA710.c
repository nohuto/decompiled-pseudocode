/*
 * XREFs of std::_Func_impl_no_alloc__lambda_e2edcbd86782980be71391e7aac94914__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call @ 0x1800BA710
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z @ 0x18001DB14 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationView@@@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_e2edcbd86782980be71391e7aac94914__bool_APP_LAYOUT_ENUM_ITEM_::_Do_call(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(a2 + 16);
  if ( v2 == **(_QWORD **)(a1 + 8) )
    return 1;
  Microsoft::WRL::ComPtr<IApplicationView>::operator=(*(__int64 **)(a1 + 16), v2);
  return 0;
}
