/*
 * XREFs of KeRemoveQueueDpc @ 0x140340030
 * Callers:
 *     EtwpFreeLoggerContext @ 0x1407013FC (EtwpFreeLoggerContext.c)
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x140340050 (KeRemoveQueueDpcEx.c)
 */

BOOLEAN __stdcall KeRemoveQueueDpc(PRKDPC Dpc)
{
  return KeRemoveQueueDpcEx(Dpc, 0LL);
}
