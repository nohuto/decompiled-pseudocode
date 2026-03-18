/*
 * XREFs of InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline @ 0x1801D29AC
 * Callers:
 *     ?ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA?AUtagTELEMETRY_POINTER_FRAME_TIMES@@AEBU2@@Z @ 0x1801D2824 (-ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA-AUtagTELEMETRY_.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r9

  v3 = 0LL;
  if ( a3 && a2 )
    return *a1 - g_qpcFrequency.QuadPart * (a1[1] - a2) / a3;
  return v3;
}
