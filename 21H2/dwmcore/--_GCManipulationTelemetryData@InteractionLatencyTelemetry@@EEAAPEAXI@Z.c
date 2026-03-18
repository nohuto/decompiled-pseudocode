/*
 * XREFs of ??_GCManipulationTelemetryData@InteractionLatencyTelemetry@@EEAAPEAXI@Z @ 0x1801F1C50
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1800F9294 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801F1B80 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 */

InteractionLatencyTelemetry::CManipulationTelemetryData *__fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::`scalar deleting destructor'(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di

  v4 = a2;
  CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::~CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>(
    (__int64)this + 200,
    a2,
    a3);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 4) != 0 )
      __global_delete(this);
    else
      DefaultHeap::Free(this);
  }
  return this;
}
