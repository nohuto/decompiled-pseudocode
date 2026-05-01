/*
 * XREFs of ?OnViewCreated@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18034EF10
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034F2C0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18000F678 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000FBC0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003F5B8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180067450 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e127833a80797c5d08a14d2b9986789f___ @ 0x1800AE60C (Windows--Internal--ComTaskPool--QueueTask__lambda_e127833a80797c5d08a14d2b9986789f___.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::_lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AECD0 (_lambda_e127833a80797c5d08a14d2b9986789f_--_lambda_e127833a80797c5d08a14d2b9986789f_.c)
 *     _lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_ @ 0x1800AEEDC (_lambda_e127833a80797c5d08a14d2b9986789f_--__lambda_e127833a80797c5d08a14d2b9986789f_.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0750 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802169EC (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x18021E37C (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180344CA4 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@@YA?AV?$shared_ptr@UKBViewInfo@@@0@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180346E5C (--$make_shared@UKBViewInfo@@AEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@std@.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180347228 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_180347228.c)
 *     ??1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803480D4 (--1OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18034BD38 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     ?StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803514C4 (-StartActivity@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180351684 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::OnViewCreated(
        TouchKeyboardExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct EventRegistrationToken a3)
{
  struct IUnknown ***v5; // rdi
  struct IUnknown ***v6; // r14
  __int64 *v7; // rax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 *v11; // rax
  std::_Ref_count_base *v12; // r14
  const char *v13; // r9
  std::_Ref_count_base **v14; // rdx
  volatile signed __int32 *v15; // rdi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24[2]; // [rsp+30h] [rbp-328h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+40h] [rbp-318h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v26; // [rsp+50h] [rbp-308h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-300h] BYREF
  TouchKeyboardExperienceManager *v28; // [rsp+60h] [rbp-2F8h] BYREF
  RTL_SRWLOCK *v29; // [rsp+68h] [rbp-2F0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-2E8h] BYREF
  std::_Ref_count_base *v31; // [rsp+78h] [rbp-2E0h]
  int v32[4]; // [rsp+80h] [rbp-2D8h] BYREF
  _QWORD v33[40]; // [rsp+90h] [rbp-2C8h] BYREF
  _BYTE v34[352]; // [rsp+1D0h] [rbp-188h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+358h] [rbp+0h]

  v26 = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v33,
    (__int64)"OnViewCreated");
  v33[0] = &TouchKeyboardExperienceTelemetryLogger::OnViewCreated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v33);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v29, (RTL_SRWLOCK *)this + 52);
  v5 = (struct IUnknown ***)*((_QWORD *)this + 53);
  v6 = (struct IUnknown ***)*((_QWORD *)this + 54);
  while ( v5 != v6 && !(unsigned int)SHIsSameObject(**v5, (struct IUnknown *)a2) )
    v5 += 2;
  if ( v5 != *((struct IUnknown ****)this + 54) )
  {
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v33);
LABEL_35:
    v9 = 0;
    goto LABEL_36;
  }
  v24[0] = 0LL;
  v27 = v24;
  v7 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v27);
  v8 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v7);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB66,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
    v10 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_36;
  }
  v28 = this;
  *(_OWORD *)v25 = 0LL;
  try
  {
    v11 = std::make_shared<KBViewInfo,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * &>(&v30, &v26);
    std::shared_ptr<KBViewInfo>::operator=(v25, v11);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    v12 = v25[0];
    KBViewInfo::InitializeIds(v25[0]);
    v14 = (std::_Ref_count_base **)*((_QWORD *)this + 54);
    if ( *((std::_Ref_count_base ***)this + 55) == v14 )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        (__int64 *)this + 53,
        (__int64)v14,
        v25);
      v15 = (volatile signed __int32 *)v25[1];
    }
    else
    {
      *v14 = 0LL;
      v14[1] = 0LL;
      v15 = (volatile signed __int32 *)v25[1];
      if ( v25[1] )
      {
        _InterlockedIncrement((volatile signed __int32 *)v25[1] + 2);
        v15 = (volatile signed __int32 *)v25[1];
        v12 = v25[0];
      }
      *v14 = v12;
      v14[1] = (std::_Ref_count_base *)v15;
      *((_QWORD *)this + 54) += 16LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v26) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0xB70,
                     (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                     v13);
    if ( v25[1] )
      std::_Ref_count_base::_Decref(v25[1]);
    v22 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v9 = (unsigned int)v26;
    goto LABEL_36;
  }
  if ( v15 )
  {
    _InterlockedIncrement(v15 + 3);
    v15 = (volatile signed __int32 *)v25[1];
  }
  *(_OWORD *)v32 = *(_OWORD *)v25;
  v16 = (_QWORD *)lambda_e127833a80797c5d08a14d2b9986789f_::_lambda_e127833a80797c5d08a14d2b9986789f_(
                    (__int64)v34,
                    &v26,
                    v24,
                    &v28,
                    v32);
  v19 = Windows::Internal::ComTaskPool::QueueTask__lambda_e127833a80797c5d08a14d2b9986789f___(
          v18,
          v17,
          *((_DWORD *)this + 203),
          v16);
  lambda_e127833a80797c5d08a14d2b9986789f_::__lambda_e127833a80797c5d08a14d2b9986789f_((__int64)v34);
  if ( v19 >= 0 )
  {
    if ( v15 )
    {
      std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v15);
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
    }
    v21 = v24[0];
    if ( v24[0] )
    {
      v24[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_35;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xBAA,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v19);
  if ( v15 )
  {
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v15);
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
  }
  v20 = v24[0];
  if ( v24[0] )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v9 = v19;
LABEL_36:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v29);
  TouchKeyboardExperienceTelemetryLogger::OnViewCreated::~OnViewCreated((TouchKeyboardExperienceTelemetryLogger::OnViewCreated *)v33);
  return v9;
}
