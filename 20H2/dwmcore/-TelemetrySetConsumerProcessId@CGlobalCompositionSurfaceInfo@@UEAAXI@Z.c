/*
 * XREFs of ?TelemetrySetConsumerProcessId@CGlobalCompositionSurfaceInfo@@UEAAXI@Z @ 0x1800DEC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGlobalCompositionSurfaceInfo::TelemetrySetConsumerProcessId(
        CGlobalCompositionSurfaceInfo *this,
        int a2)
{
  *((_DWORD *)this + 88) = a2;
}
