/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1404D2630
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1405BD050 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
