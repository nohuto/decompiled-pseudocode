/*
 * XREFs of ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001EBC8
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800037B0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180033CF8 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180077A28 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180078A30 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x180155EF0 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x180003E18 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *__fastcall CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *this)
{
  CTelemetryTouchLatencyAnalysis *v2; // rcx

  v2 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 10);
  if ( v2 )
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v2, *(_QWORD *)this, 0xFFFFFFFFFFFFFFFFuLL);
  operator delete(this, 0x58uLL);
  return this;
}
