/*
 * XREFs of KeRemoveQueueDpc @ 0x140246840
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406146D4 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x140761BD0 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140246860 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
