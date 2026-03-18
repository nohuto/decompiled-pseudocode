/*
 * XREFs of HalpInterruptDeferredRecoveryService @ 0x1404CD6C0
 * Callers:
 *     <none>
 * Callees:
 *     WheaDeferredRecoveryService @ 0x1405B7AA0 (WheaDeferredRecoveryService.c)
 */

char HalpInterruptDeferredRecoveryService()
{
  WheaDeferredRecoveryService();
  return 1;
}
