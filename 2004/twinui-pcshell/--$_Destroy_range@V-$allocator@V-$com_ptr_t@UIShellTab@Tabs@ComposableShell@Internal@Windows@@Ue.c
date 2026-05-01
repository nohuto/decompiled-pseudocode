/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIShellTab@Tabs@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180145494
 * Callers:
 *     ?_Reallocate_exactly@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18002A520 (-_Reallocate_exactly@-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-.c)
 *     _std::vector_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_Windows::Internal::Shell::Holographic::IViewHostItem_wil::err_returncode_policy_____::_Emplace_reallocate_Windows::Internal::Shell::Holographic::IViewHostItem___&__::_1_::catch$33 @ 0x180145600 (_std--vector_wil--com_ptr_t_Windows--Internal--Shell--Holographic--IViewHostItem_wil--err_return.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180145CA4 (--$_Uninitialized_move@PEAV-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@PEAV12.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18014728C (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x180154CD4 (-_Change_array@-$vector@V-$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allo.c)
 *     ??_EHolographicViewHostItemLedger@@UEAAPEAXI@Z @ 0x180248424 (--_EHolographicViewHostItemLedger@@UEAAPEAXI@Z.c)
 *     _std::vector_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_IWinRTApplicationView_wil::err_exception_policy__const_&__::_1_::catch$33 @ 0x180267A20 (_std--vector_wil--com_ptr_t_IWinRTApplicationView_wil--err_exception_policy__std--allocator_wil-.c)
 *     ?TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z @ 0x18027F1E0 (-TryRemoveViewFromTabGroup@TabViewManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ??1KioskPositioner@@UEAA@XZ @ 0x1803DA890 (--1KioskPositioner@@UEAA@XZ.c)
 *     ??_GUwpPrimaryAppProxy@@UEAAPEAXI@Z @ 0x1803DAB60 (--_GUwpPrimaryAppProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<Windows::Internal::ComposableShell::Tabs::IShellTab,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
