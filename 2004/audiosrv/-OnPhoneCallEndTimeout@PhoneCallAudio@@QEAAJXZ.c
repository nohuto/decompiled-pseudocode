/*
 * XREFs of ?OnPhoneCallEndTimeout@PhoneCallAudio@@QEAAJXZ @ 0x1801103DC
 * Callers:
 *     ?TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z @ 0x1801110B0 (-TimerCallback@PhoneCallEndTimer@@EEAAXPEAX@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18010F670 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?IsInCall@PhoneCallAudio@@AEAAHXZ @ 0x180110148 (-IsInCall@PhoneCallAudio@@AEAAHXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180110D8C (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PhoneCallAudio::OnPhoneCallEndTimeout(PhoneCallAudio *this)
{
  __int64 v2; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]

  if ( !(unsigned int)PhoneCallAudio::IsInCall((struct _RTL_CRITICAL_SECTION *)this) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)this + 2);
    PhoneCallAudio::CleanupRouting(this);
    *((_DWORD *)this + 19) = 2;
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eRender, 0LL);
    PhoneCallAudio::SwitchActivePhoneCallEndpoint(this, eCapture, 0LL);
    v2 = *((_QWORD *)this + 17);
    if ( v2 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 480LL))(v2, 0LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 17);
    }
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return 0LL;
}
