/*
 * XREFs of ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0209834
 * Callers:
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B3F4 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C006B984 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWr.c)
 *     ?IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C01E0728 (-IsAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C02098FC (-SetAdvancedColorEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1C020997C (-SetAutoColorManagementSupported@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HDR_CERTIFICATIONS@@AEA_N@Z @ 0x1C03B8C30 (-_ReadDisplayHdrSupportFromPnpRegistry@MonitorColorState@DxgMonitor@@AEAAJAEAW4_DISPLAYCONFIG_HD.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnFunctionDriverArrival(
        DxgMonitor::MonitorColorState *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // r15
  _QWORD *v7; // rsi
  char v8; // r14
  bool v9; // dl
  int v10; // r14d
  int v11; // r14d
  bool v12; // si
  __int64 v13; // rcx
  char v14; // r15
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // [rsp+40h] [rbp-10h] BYREF
  int v25; // [rsp+44h] [rbp-Ch] BYREF
  __int64 v26; // [rsp+48h] [rbp-8h] BYREF
  bool v27; // [rsp+90h] [rbp+40h] BYREF
  __int16 v28; // [rsp+98h] [rbp+48h] BYREF

  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    LOBYTE(v28) = 0;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DisplayHdr_Inf_Certification__private_reporting,
      0x13DE0AFu,
      v4,
      v5,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    v10 = -(*((_BYTE *)this + 341) != 0);
    v24 = 0;
    v11 = v10 & 0x40000;
    DxgMonitor::MonitorColorState::_ReadDisplayHdrSupportFromPnpRegistry(
      this,
      (enum _DISPLAYCONFIG_HDR_CERTIFICATIONS *)&v24,
      (bool *)&v28);
    v12 = v24 >= 0 && ((v24 & 0x40000000) != 0 || (v24 & 0x20000000) != 0);
    v13 = *((_QWORD *)this + 1);
    v27 = 0;
    *((_DWORD *)this + 99) = v24 | v11;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v13 + 104LL))(
           v13,
           2LL,
           L"AdvancedColorEnabled",
           &v27) )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, v27);
LABEL_26:
      if ( *((_DWORD *)this + 99)
        && (_BYTE)v28
        && (unsigned int)dword_1C012F918 > 5
        && tlgKeywordOn((__int64)&dword_1C012F918, 0x400000200000LL) )
      {
        v24 = v12;
        v25 = v21;
        v28 = 2;
        v26 = 0x2000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v19,
          byte_1C009AFB1,
          v20,
          v21,
          (__int64)&v26,
          (__int64)&v28,
          (__int64)&v25,
          (__int64)&v24);
      }
      return;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
              *((_QWORD *)this + 1),
              1LL,
              L"EnableIntegratedPanelHdrByDefault");
      if ( !DxgMonitor::MonitorColorState::IsAdvancedColorEnabled(this) && v14 )
      {
        DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
        v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v15 + 104LL))(
          v15,
          0LL,
          a2);
      }
      goto LABEL_24;
    }
    if ( v12 )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v16 + 104LL))(
        v16,
        0LL,
        a2);
      v17 = 10LL;
    }
    else
    {
      if ( !*((_DWORD *)this + 99) )
        goto LABEL_24;
      v17 = 11LL;
    }
    WdDiagNotifyUser(0LL, v17, 0LL, 0LL);
LABEL_24:
    if ( *((_BYTE *)this + 341) )
    {
      DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
      v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v18 + 104LL))(
        v18,
        0LL,
        a2);
      WdDiagNotifyUser(0LL, 10LL, 0LL, 0LL);
    }
    goto LABEL_26;
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_AutoColorManagementEnabled__private_reporting,
    0x1730B9Au,
    v4,
    v5,
    (const struct FEATURE_LOGGED_TRAITS *)Feature_DmaRemapping_logged_traits,
    1);
  v6 = 0;
  v7 = (_QWORD *)((char *)this + 8);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this)
    && (v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v7 + 56LL))(
               *v7,
               1LL,
               L"MicrosoftApprovedAcmSupport")) != 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v7 + 56LL))(
           *v7,
           1LL,
           L"EnableIntegratedPanelAcmByDefault");
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *))(*(_QWORD *)*v7 + 56LL))(
           *v7,
           8LL,
           L"EnableAcmSupportDeveloperPreview");
  }
  DxgMonitor::MonitorColorState::SetAutoColorManagementSupported(this, v8);
  if ( !v8 )
  {
    v9 = 0;
LABEL_6:
    DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, v9);
    return;
  }
  v22 = *v7;
  v27 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, const wchar_t *, bool *))(*(_QWORD *)v22 + 104LL))(
         v22,
         2LL,
         L"AdvancedColorEnabled",
         &v27) )
  {
    v9 = v27;
    goto LABEL_6;
  }
  if ( v6 )
  {
    DxgMonitor::MonitorColorState::SetAdvancedColorEnabled(this, 1);
    v23 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    (*(void (__fastcall **)(__int64, _QWORD, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *))(*(_QWORD *)v23 + 104LL))(
      v23,
      0LL,
      a2);
  }
}
