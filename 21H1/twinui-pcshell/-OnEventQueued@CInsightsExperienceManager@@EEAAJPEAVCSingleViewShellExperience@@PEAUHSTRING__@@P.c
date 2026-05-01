/*
 * XREFs of ?OnEventQueued@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CD250
 * Callers:
 *     <none>
 * Callees:
 *     ??8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z @ 0x18002F568 (--8Wrappers@WRL@Microsoft@@YA_NAEBQEAUHSTRING__@@AEBVHStringReference@012@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004FB94 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180085334 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ @ 0x1801CC15C (-CloseExperienceIfRunning@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?DestroyExperience@CInsightsExperienceManager@@AEAAJXZ @ 0x1801CC3F8 (-DestroyExperience@CInsightsExperienceManager@@AEAAJXZ.c)
 *     ?DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ @ 0x1801CC534 (-DisableLightDismissRequested@CInsightsExperienceManager@@AEAAXXZ.c)
 *     ?EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z @ 0x1801CC6AC (-EnableLightDismissRequested@CInsightsExperienceManager@@AEAAXPEAVCSingleViewShellExperience@@@Z.c)
 *     ?HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CCAE8 (-HandleNotifyWindowName@CInsightsExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SmartInsights@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801CDD64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SmartInsights@@@details@wil@@QEAAX_NW4Rep.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnEventQueued(
        HWND *this,
        struct CSingleViewShellExperience *a2,
        HSTRING a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  unsigned int v8; // r8d
  void (*v9)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  _DWORD *v10; // rdi
  __int64 v11; // r9
  HSTRING_HEADER *v12; // rax
  unsigned int v13; // r8d
  int v14; // eax
  __int64 v15; // rdx
  HSTRING_HEADER *v16; // rax
  unsigned int v17; // r8d
  HSTRING_HEADER *v18; // rax
  unsigned int v19; // r8d
  HSTRING_HEADER *v20; // rax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v21; // rdx
  unsigned int v22; // r8d
  HSTRING_HEADER *v23; // rax
  HSTRING v25; // [rsp+30h] [rbp-29h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-21h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  __int64 StringRawBuffer; // [rsp+48h] [rbp-11h] BYREF
  HSTRING_HEADER v29; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v25 = a3;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18059FFB8;
    qword_18059FFB8[0] = &ShellScreenClippingLogging::`vftable';
    qword_18059FFD0 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18059FFB8, qword_18059FFD0, v9);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18059FFB8);
  }
  v10 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v10 > 5u )
  {
    StringRawBuffer = (__int64)WindowsGetStringRawBuffer(a3, 0LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (__int64)v10,
      (unsigned __int8 *)dword_1804DDE28,
      0LL,
      v11,
      (const WCHAR **)&StringRawBuffer);
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_1804AAA08, v8);
  if ( Microsoft::WRL::Wrappers::operator==(&v25, (__int64)v12) )
  {
    v14 = CInsightsExperienceManager::DestroyExperience(this - 7);
    if ( v14 < 0 )
    {
      v15 = 329LL;
LABEL_12:
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
        (const char *)(unsigned int)v14);
    }
  }
  else
  {
    v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_1804AA9F8, v13);
    if ( Microsoft::WRL::Wrappers::operator==(&v25, (__int64)v16) )
    {
      v14 = CInsightsExperienceManager::HandleNotifyWindowName((CInsightsExperienceManager *)(this - 7), a4);
      if ( v14 < 0 )
      {
        v15 = 333LL;
        goto LABEL_12;
      }
    }
    else
    {
      v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_1804AAA10, v17);
      if ( Microsoft::WRL::Wrappers::operator==(&v25, (__int64)v18) )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_SmartInsights>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_SmartInsights>::GetImpl'::`2'::impl,
          0LL);
        CInsightsExperienceManager::CloseExperienceIfRunning((CInsightsExperienceManager *)(this - 7));
      }
      else
      {
        v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_1804AA9E8, v19);
        if ( Microsoft::WRL::Wrappers::operator==(&v25, (__int64)v20) )
        {
          CInsightsExperienceManager::DisableLightDismissRequested((CInsightsExperienceManager *)(this - 7), v21);
        }
        else
        {
          v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, (const WCHAR **)off_1804AA9F0, v22);
          if ( Microsoft::WRL::Wrappers::operator==(&v25, (__int64)v23) )
            CInsightsExperienceManager::EnableLightDismissRequested(this - 7, a2);
        }
      }
    }
  }
  return 0LL;
}
