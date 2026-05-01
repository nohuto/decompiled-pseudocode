/*
 * XREFs of ??$_Destroy_range@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAXPEAUItem@AgileRegistrationList@@0AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180145420
 * Callers:
 *     _std::vector_AgileRegistrationList::Item_std::allocator_AgileRegistrationList::Item___::_Emplace_reallocate_AgileRegistrationList::Item__::_1_::catch$34 @ 0x180145763 (_std--vector_AgileRegistrationList--Item_std--allocator_AgileRegistrationList--Item___--_Emplace.c)
 *     ??$_Uninitialized_move@PEAUItem@AgileRegistrationList@@PEAU12@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@YAPEAUItem@AgileRegistrationList@@QEAU12@0PEAU12@AEAV?$allocator@UItem@AgileRegistrationList@@@0@@Z @ 0x180145C00 (--$_Uninitialized_move@PEAUItem@AgileRegistrationList@@PEAU12@V-$allocator@UItem@AgileRegistrati.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x1801473C8 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?_Change_array@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@AEAAXQEAUItem@AgileRegistrationList@@_K1@Z @ 0x180154BE4 (-_Change_array@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x18015FE8C (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??1CApplicationViewManager@@EEAA@XZ @ 0x18018DBAC (--1CApplicationViewManager@@EEAA@XZ.c)
 *     ??1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ @ 0x1801910D4 (--1ApplicationViewManagerVisibilityDebouncer@@UEAA@XZ.c)
 *     ??1HolographicPositioner@@UEAA@XZ @ 0x18023F400 (--1HolographicPositioner@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180433600 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@V-$VirtualDesktopNotificationForwarde.c)
 *     ??_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z @ 0x18043FF70 (--_EVirtualDesktopAnimationSyncNotifications@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<AgileRegistrationList::Item>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(v3 + 8));
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
