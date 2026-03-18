/*
 * XREFs of ?_UploadTelemetryData@KeyboardInputTelemetry@@AEAAXXZ @ 0x1C00019E0
 * Callers:
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C00016C8 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C0001820 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@444444444444444444444444444444444@Z @ 0x1C0145F50 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@.c)
 */

void __fastcall KeyboardInputTelemetry::_UploadTelemetryData(
        KeyboardInputTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx

  if ( (unsigned int)dword_1C024B250 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024B250, 0x400000000000LL, a3, a4) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v4,
      &unk_1C021A847);
  memset(&dword_1C0255918, 0, 0x80uLL);
  gKeyboardInputTelemetry = 0LL;
}
