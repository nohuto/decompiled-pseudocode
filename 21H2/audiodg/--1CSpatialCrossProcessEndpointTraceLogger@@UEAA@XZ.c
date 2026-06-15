/*
 * XREFs of ??1CSpatialCrossProcessEndpointTraceLogger@@UEAA@XZ @ 0x140067780
 * Callers:
 *     ??1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140065A94 (--1CSpatialCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z @ 0x1400679D0 (--_GCSpatialCrossProcessEndpointTraceLogger@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAA@XZ @ 0x140067688 (--1-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger.c)
 *     ??1?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x1400676F0 (--1-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::~CSpatialCrossProcessEndpointTraceLogger(
        CSpatialCrossProcessEndpointTraceLogger *this,
        __int64 a2)
{
  _QWORD *v3; // rcx

  *(_QWORD *)this = &CSpatialCrossProcessEndpointTraceLogger::`vftable';
  v3 = (_QWORD *)((char *)this + 448);
  *v3 = &CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::`vftable';
  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::~CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>(
    (__int64)v3,
    a2);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 352);
  CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>((__int64)this + 256);
  *((_QWORD *)this + 20) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 12) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
  *((_QWORD *)this + 3) = &CAggregateValuesBase<enum CpGlitchEvent,unsigned int *>::`vftable';
}
