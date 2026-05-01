/*
 * XREFs of ?OnInputAppRequestedResize@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@45678@@Z @ 0x18035FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800938C8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B23E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     wil::ScopeExit__lambda_64ed522fd64e4410e1fb35e9c0148356___ @ 0x1800B28BC (wil--ScopeExit__lambda_64ed522fd64e4410e1fb35e9c0148356___.c)
 *     wil::details::ScopeExitFn__lambda_64ed522fd64e4410e1fb35e9c0148356___::_ScopeExitFn__lambda_64ed522fd64e4410e1fb35e9c0148356___ @ 0x1800B28E8 (wil--details--ScopeExitFn__lambda_64ed522fd64e4410e1fb35e9c0148356___--_ScopeExitFn__lambda_64ed.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803472D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x180349B28 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ?GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18034AE20 (-GetFirstViewTypeIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAW4CoreKeyboardViewType@Core@.c)
 *     ?GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z @ 0x18034B4CC (-GetViewRect@TouchKeyboardExperienceManager@@QEAAJIPEAUtagRECT@@@Z.c)
 *     ?InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18034C138 (-InitializeViewInfosIfNeeded@TouchKeyboardExperienceManager@@QEAAJXZ.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18034E59C (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 *     ??$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXJAEAI$$QEAIAEAUSize@Foundation@Windows@@AEAE3AEAJ@Z @ 0x1803586D0 (--$StopWithResult@AEAIIAEAUSize@Foundation@Windows@@AEAEAEAEAEAJ@OnInputAppRequestedResizeActivi.c)
 *     ??1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18035AF28 (--1OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x180363A60 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     ?VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windows@@URect@45@EPEAU645@PEAE@Z @ 0x18036A810 (-VerifyInputAppRequestedResize@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIUSize@Foundation@Windo.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize(
        KeyboardHosting::TabTipAdapter *this,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *a2,
        struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *a3)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ebx
  __int64 v10; // rdx
  int ViewRect; // eax
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  int v18; // r13d
  int v19; // eax
  unsigned int v20; // edi
  bool v22; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v24[2]; // [rsp+42h] [rbp-BEh] BYREF
  unsigned int v25; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v26; // [rsp+48h] [rbp-B8h] BYREF
  struct tagRECT v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v29; // [rsp+70h] [rbp-90h] BYREF
  int v30[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v33[40]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v22 = 0;
  v5 = *((_QWORD *)this + 3);
  *(_QWORD *)&v27.left = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct Windows::UI::Internal::Text::Core::ICoreKeyboardManager *))(*(_QWORD *)v5 + 8LL))(
      v5,
      a2);
  *(_QWORD *)&v27.right = &v22;
  wil::ScopeExit__lambda_64ed522fd64e4410e1fb35e9c0148356___((__int64)v32, &v27);
  Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v27.left);
  v25 = 0;
  v26 = 11;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v6 = TouchKeyboardExperienceManager::InitializeViewInfosIfNeeded(*((RTL_SRWLOCK **)this + 8));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1123LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, unsigned int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v25);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1124LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  TouchKeyboardExperienceManager::GetFirstViewTypeIfExists(
    *((RTL_SRWLOCK **)this + 8),
    v25,
    (enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType *)&v26);
  *(_QWORD *)v30 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, int *))(*(_QWORD *)a3 + 56LL))(
         a3,
         v30);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v24[0] = 0;
    v8 = (*(__int64 (__fastcall **)(struct Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *, _BYTE *))(*(_QWORD *)a3 + 64LL))(
           a3,
           v24);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 1137LL;
      goto LABEL_9;
    }
    wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v33,
      (__int64)"OnInputAppRequestedResizeActivity");
    v33[0] = &TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::`vftable';
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StartActivity(
      (TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v33,
      v25,
      v26);
    v29 = 0LL;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
      (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
      1u,
      3u);
    ViewRect = TouchKeyboardExperienceManager::GetViewRect(*((TouchKeyboardExperienceManager **)this + 8), v25, &v29);
    v9 = ViewRect;
    if ( ViewRect >= 0 )
    {
      v23 = 0;
      v31 = 0LL;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
        (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
        1u,
        3u);
      *(float *)&v27.left = (float)v29.left;
      *(float *)&v27.top = (float)v29.top;
      *(float *)&v27.right = (float)(v29.right - v29.left);
      *(float *)&v27.bottom = (float)(v29.bottom - v29.top);
      v29 = v27;
      v14 = KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedResize(
              *((_QWORD *)this + 13),
              v25,
              *(_QWORD *)v30,
              &v29,
              v24[0],
              &v31,
              &v23);
      v9 = v14;
      if ( v14 >= 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
          (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
          1u,
          3u);
        v15 = (int)*(float *)&v31;
        v27.left = (int)*(float *)&v31;
        v16 = (int)*((float *)&v31 + 1);
        v27.top = (int)*((float *)&v31 + 1);
        v17 = (int)(float)(*((float *)&v31 + 2) + *(float *)&v31);
        v27.right = v17;
        v18 = (int)(float)(*((float *)&v31 + 1) + *((float *)&v31 + 3));
        v27.bottom = v18;
        v29 = v27;
        v19 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
                *((KeyboardHosting::TabTipAdapter ***)this + 8),
                v25,
                &v29);
        v9 = v19;
        if ( v19 >= 0 )
        {
          v20 = 0;
          v28[0] = 0;
          v9 = 0;
          if ( v23 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
              (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
              1u,
              3u);
            *(_QWORD *)&v27.left = __PAIR64__(v16, v15);
            *(_QWORD *)&v27.right = __PAIR64__(v18, v17);
            v29 = v27;
            v9 = TouchKeyboardExperienceManager::OnInputAppRequestedResize(
                   *((TouchKeyboardExperienceManager **)this + 8),
                   v25,
                   &v29);
            v20 = v9;
            v28[0] = v9;
            v22 = v9 == 0;
          }
          TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::StopWithResult<unsigned int &,unsigned int,Windows::Foundation::Size &,unsigned char &,unsigned char &,long &>(
            (__int64)v33,
            v20,
            &v25,
            &v26,
            (__int64 *)v30,
            v24,
            &v23,
            v28);
          if ( v9 >= 0 )
            goto LABEL_21;
          v12 = v20;
          v13 = 1199LL;
        }
        else
        {
          v12 = (unsigned int)v19;
          v13 = 1177LL;
        }
      }
      else
      {
        v12 = (unsigned int)v14;
        v13 = 1161LL;
      }
    }
    else
    {
      v12 = (unsigned int)ViewRect;
      v13 = 1144LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)v12);
LABEL_21:
    TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity::~OnInputAppRequestedResizeActivity((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedResizeActivity *)v33);
    goto LABEL_22;
  }
  v10 = 1135LL;
LABEL_9:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v8);
LABEL_22:
  wil::details::ScopeExitFn__lambda_64ed522fd64e4410e1fb35e9c0148356___::_ScopeExitFn__lambda_64ed522fd64e4410e1fb35e9c0148356___(v32);
  return (unsigned int)v9;
}
