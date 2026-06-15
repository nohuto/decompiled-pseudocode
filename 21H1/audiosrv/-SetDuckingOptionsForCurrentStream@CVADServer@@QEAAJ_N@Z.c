/*
 * XREFs of ?SetDuckingOptionsForCurrentStream@CVADServer@@QEAAJ_N@Z @ 0x18006F2F4
 * Callers:
 *     AudioServerSetDuckingOptionsForCurrentStream @ 0x18006F530 (AudioServerSetDuckingOptionsForCurrentStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800239A0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x1800239C0 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockCriticalSection@Details@234@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x180054A38 (-Provider@AudioSrvTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800C6A8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJAEAPEAUIAudioPolicyManager@@PEAPEAUIAudioPolicyNotificationManager@@@Z @ 0x1800DB284 (--$com_query_to_nothrow@UIAudioPolicyNotificationManager@@AEAPEAUIAudioPolicyManager@@@wil@@YAJA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::SetDuckingOptionsForCurrentStream(CVADServer *this, char a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // r15
  int v8; // ebx
  __int64 v9; // rdi
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  void (*v13)(void); // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  unsigned int v17; // eax
  int v18; // eax
  _QWORD *v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+48h] [rbp-18h] BYREF
  int v22[2]; // [rsp+50h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v25; // [rsp+A0h] [rbp+40h] BYREF
  int v26; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp+58h] BYREF

  Microsoft::WRL::Wrappers::CriticalSection::Lock((struct _RTL_CRITICAL_SECTION *)((char *)this + 224), &v23);
  v4 = 0;
  if ( !*((_DWORD *)this + 46) )
  {
    v5 = 2575LL;
LABEL_5:
    v4 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_16;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v5 = 2576LL;
    goto LABEL_5;
  }
  v27 = 0LL;
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v27);
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 24LL))(
         *((_QWORD *)this + 24) + 8LL,
         &v27) >= 0 )
  {
    v7 = AudioSrvTelemetryProvider::Provider(v6);
    if ( *(_DWORD *)v7 > 4u )
    {
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 40LL))(v27);
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
      v25 = a2;
      v26 = v8;
      v21 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21));
      *(_QWORD *)v22 = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (_DWORD)v7,
        (unsigned int)&unk_180168536,
        v10,
        v11,
        (__int64)v22,
        (__int64)&v21,
        (__int64)&v26,
        (__int64)&v25);
    }
    v12 = *(_QWORD *)(*((_QWORD *)this + 24) + 24LL);
    if ( a2 )
      v13 = *(void (**)(void))(v12 + 40);
    else
      v13 = *(void (**)(void))(v12 + 32);
    v13();
    v20 = 0LL;
    wil::com_query_to_nothrow<IAudioPolicyNotificationManager,IAudioPolicyManager * &>(v14, &v20);
    v15 = v20;
    v16 = *v20;
    v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL))(v27);
    v18 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v16 + 112))(v15, v17);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        2600LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
LABEL_16:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v23);
  return v4;
}
