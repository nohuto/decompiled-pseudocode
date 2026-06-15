/*
 * XREFs of ?OnAppServicesReady@AtmosCheck@@AEAAXXZ @ 0x180136170
 * Callers:
 *     wistd::__function::__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_::operator() @ 0x180073390 (wistd--__function--__func__lambda_2063a14e497e422c377e3fb701730ef5__void___cdecl(void)_--operato.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_f24fd18e89a514787d866aea92396781___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::Invoke @ 0x180073840 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180073840.c)
 * Callees:
 *     ?IsRunningOnXbox@AtmosCheck@@AEBA_NXZ @ 0x180009DB0 (-IsRunningOnXbox@AtmosCheck@@AEBA_NXZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D390 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1HmdInfo@@QEAA@XZ @ 0x18006F970 (--1HmdInfo@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_58c08c42a645875e4bfc7c52011cdf6b___ @ 0x180072714 (Windows--Internal--ComTaskPool--QueueTask__lambda_58c08c42a645875e4bfc7c52011cdf6b___.c)
 *     _lambda_58c08c42a645875e4bfc7c52011cdf6b_::_lambda_58c08c42a645875e4bfc7c52011cdf6b_ @ 0x180072904 (_lambda_58c08c42a645875e4bfc7c52011cdf6b_--_lambda_58c08c42a645875e4bfc7c52011cdf6b_.c)
 */

void __fastcall AtmosCheck::OnAppServicesReady(AtmosCheck *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  if ( !AtmosCheck::IsRunningOnXbox(this) || *((_BYTE *)this + 264) && *((_BYTE *)this + 265) && *((_BYTE *)this + 208) )
  {
    *((_DWORD *)this + 46) = 8;
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v7, (__int64)this);
    v2 = lambda_58c08c42a645875e4bfc7c52011cdf6b_::_lambda_58c08c42a645875e4bfc7c52011cdf6b_(&v8, &v7);
    v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_58c08c42a645875e4bfc7c52011cdf6b___(
           v4,
           v3,
           *((_DWORD *)this + 53),
           v2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2982LL,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v5);
    HmdInfo::~HmdInfo(&v8);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v7);
  }
}
