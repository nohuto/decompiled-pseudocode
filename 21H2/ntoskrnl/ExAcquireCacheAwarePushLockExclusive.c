/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x14029EBE0
 * Callers:
 *     <none>
 * Callees:
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x14029EC30 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL, 0LL);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
