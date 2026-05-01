/*
 * XREFs of ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18021F478 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z @ 0x180345244 (--$OnViewCreatedFailed@AEAJ@TouchKeyboardExperienceTelemetryLogger@@SAXAEAJ@Z.c)
 *     wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___ @ 0x180345388 (wil--ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x180349324 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034EF10 (-OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@In.c)
 *     ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z @ 0x180369984 (-OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::OnViewEvent(
        RTL_SRWLOCK *this,
        struct IUnknown *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  struct EventRegistrationToken v8; // r8
  struct IUnknown ***Ptr; // rbx
  struct IUnknown ***v10; // r14
  int v11; // eax
  std::_Ref_count_base *v12; // rbx
  int v13; // eax
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v18; // [rsp+80h] [rbp+30h] BYREF
  struct IUnknown ***v19; // [rsp+88h] [rbp+38h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v18);
  if ( v5 < 0 )
  {
    v6 = 2442LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v18 )
  {
    if ( v18 == 4 )
    {
      *(_OWORD *)v15 = 0LL;
      Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v14, this + 52);
      Ptr = (struct IUnknown ***)this[53].Ptr;
      v10 = (struct IUnknown ***)this[54].Ptr;
      while ( Ptr != v10 && !(unsigned int)SHIsSameObject(**Ptr, a2) )
        Ptr += 2;
      v19 = Ptr;
      if ( Ptr != this[54].Ptr )
      {
        std::shared_ptr<PeoplePaneViewInfo>::operator=(v15, Ptr);
        v16[0] = (__int64)this;
        v16[1] = (__int64)&v19;
        v11 = wil::ResultFromException__lambda_3bafd4a5c526c49ed4dd10bbacb3a284___(v16);
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9B1,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v11);
      }
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v14);
      v12 = v15[0];
      if ( v15[0] )
      {
        v13 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, v15[0]);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x9B8,
            (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
          (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
          1u,
          3u);
        KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(
          *((KeyboardHosting::TabTipAdapterPolicy **)this[86].Ptr + 13),
          *((_DWORD *)v12 + 26));
      }
      if ( v15[1] )
        std::_Ref_count_base::_Decref(v15[1]);
    }
  }
  else
  {
    v5 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))a2->lpVtbl[16].AddRef)(a2, 4LL);
    if ( v5 < 0 )
    {
      v6 = 2447LL;
      goto LABEL_3;
    }
    LODWORD(v19) = TouchKeyboardExperienceManager::OnViewCreated(
                     (TouchKeyboardExperienceManager *)this,
                     (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2,
                     v8);
    if ( (int)v19 < 0 )
      TouchKeyboardExperienceTelemetryLogger::OnViewCreatedFailed<long &>((int *)&v19);
  }
  return 0LL;
}
