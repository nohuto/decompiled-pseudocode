/*
 * XREFs of SetContentOrientation @ 0x1C01A9BA0
 * Callers:
 *     NtSetShellCursorState @ 0x1C012F810 (NtSetShellCursorState.c)
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x1C012AD48 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     SendOrientationChanged @ 0x1C01A9A50 (SendOrientationChanged.c)
 *     ?OrientationToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01ADE1C (-OrientationToString@InputTraceLogging@@CAPEBDK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall SetContentOrientation(unsigned int a1)
{
  __int64 MouseProcessor; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
  {
    *(_DWORD *)(MouseProcessor + 2792) = a1;
    if ( a1 != 1 && a1 != 2 && a1 != 3 && a1 != 4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, a1 - 3, v4, v5);
    LOBYTE(MouseProcessor) = SendOrientationChanged(v3);
    if ( (unsigned int)dword_1C0244A70 > 4 )
    {
      LOBYTE(MouseProcessor) = tlgKeywordOn((__int64)&dword_1C0244A70, 64LL);
      if ( (_BYTE)MouseProcessor )
      {
        v7 = (__int64)InputTraceLogging::OrientationToString(a1);
        LOBYTE(MouseProcessor) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
                                   (__int64)&dword_1C0244A70,
                                   byte_1C0219868,
                                   0LL,
                                   0LL,
                                   (void **)&v7);
      }
    }
  }
  return MouseProcessor;
}
