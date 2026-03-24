/*
 * XREFs of KeRemoveQueueDpc @ 0x1402C7FE0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406B51BC (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140761A10 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x1402C8000 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
