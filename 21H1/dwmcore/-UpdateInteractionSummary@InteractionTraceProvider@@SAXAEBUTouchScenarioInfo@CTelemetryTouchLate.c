/*
 * XREFs of ?UpdateInteractionSummary@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_NI@Z @ 0x180165B08
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x180161100 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x1801609D8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@@-$_tl.c)
 */

void __fastcall InteractionTraceProvider::UpdateInteractionSummary(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        char a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+50h] [rbp-28h] BYREF
  int v5; // [rsp+54h] [rbp-24h] BYREF
  __int64 v6; // [rsp+58h] [rbp-20h] BYREF
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v7; // [rsp+60h] [rbp-18h] BYREF
  char v8; // [rsp+98h] [rbp+20h] BYREF

  if ( (unsigned int)dword_180346E48 > 5 && (qword_180346E58 & 8) != 0 && (qword_180346E60 & 8) == qword_180346E60 )
  {
    v5 = *((_DWORD *)a1 + 38);
    v6 = *((_QWORD *)a1 + 1);
    v8 = a2;
    v4 = a3;
    v7 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      byte_1802E7A0B,
      a3,
      a4,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v8,
      (__int64)&v4);
  }
}
