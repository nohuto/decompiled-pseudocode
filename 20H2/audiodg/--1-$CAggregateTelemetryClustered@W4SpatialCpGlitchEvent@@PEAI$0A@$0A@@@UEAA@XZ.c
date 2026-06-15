/*
 * XREFs of ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400675B0
 * Callers:
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$3 @ 0x14006749F (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$3.c)
 *     _CSpatialCrossProcessEndpointTraceLogger::CSpatialCrossProcessEndpointTraceLogger_::_1_::dtor$4 @ 0x1400674B2 (_CSpatialCrossProcessEndpointTraceLogger--CSpatialCrossProcessEndpointTraceLogger_--_1_--dtor$4.c)
 *     ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140067640 (--1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ.c)
 *     ??_E?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x140067740 (--_E-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140061FD0 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

void **__fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>(
        __int64 a1)
{
  ULONGLONG TickCount64; // rax

  *(_QWORD *)a1 = &CAggregateTelemetryClustered<enum SpatialCpErrorEvent,unsigned int *,0,0>::`vftable';
  TickCount64 = GetTickCount64();
  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    if ( TickCount64 - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
        (_QWORD *)a1,
        1);
  }
  return CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>(a1);
}
