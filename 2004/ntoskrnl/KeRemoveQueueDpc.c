/*
 * XREFs of KeRemoveQueueDpc @ 0x1402FFC00
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1406CB650 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14074E640 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x1402FFC20 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
