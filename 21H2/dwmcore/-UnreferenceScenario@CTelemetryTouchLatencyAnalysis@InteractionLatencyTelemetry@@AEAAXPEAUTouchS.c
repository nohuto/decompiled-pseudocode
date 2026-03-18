/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@@Z @ 0x18001B538
 * Callers:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB_K@Z @ 0x180019708 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z @ 0x18001B508 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D0BFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct InteractionLatencyTelemetry::TouchScenarioInfo *a2)
{
  int v3; // r10d
  int v5; // r9d
  int v6; // ecx
  int v7; // r8d
  int v8; // r10d
  int v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = *((_DWORD *)a2 + 38) - 1;
  *((_DWORD *)a2 + 38) = v3;
  v5 = v3;
  if ( (unsigned int)dword_1803D0EB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
  {
    v10 = *((_QWORD *)a2 + 1);
    v9 = v8;
    v11 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v6,
      (unsigned int)&unk_18036DF24,
      v7,
      v5,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
    v5 = *((_DWORD *)a2 + 38);
  }
  if ( !v5 )
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(this, a2, 1, 0);
}
