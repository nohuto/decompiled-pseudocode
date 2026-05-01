/*
 * XREFs of ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034F940
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x18034F530 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180067450 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18008A3C0 (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800A308C (--B-$ComPtr@VTabTipAdapter@KeyboardHosting@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_b2d628275170c96747651ea7a6282f40___ @ 0x1800AE7B8 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_b2d628275170c96747651ea7a6282f40___.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_da08d54169002be5ece525bde89b0b7d___ @ 0x1800AE84C (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_da08d54169002be5ece525bde89b0b7d___.c)
 *     _lambda_b2d628275170c96747651ea7a6282f40_::_lambda_b2d628275170c96747651ea7a6282f40_ @ 0x1800AEC38 (_lambda_b2d628275170c96747651ea7a6282f40_--_lambda_b2d628275170c96747651ea7a6282f40_.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::_lambda_da08d54169002be5ece525bde89b0b7d_ @ 0x1800AEC78 (_lambda_da08d54169002be5ece525bde89b0b7d_--_lambda_da08d54169002be5ece525bde89b0b7d_.c)
 *     _lambda_b2d628275170c96747651ea7a6282f40_::__lambda_b2d628275170c96747651ea7a6282f40_ @ 0x1800AEE7C (_lambda_b2d628275170c96747651ea7a6282f40_--__lambda_b2d628275170c96747651ea7a6282f40_.c)
 *     _lambda_da08d54169002be5ece525bde89b0b7d_::__lambda_da08d54169002be5ece525bde89b0b7d_ @ 0x1800AEE8C (_lambda_da08d54169002be5ece525bde89b0b7d_--__lambda_da08d54169002be5ece525bde89b0b7d_.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218@@@details@wil@@QEAA_NXZ @ 0x1800B283C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapte.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180137300 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager@@PEAVWeakRef@01@@Z @ 0x180344CA4 (--$AsWeak@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@YAJPEAVTouchKeyboardExperienceManager.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180347228 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0A@U_TlgReflecto_ea_180347228.c)
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1803480A8 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     ?StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x180351430 (-StartActivity@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::PreloadInputApp(TouchKeyboardExperienceManager *this)
{
  __int64 *v2; // rax
  int v3; // eax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ebx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // ebx
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  TouchKeyboardExperienceManager *v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[40]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[336]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v17,
    (__int64)"OnPreloadInputAppActivity");
  v17[0] = &TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::`vftable';
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::StartActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v17);
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_NullCheckOfTabTipAdapter_31345218>::GetImpl'::`2'::impl) )
  {
    if ( (unsigned int)Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapter>::operator int Microsoft::WRL::Details::BoolStruct::*((_QWORD *)this + 86) != -1 )
    {
      v15 = this;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
      v16 = &v14;
      v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v16);
      v3 = Microsoft::WRL::AsWeak<TouchKeyboardExperienceManager>((__int64)this, v2);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37A,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v3);
      v4 = (_QWORD *)lambda_da08d54169002be5ece525bde89b0b7d_::_lambda_da08d54169002be5ece525bde89b0b7d_(
                       (__int64)v18,
                       &v15,
                       &v14);
      v8 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_da08d54169002be5ece525bde89b0b7d___(
             v6,
             v5,
             v7,
             v4);
      lambda_da08d54169002be5ece525bde89b0b7d_::__lambda_da08d54169002be5ece525bde89b0b7d_((__int64)v18);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x398,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v14);
    }
  }
  else
  {
    v15 = this;
    if ( !*((_QWORD *)this + 86) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        926LL,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)0x80004005LL);
      __debugbreak();
    }
    v9 = (_QWORD *)lambda_b2d628275170c96747651ea7a6282f40_::_lambda_b2d628275170c96747651ea7a6282f40_(
                     (__int64)v18,
                     &v15);
    v13 = Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_b2d628275170c96747651ea7a6282f40___(
            v11,
            v10,
            v12,
            v9);
    lambda_b2d628275170c96747651ea7a6282f40_::__lambda_b2d628275170c96747651ea7a6282f40_((__int64)v18);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3AE,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
  }
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)v17);
}
