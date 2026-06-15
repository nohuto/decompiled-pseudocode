/*
 * XREFs of ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036B20
 * Callers:
 *     ?StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180036AC0 (-StaticAtmosRefreshTimerCallback@AtmosCheck@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F37C (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18005F5E0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     _lambda_2d831242b22f49e80919fd2827d69307_::operator() @ 0x1800735F8 (_lambda_2d831242b22f49e80919fd2827d69307_--operator().c)
 *     _lambda_5056499381e6be98f6bae348336db3ef_::operator() @ 0x180073814 (_lambda_5056499381e6be98f6bae348336db3ef_--operator().c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073A10 (_lambda_d4b2d08f096e200be5494970f4d857ee_--operator().c)
 *     _lambda_e0385c1b3dccbc375408929e287d16bb_::operator() @ 0x180073B54 (_lambda_e0385c1b3dccbc375408929e287d16bb_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___::Run @ 0x1800746B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_58c08c42a645875e4bfc7c52011cdf6b___--Run.c)
 *     std::_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_::_Do_call @ 0x1800D98C0 (std--_Func_impl_no_alloc__lambda_b6b344f51bd20fdb0c730f08461ce397__void_--_Do_call.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ec703c986ad76684d6e21ab1fd48d19c_____lambda_ec703c986ad76684d6e21ab1fd48d19c___ @ 0x180036D34 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ec703c986ad76.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180036DF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed@@@details.c)
 *     ?TraceResult@AtmosCheck@@AEAAXJ_N@Z @ 0x180036EE4 (-TraceResult@AtmosCheck@@AEAAXJ_N@Z.c)
 *     ?IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ @ 0x180037148 (-IsLicenseEvaluationRequired@AtmosCheck@@AEAA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180046F40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcessNot.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F618 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18010A0F4 (_tlgWriteTransfer_EventWriteTransfer.c)
 */

__int64 __fastcall AtmosCheck::PerformLicenseCheck(AtmosCheck *this, char a2)
{
  bool v2; // zf
  HRESULT ApartmentType; // eax
  unsigned int v6; // r14d
  DWORD CurrentThreadId; // r15d
  __int64 *v8; // rax
  __int64 v9; // rbx
  AtmosCheck *v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  int v14; // [rsp+28h] [rbp-39h]
  bool v15; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+3Ch] [rbp-25h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-21h] BYREF
  __int64 v18; // [rsp+48h] [rbp-19h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+50h] [rbp-11h] BYREF
  __m128i si128; // [rsp+58h] [rbp-9h] BYREF
  int v21; // [rsp+68h] [rbp+7h]
  int v22; // [rsp+6Ch] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+70h] [rbp+Fh] BYREF
  int *v24; // [rsp+80h] [rbp+1Fh]
  bool *v25; // [rsp+88h] [rbp+27h]
  char v26; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v16 = 0;
  v2 = *((_BYTE *)this + 96) == 0;
  pAptType = APTTYPE_MTA;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = -2147023728;
  v22 = -2147023728;
  v15 = 0;
  if ( v2 )
  {
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x506,
      (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)0x8000FFFFLL,
      v14);
    return v11;
  }
  if ( *((_BYTE *)this + 552) )
  {
    if ( (unsigned int)dword_18019D520 > 5 )
      tlgWriteTransfer_EventWriteTransfer((int)&dword_18019D520, (int)&dword_18016D9FC, 0, 0, 2u, &v23);
  }
  else if ( AtmosCheck::IsLicenseEvaluationRequired(this) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_DisableAtmosLicenseCheckAllowed>::GetImpl'::`2'::impl,
      0LL);
    ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
    if ( ApartmentType < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x536,
        (unsigned int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)ApartmentType,
        v14);
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
    v6 = 0;
    v23.Ptr = (ULONGLONG)this;
    if ( pAptType == APTTYPE_MTA )
      v6 = 4;
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 8LL))(this);
    v26 = a2;
    *(_QWORD *)&v23.Size = &si128;
    v24 = &v16;
    v25 = &v15;
    CurrentThreadId = GetCurrentThreadId();
    v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ec703c986ad76684d6e21ab1fd48d19c_____lambda_ec703c986ad76684d6e21ab1fd48d19c___(
                      &v18,
                      &v23);
    v9 = *v8;
    *v8 = 0LL;
    if ( v18 )
    {
      v18 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcessNotification>::Release();
    }
    SHTaskPoolQueueTask(v6, 32LL, CurrentThreadId);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
    (*(void (__fastcall **)(AtmosCheck *))(*(_QWORD *)this + 16LL))(this);
    v11 = v16;
    if ( v16 >= 0 )
    {
      if ( a2 )
      {
        if ( v15 || (v12 = *((_DWORD *)this + 46), v12 == 8) || v12 == 3 )
        {
          if ( *((_QWORD *)this + 5) )
          {
            AtmosCheck::Trace(v10, "Calling AtmosCodecsStatusChanged callback", 0);
            (***((void (__fastcall ****)(_QWORD))this + 5))(*((_QWORD *)this + 5));
            v11 = v16;
          }
        }
      }
    }
    AtmosCheck::TraceResult(this, v11, v15);
    *((_DWORD *)this + 46) = 7;
    return v11;
  }
  return 0LL;
}
