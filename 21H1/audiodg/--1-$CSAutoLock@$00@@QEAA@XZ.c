/*
 * XREFs of ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14005EAEC
 * Callers:
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::AddData_::_1_::dtor$0 @ 0x14005EE0C (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCountValues_enu.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Clear_::_1_::dtor$0 @ 0x14005EF9F (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_14005EF9F.c)
 *     _CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::Log_::_1_::dtor$0 @ 0x14005F0CD (_CAggregateTelemetry_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCo_ea_14005F0CD.c)
 *     _CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues_enum_SpatialObjectCountTypes_unsigned_int_1_0_::SetPeriod_::_1_::dtor$0 @ 0x14005FA07 (_CAggregateTelemetryLazyUpdate_CSpatialCrossProcessEndpointTraceLogger--CSpatialAudioObjectCount.c)
 * Callees:
 *     <none>
 */

void __fastcall CSAutoLock<1>::~CSAutoLock<1>(struct _RTL_CRITICAL_SECTION **a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rcx

  v1 = *a1;
  if ( v1 )
    LeaveCriticalSection(v1);
}
