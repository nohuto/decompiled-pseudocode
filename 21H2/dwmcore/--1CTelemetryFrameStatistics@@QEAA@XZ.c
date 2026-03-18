/*
 * XREFs of ??1CTelemetryFrameStatistics@@QEAA@XZ @ 0x1801D6A24
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z @ 0x1800FD46C (-SendFrameStatisticsTelemetry@CTelemetryFrameStatistics@@AEAAX_K@Z.c)
 */

void __fastcall CTelemetryFrameStatistics::~CTelemetryFrameStatistics(CTelemetryFrameStatistics *this)
{
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp+10h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  CTelemetryFrameStatistics::SendFrameStatisticsTelemetry(this, PerformanceCount.QuadPart);
}
