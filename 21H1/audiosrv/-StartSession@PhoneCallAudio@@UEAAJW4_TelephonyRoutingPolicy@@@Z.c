/*
 * XREFs of ?StartSession@PhoneCallAudio@@UEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x180110B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800675D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800C6F34 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18010F5B0 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18010F854 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x180110430 (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneCallAudio::StartSession(__int64 a1, int a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 **v6; // rbx
  __int64 v7; // rsi
  __int64 *v8; // rcx
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h]
  char v18; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  v20 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v20);
  v4 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         0LL,
         &v20);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1EF,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_13;
  }
  v6 = (__int64 **)(a1 + 128);
  v7 = a1 - 8;
  if ( *(_QWORD *)(a1 + 128) )
  {
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)(a1 - 8));
    (*(void (__fastcall **)(__int64 *, _QWORD))(**v6 + 480))(*v6, 0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(a1 + 128));
  }
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)(a1 + 128), v20);
  v8 = *v6;
  v9 = **v6;
  v10 = 1;
  LOBYTE(v11) = 1;
  (*(void (__fastcall **)(__int64 *, __int64))(v9 + 480))(v8, v11);
  v17 = a1 - 8;
  v18 = 1;
  *(_DWORD *)(a1 + 60) = 1;
  v12 = PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint(a1 - 8, a2);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 519LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_11;
  }
  v12 = PhoneCallAudio::OnPhoneCallStarted((PhoneCallAudio *)(a1 - 8));
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = 522LL;
    goto LABEL_9;
  }
  v5 = 0;
  v10 = 0;
LABEL_11:
  if ( v10 )
  {
    PhoneCallAudio::CleanupRouting((PhoneCallAudio *)(a1 - 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v7 + 136) + 480LL))(*(_QWORD *)(v7 + 136), 0LL);
    wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)(v7 + 136));
    *(_DWORD *)(v7 + 68) = 0;
  }
LABEL_13:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v20);
  if ( v16 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
