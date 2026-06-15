/*
 * XREFs of ?EndSession@PhoneCallAudio@@UEAAJXZ @ 0x18010FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBCC4 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ @ 0x180110488 (-OnPhoneCallEnded@PhoneCallAudio@@AEAAJXZ.c)
 *     ?SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180110D8C (-SwitchActivePhoneCallEndpoint@PhoneCallAudio@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PhoneCallAudio::EndSession(PhoneCallAudio *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // r9
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 72));
  if ( !*((_QWORD *)this + 16) )
  {
    v2 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_14;
  }
  v12 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v12);
  v3 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         0LL,
         &v12);
  v2 = v3;
  if ( v3 < 0 )
  {
    v4 = 537LL;
LABEL_10:
    v7 = (unsigned int)v3;
    goto LABEL_11;
  }
  v5 = *((_QWORD *)this + 16);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5) == v6 )
  {
    if ( !*((_DWORD *)this + 15)
      || (*((_DWORD *)this + 15) = 0,
          v3 = PhoneCallAudio::OnPhoneCallEnded((PhoneCallAudio *)((char *)this - 8)),
          v2 = v3,
          v3 >= 0) )
    {
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)((char *)this - 8), eRender, 0LL);
      PhoneCallAudio::SwitchActivePhoneCallEndpoint((PhoneCallAudio *)((char *)this - 8), eCapture, 0LL);
      v2 = 0;
      goto LABEL_13;
    }
    v4 = 546LL;
    goto LABEL_10;
  }
  v2 = -2147418113;
  v7 = 2147549183LL;
  v4 = 538LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
    (const char *)v7);
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
LABEL_14:
  if ( v10 )
    LeaveCriticalSection(lpCriticalSection);
  return v2;
}
