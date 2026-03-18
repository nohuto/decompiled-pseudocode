/*
 * XREFs of WheaDeferredRecoveryService @ 0x1405B7380
 * Callers:
 *     HalpInterruptDeferredRecoveryService @ 0x1404CD210 (HalpInterruptDeferredRecoveryService.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheaDrsDpc, 0LL, 0LL, 0LL, 0);
  return result;
}
