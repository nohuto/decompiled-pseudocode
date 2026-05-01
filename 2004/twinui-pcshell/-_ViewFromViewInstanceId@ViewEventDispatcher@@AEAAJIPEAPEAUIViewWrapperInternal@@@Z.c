/*
 * XREFs of ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1802ADCF8
 * Callers:
 *     _lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator() @ 0x1802A19CC (_lambda_f762a111a87cc3672fab2d2d37f8e7d5_--operator().c)
 *     ?DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1802A2E50 (-DecrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1802A3450 (-GetCanShowPopups@ViewEventDispatcher@@UEAAJIPEAE@Z.c)
 *     ?GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@@Z @ 0x1802A3BE0 (-GetTopLevelHost@ViewEventDispatcher@@UEAAJIPEAUClientIdentifier@Popups@Shell@Internal@Windows@@.c)
 *     ?IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z @ 0x1802A41E0 (-IncrementPopupCount@ViewEventDispatcher@@UEAAJI@Z.c)
 *     ?NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z @ 0x1802A4500 (-NavigateAwayFromView@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandler@Popups@Shell@Internal@Windows@@PEAUEventRegistrationToken@@@Z @ 0x1802A56A0 (-RegisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIPEAUIPopupPropertyChangedEventHandle.c)
 *     ?TryConsolidate@ViewEventDispatcher@@QEAAXI@Z @ 0x1802A86E8 (-TryConsolidate@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z @ 0x1802A8F90 (-UnregisterForPropertyChangeEvents@ViewEventDispatcher@@UEAAJIUEventRegistrationToken@@@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1802A937C (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x1802A9BA0 (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802A9CAC (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802AA970 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z @ 0x1802AACD0 (-ViewVisibilityChanged@ViewEventDispatcher@@QEAAXW4EventPhase@@IW4Visibility@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&_::_Do_call @ 0x1802AB370 (std--_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows--In_ea_1802AB370.c)
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x1802AB52C (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VViewWrapperFinderByViewInstanceId@@@?$CTSimpleFixedArray@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVViewWrapperFinderByViewInstanceId@@AEBV?$ComPtr@UIViewWrapperInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18029DEE4 (--$FindEx@VViewWrapperFinderByViewInstanceId@@@-$CTSimpleFixedArray@V-$ComPtr@UIViewWrapperInter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_ViewFromViewInstanceId(
        ViewEventDispatcher *this,
        int a2,
        struct IViewWrapperInternal **a3)
{
  _QWORD *v4; // rdi
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v4 = (_QWORD *)((char *)this + 352);
  v9 = 0LL;
  v10 = a2;
  v5 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IViewWrapperInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IViewWrapperInternal>>>::FindEx<ViewWrapperFinderByViewInstanceId>(
         (_QWORD *)this + 44,
         &v10,
         (__int64)a3,
         &v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  if ( v5 >= 0 )
  {
    v6 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, struct IViewWrapperInternal **))(*v4 + 8 * v11))(
           *(_QWORD *)(*v4 + 8 * v11),
           &GUID_24d7afb3_7eca_48a5_b2ba_1e21c012e15f,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8BC,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v6);
  }
  return (unsigned int)v5;
}
