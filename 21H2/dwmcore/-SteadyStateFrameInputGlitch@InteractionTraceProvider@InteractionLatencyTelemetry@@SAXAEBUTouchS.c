/*
 * XREFs of ?SteadyStateFrameInputGlitch@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@II_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@1@Z @ 0x18001A8C0
 * Callers:
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchScenarioInfo@2@AEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III_K@Z @ 0x18001B790 (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEBAXAEAUTouchSce.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U1@U5@U1@U1@U1@U1@U1@U1@U1@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@873337333333377777777777@Z @ 0x1801CDC0C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G@@U3@U2@U-$_t.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionTraceProvider::SteadyStateFrameInputGlitch(
        const struct InteractionLatencyTelemetry::TouchScenarioInfo *a1)
{
  if ( (unsigned int)dword_1803D0EB8 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
    {
      IsVailContainer();
      IsVailContainer();
      IsVailContainer();
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        qword_1803D32C0 / 0xF4240uLL,
        &unk_18036D4F4);
    }
  }
}
