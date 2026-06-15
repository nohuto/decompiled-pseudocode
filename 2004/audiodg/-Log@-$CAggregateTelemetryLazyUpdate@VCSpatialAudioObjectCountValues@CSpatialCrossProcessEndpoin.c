/*
 * XREFs of ?Log@?$CAggregateTelemetryLazyUpdate@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14005F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log@?$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogger@@W4SpatialObjectCountTypes@@I$00$0A@@@UEAAX_N@Z @ 0x14005F060 (-Log@-$CAggregateTelemetry@VCSpatialAudioObjectCountValues@CSpatialCrossProcessEndpointTraceLogg.c)
 */

ULONGLONG __fastcall CAggregateTelemetryLazyUpdate<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Log(
        __int64 a1,
        char a2)
{
  ULONGLONG result; // rax

  CAggregateTelemetry<CSpatialCrossProcessEndpointTraceLogger::CSpatialAudioObjectCountValues,enum SpatialObjectCountTypes,unsigned int,1,0>::Log(
    a1,
    a2);
  result = GetTickCount64();
  *(_QWORD *)(a1 + 40) = result;
  return result;
}
