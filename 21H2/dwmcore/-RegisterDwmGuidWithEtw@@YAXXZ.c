/*
 * XREFs of ?RegisterDwmGuidWithEtw@@YAXXZ @ 0x180025928
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x180025470 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180024B64 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180025E3C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     McGenEventRegister_EventRegister @ 0x180025ED8 (McGenEventRegister_EventRegister.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x1800F0D20 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void RegisterDwmGuidWithEtw(void)
{
  DWORD CurrentProcessId; // eax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  DWORD pdwType; // [rsp+20h] [rbp-E0h]
  DWORD pSessionId; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  const unsigned __int16 *v7; // [rsp+48h] [rbp-B8h] BYREF
  GUID *v8; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR Value[40]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE pvData[80]; // [rsp+B0h] [rbp-50h] BYREF

  McGenEventRegister_EventRegister();
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803D0EF0);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803D0F28);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803D1270);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803D0EB8);
  TraceLoggingRegisterEx_EventRegister_EventSetInformation(&dword_1803D0F60);
  EventActivityIdControl(3u, &gDwmCoreTelemetryActivityId);
  pSessionId = 0;
  CurrentProcessId = GetCurrentProcessId();
  if ( ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    memset_0(Value, 0, 0x44uLL);
    pdwType = pSessionId;
    if ( StringCchPrintfW(Value, 0x22uLL, L"%s_%08X", L"DwmInitSessionActivityId", pdwType) >= 0 )
    {
      memset_0(pvData, 0, 0x4AuLL);
      pcbData = 74;
      if ( !RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\Dwm", Value, 2u, 0LL, pvData, &pcbData)
        && (unsigned int)dword_1803D1270 > 5 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1803D1270, 0x400000000000LL) )
        {
          v8 = &gDwmCoreTelemetryActivityId;
          v7 = (const unsigned __int16 *)pvData;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
            v1,
            (int)&unk_180372789,
            v2,
            v3,
            (__int64 *)&v8,
            &v7);
        }
      }
    }
  }
}
