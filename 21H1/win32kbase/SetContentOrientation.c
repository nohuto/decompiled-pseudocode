/*
 * XREFs of SetContentOrientation @ 0x1C01B1C80
 * Callers:
 *     NtSetShellCursorState @ 0x1C0137B50 (NtSetShellCursorState.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0133088 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     SendOrientationChanged @ 0x1C01B1B30 (SendOrientationChanged.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01B5EFC (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall SetContentOrientation(unsigned int a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *(_DWORD *)(MouseProcessor + 2792) = a1;
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    LOBYTE(MouseProcessor) = SendOrientationChanged(v3);
    if ( (unsigned int)dword_1C024C960 > 4 )
    {
      LOBYTE(MouseProcessor) = tlgKeywordOn((__int64)&dword_1C024C960, 64LL);
      if ( (_BYTE)MouseProcessor )
      {
        v5 = (__int64)InputTraceLogging::OrientationToString(a1);
        LOBYTE(MouseProcessor) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                                   (__int64)&dword_1C024C960,
                                   byte_1C0221247,
                                   0LL,
                                   0LL,
                                   (void **)&v5);
      }
    }
  }
  return MouseProcessor;
}
