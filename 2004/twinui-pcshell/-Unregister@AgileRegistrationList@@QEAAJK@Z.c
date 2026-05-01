/*
 * XREFs of ?Unregister@AgileRegistrationList@@QEAAJK@Z @ 0x1801545D4
 * Callers:
 *     ?Unregister@CApplicationManager@@UEAAJK@Z @ 0x1801546E0 (-Unregister@CApplicationManager@@UEAAJK@Z.c)
 *     ?v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z @ 0x180161E40 (-v_UnregisterModeNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z @ 0x180161E60 (-v_UnregisterZBandNotification@CImmersiveMode@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z @ 0x180190770 (-UnregisterForApplicationViewChanges@CApplicationViewManager@@UEAAJK@Z.c)
 *     ?UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z @ 0x180191ED0 (-UnregisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJK@Z.c)
 *     ?Unregister@HolographicPositioner@@UEAAJK@Z @ 0x180243C50 (-Unregister@HolographicPositioner@@UEAAJK@Z.c)
 *     ?UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z @ 0x180433970 (-UnregisterInternal@CVirtualDesktopNotifications@@UEAAJK@Z.c)
 *     ?Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z @ 0x1804403E0 (-Unregister@VirtualDesktopAnimationSyncNotifications@@UEAAJK@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UItem@AgileRegistrationList@@@std@@@std@@@2@@Z @ 0x1801598A4 (-erase@-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@std@@@st.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Unregister(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK v5; // r8
  __int64 v6; // rax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v11 = v4;
  for ( v5.Ptr = this->Ptr; v5.Ptr != this[1].Ptr && *(_DWORD *)v5.Ptr != a2; v5.Ptr = (char *)v5.Ptr + 16 )
    ;
  try
  {
    if ( v5.Ptr == this[1].Ptr )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        43LL,
        (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
        (const char *)0x80070057LL);
    v6 = *((_QWORD *)v5.Ptr + 1);
    *((_QWORD *)v5.Ptr + 1) = 0LL;
    v10 = v6;
    std::vector<AgileRegistrationList::Item>::erase(this, &v11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x31,
                           (__int64)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           v7);
  }
  return result;
}
