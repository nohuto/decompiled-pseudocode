/*
 * XREFs of ?EnsureInputAppIsActivated@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x180348A94
 * Callers:
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18035C4E8 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x180361FC4 (-RefreshHardwareKeyboardUIState@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B3C34 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180346870 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803474E8 (--1InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348E1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803503D8 (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180350D34 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::EnsureInputAppIsActivated(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int Ptr; // esi
  int ViewInfo; // ebx
  int v5; // eax
  std::_Ref_count_base *v7[2]; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v8[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v2 = this + 85;
  AcquireSRWLockExclusive(this + 85);
  Ptr = (unsigned int)this[84].Ptr;
  if ( ((Ptr & 0xFFFFFFFA) != 0 || Ptr == 5) && !BYTE4(this[84].Ptr) )
  {
    BYTE4(this[84].Ptr) = 1;
    if ( v2 )
    {
      ReleaseSRWLockExclusive(v2);
      Ptr = (unsigned int)this[84].Ptr;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v8,
      (__int64)"InputAppResumeRequested");
    v8[0] = &TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::`vftable';
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v8,
      Ptr);
    *(_OWORD *)v7 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    ViewInfo = TouchKeyboardExperienceManager::FindViewInfo(this, HIDWORD(this[89].Ptr), v7);
    if ( ViewInfo >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v7[0] + 392LL))(*(_QWORD *)v7[0], 3LL);
      ViewInfo = v5;
      if ( v5 >= 0 )
      {
        wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
          v8,
          0LL);
        ViewInfo = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3D6,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v5);
      }
    }
    if ( v7[1] )
      std::_Ref_count_base::_Decref(v7[1]);
    TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested::~InputAppResumeRequested((TouchKeyboardExperienceTelemetryLogger::InputAppResumeRequested *)v8);
    return (unsigned int)ViewInfo;
  }
  else
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
}
