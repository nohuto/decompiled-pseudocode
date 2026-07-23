/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F18F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140359CD0 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v3, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  return result;
}
