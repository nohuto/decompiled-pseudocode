/*
 * XREFs of ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802ACE3C
 * Callers:
 *     ?BoostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1802AC8A0 (-BoostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AE150 (-Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z.c)
 *     ?SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z @ 0x1802AF710 (-SetFocusState@ViewWrapperBase@@UEAAXW4FocusState@@@Z.c)
 *     ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1802AF820 (-SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0.c)
 *     ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AF9A0 (-SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Sh.c)
 *     ?SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@@Z @ 0x1802AFD60 (-SetRegistration@ViewWrapperBase@@UEAAXPEAUViewEventRegistration@@W4ViewInitializationScenario@@.c)
 *     ?UnboostPriority@ViewWrapperBase@@UEAAJXZ @ 0x1802B0DF0 (-UnboostPriority@ViewWrapperBase@@UEAAJXZ.c)
 *     ?ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z @ 0x1802B0F10 (-ViewCreated@ViewWrapperBase@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802A9C2C (--$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXA.c)
 */

void __fastcall ViewWrapperBase::CommitImportanceVector(ViewWrapperBase *this)
{
  __int64 v2; // rdx

  v2 = *((_QWORD *)this + 24);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 21) + 504LL) + 72LL))(
      *(_QWORD *)(*((_QWORD *)this + 21) + 504LL),
      v2,
      *((unsigned int *)this + 89));
    ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int const &,_RM_ACTIVITY_IMPORTANCE const &>(
      (int *)this + 37,
      (ViewWrapperBase *)((char *)this + 356));
  }
}
