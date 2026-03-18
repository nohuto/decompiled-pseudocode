/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K@Z @ 0x180013AA8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@8366663433363@Z @ 0x1801D10E8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U_ea_1801D10E8.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        __int64 a2)
{
  char *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // r10
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // rax
  _QWORD *v10; // rcx
  char *v11; // rcx
  unsigned int v12; // [rsp+10Ch] [rbp-64h]
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp-60h] BYREF
  __int64 v14; // [rsp+118h] [rbp-58h]
  __int64 v15; // [rsp+120h] [rbp-50h]
  __int64 v16; // [rsp+128h] [rbp-48h]
  __int64 v17; // [rsp+130h] [rbp-40h]
  __int64 v18; // [rsp+138h] [rbp-38h]
  __int64 v19; // [rsp+140h] [rbp-30h]
  char *v20; // [rsp+148h] [rbp-28h]
  _QWORD *v21; // [rsp+150h] [rbp-20h]
  char *v22; // [rsp+158h] [rbp-18h]
  __int64 v23; // [rsp+160h] [rbp-10h]
  char *v24; // [rsp+168h] [rbp-8h]

  if ( *(_DWORD *)this )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v4 = (char *)this + 48;
    v5 = 10LL;
    do
    {
      if ( *((_QWORD *)v4 - 1)
        && (unsigned int)((PerformanceCount.QuadPart - *((_QWORD *)v4 + 56)) / (qword_1803D32C0 / 0x3E8uLL)) >= 0xFA0 )
      {
        if ( (unsigned int)dword_1803D0EB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
        {
          v7 = a2 - *((_QWORD *)v4 + 20);
          v16 = *((_QWORD *)v4 + 20);
          v17 = v7;
          v8 = *((_QWORD *)v4 + 4) < 8uLL;
          v18 = *((_QWORD *)v4 + 10);
          v20 = v4 + 60;
          v9 = *((_QWORD *)v4 - 4);
          v10 = v4 + 8;
          v19 = v9;
          v14 = v6;
          v15 = a2;
          if ( !v8 )
            v10 = (_QWORD *)*v10;
          v8 = *(_QWORD *)v4 < 8uLL;
          v21 = v10;
          v11 = v4 - 24;
          if ( !v8 )
            v11 = *(char **)v11;
          v23 = v9;
          v22 = v11;
          v12 = *((_DWORD *)v4 + 28);
          v24 = v4 - 40;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
            v12,
            &unk_18036D9EE);
        }
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(
          this,
          (struct InteractionLatencyTelemetry::TouchScenarioInfo *)(v4 - 40),
          1,
          1);
      }
      v4 += 512;
      --v5;
    }
    while ( v5 );
  }
}
