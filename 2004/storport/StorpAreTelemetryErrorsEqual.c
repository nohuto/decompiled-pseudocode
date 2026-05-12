/*
 * XREFs of StorpAreTelemetryErrorsEqual @ 0x1C0007F2C
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C0003FE0 (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetryCollectErrorData @ 0x1C0007CD8 (StorpTelemetryCollectErrorData.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorpAreTelemetryErrorsEqual(_BYTE *a1, _BYTE *a2)
{
  return *a1 == *a2 && a1[1] == a2[1] && a1[2] == a2[2] && a1[3] == a2[3] && a1[4] == a2[4];
}
