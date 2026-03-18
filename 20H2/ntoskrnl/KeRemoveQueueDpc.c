/*
 * XREFs of KeRemoveQueueDpc @ 0x1403605C0
 * Callers:
 *     EtwpFreeLoggerContext @ 0x140712770 (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x1403605E0 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
