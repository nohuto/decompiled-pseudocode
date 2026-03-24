/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x1800B27DC
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800B297C (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800B20C4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     McGenEventRegister_EventRegister @ 0x1800B293C (McGenEventRegister_EventRegister.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800DAE3C (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E821C (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18021246C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  DWORD CurrentProcessId; // eax
  __int64 v1; // rcx
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v5; // [rsp+48h] [rbp-B8h]
  GUID *v6; // [rsp+50h] [rbp-B0h]
  WCHAR Value[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE pvData[80]; // [rsp+B0h] [rbp-50h] BYREF

  McGenEventRegister_EventRegister();
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180344EF0);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180344EB8);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180344E80);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_180344E48);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( (int)StringCchPrintfW(Value, 0x22uLL, (size_t *)L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pvData, 0, 0x4AuLL);
      pcbData = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\DWM", Value, 2u, 0LL, pvData, &pcbData)
        && (unsigned int)dword_180344E80 > 5
        && (qword_180344E90 & 0x400000000000LL) != 0
        && (qword_180344E98 & 0x400000000000LL) == qword_180344E98 )
      {
        v6 = &gDwmCoreTelemetryActivityId;
        v5 = pvData;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
          v1,
          &unk_1802EA0E4);
      }
    }
  }
}
