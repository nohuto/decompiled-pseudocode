/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F95A0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x1402FD880 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  PRTL_BALANCED_NODE v3; // rbx
  volatile signed __int32 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, (__int64)v3, (__int64)a1);
  if ( v3 )
    BYTE2(v3[1].Left) |= 1u;
  return result;
}
