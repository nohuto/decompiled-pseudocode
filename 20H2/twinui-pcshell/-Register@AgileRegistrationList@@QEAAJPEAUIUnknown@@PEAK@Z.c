/*
 * XREFs of ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18014F37C
 * Callers:
 *     ?Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z @ 0x18014F4B0 (-Register@CApplicationManager@@UEAAJPEAUIImmersiveApplicationNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z @ 0x180160B80 (-Register@CImmersiveMode@@UEAAJPEAUIActiveZBandNotification@@PEAK@Z.c)
 *     ?Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z @ 0x180160BA0 (-Register@CImmersiveMode@@UEAAJPEAUIImmersiveSystemModeNotification@@PEAK@Z.c)
 *     ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18018F4D0 (-RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListe.c)
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x180191780 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicat.c)
 *     ?Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z @ 0x180241E40 (-Register@HolographicPositioner@@UEAAJPEAUIHolographicViewTransitionNotification@@PEAK@Z.c)
 *     ?RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z @ 0x1804330D0 (-RegisterInternal@CVirtualDesktopNotifications@@UEAAJPEAUIVirtualDesktopNotification@@PEAK@Z.c)
 *     ?Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotification@@PEAK@Z @ 0x18043FA00 (-Register@VirtualDesktopAnimationSyncNotifications@@UEAAJPEAUIVirtualDesktopAnimationSyncNotific.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@UItem@AgileRegistrationList@@@?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAAPEAUItem@AgileRegistrationList@@QEAU23@$$QEAU23@@Z @ 0x180145520 (--$_Emplace_reallocate@UItem@AgileRegistrationList@@@-$vector@UItem@AgileRegistrationList@@V-$al.c)
 *     ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x180145DFC (--$com_agile_query@AEAPEAUIUnknown@@@wil@@YA-AV-$com_ptr_t@UIAgileReference@@Uerr_exception_poli.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileRegistrationList::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  __int64 *v5; // rax
  __int64 v6; // r14
  int Ptr; // eax
  __int64 v8; // rdx
  unsigned int v9; // edx
  const char *v10; // r9
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v15; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  *a3 = 0;
  v12 = 1;
  v13[0] = 0LL;
  try
  {
    v5 = wil::com_agile_query<IUnknown * &>((__int64 *)&v16, (__int64 *)&v15);
    v6 = *v5;
    *v5 = 0LL;
    v13[0] = v6;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
    AcquireSRWLockExclusive(this + 3);
    v16 = this + 3;
    Ptr = (int)this[4].Ptr;
    v12 = Ptr;
    v8 = (__int64)this[1].Ptr;
    if ( this[2].Ptr == (PVOID)v8 )
    {
      std::vector<AgileRegistrationList::Item>::_Emplace_reallocate<AgileRegistrationList::Item>(
        (__int64 *)this,
        v8,
        (__int64)&v12);
    }
    else
    {
      *(_DWORD *)v8 = Ptr;
      v13[0] = 0LL;
      *(_QWORD *)(v8 + 8) = v6;
      this[1].Ptr = (char *)this[1].Ptr + 16;
    }
    v9 = (unsigned int)this[4].Ptr;
    LODWORD(this[4].Ptr) = v9 + 1;
    *a3 = v9;
    if ( this != (RTL_SRWLOCK *)-24LL )
      ReleaseSRWLockExclusive(this + 3);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v13);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1E,
                     (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                     v10);
    return (unsigned int)v16;
  }
  return result;
}
