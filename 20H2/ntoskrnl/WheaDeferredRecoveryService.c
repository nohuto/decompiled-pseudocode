/*
 * XREFs of WheaDeferredRecoveryService @ 0x1405BB600
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x1404D0C60 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheaDrsDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
