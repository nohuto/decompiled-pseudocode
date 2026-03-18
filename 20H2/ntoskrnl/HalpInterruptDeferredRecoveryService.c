/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1404D0C60
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1405BB600 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
