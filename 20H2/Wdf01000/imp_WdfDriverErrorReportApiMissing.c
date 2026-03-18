/*
 * XREFs of imp_WdfDriverErrorReportApiMissing @ 0x1C004B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@G@@5@Z @ 0x1C0001234 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapSz@G.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BE90 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     _tlgKeywordOn @ 0x1C0041AD0 (_tlgKeywordOn.c)
 *     WPP_IFR_SF_sSLSs @ 0x1C004B234 (WPP_IFR_SF_sSLSs.c)
 *     ?FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z @ 0x1C0058928 (-FxVerifierDriverReportedBugcheck@@YAXPEAU_FX_DRIVER_GLOBALS@@K_K111@Z.c)
 */

__int64 __fastcall imp_WdfDriverErrorReportApiMissing(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDRIVER__ *Driver,
        const wchar_t *FrameworkExtensionName,
        unsigned int ApiIndex,
        unsigned __int8 DoesApiReturnNtstatus)
{
  unsigned __int64 v6; // r14
  unsigned __int8 v8; // dl
  const _GUID *v9; // r8
  const _GUID *v10; // r9
  const wchar_t *v11; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char *DriverName; // rax
  bool v14; // zf
  const char *v15; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // edx
  const _tlgProvider_t *Minor; // rcx
  const char *v19; // rax
  _tlgWrapperByRef<16> *v21; // [rsp+20h] [rbp-60h]
  _tlgWrapperByVal<4> v22; // [rsp+50h] [rbp-30h] BYREF
  FxDriver *pDriver; // [rsp+58h] [rbp-28h] BYREF
  _tlgWrapSz<unsigned short> v24; // [rsp+60h] [rbp-20h] BYREF
  _tlgWrapSz<char> v25; // [rsp+68h] [rbp-18h] BYREF
  _tlgWrapperByRef<16> v26; // [rsp+70h] [rbp-10h] BYREF
  _tlgWrapperByVal<4> v27; // [rsp+B0h] [rbp+30h] BYREF
  _tlgWrapperByVal<4> hProvider; // [rsp+C0h] [rbp+40h] BYREF

  pDriver = 0LL;
  v6 = ApiIndex;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Driver,
    0x1001u,
    (void **)&pDriver);
  v11 = L"KMDF";
  if ( FrameworkExtensionName )
    v11 = FrameworkExtensionName;
  m_Globals = pDriver->m_Globals;
  DriverName = DriverGlobals->DriverName;
  v14 = DriverGlobals->DriverName[0] == 0;
  v15 = "(Unknown)";
  if ( !v14 )
    v15 = DriverName;
  if ( Tlgg_TelemetryProviderProv.LevelPlus1 > 5 && tlgKeywordOn(&Tlgg_TelemetryProviderProv, 0x200000000000uLL) )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    v24.Psz = v11;
    Major = WdfBindInfo->Version.Major;
    Minor = (const _tlgProvider_t *)WdfBindInfo->Version.Minor;
    v25.Psz = m_Globals->Public.DriverName;
    v26.Ptr = m_Globals->TelemetryContext;
    v22.Value = Major;
    v27.Value = v6;
    hProvider.Value = (unsigned int)Minor;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      Minor,
      &tlgEvent_1._tlgChannel,
      v9,
      v10,
      &v26,
      &v25,
      &v22,
      &hProvider,
      &v24,
      &v27);
  }
  v19 = "WDF";
  if ( FrameworkExtensionName )
    v19 = " ";
  WPP_IFR_SF_sSLSs(m_Globals, v8, (unsigned int)v9, (unsigned __int16)v10, (const _GUID *)v21, v15, v11, v6, v11, v19);
  if ( !DoesApiReturnNtstatus || m_Globals->FxVerifierOn )
    FxVerifierDriverReportedBugcheck(m_Globals, 0x10Du, 0x10uLL, (unsigned __int64)v15, (unsigned __int64)v11, v6);
  return 3221225594LL;
}
