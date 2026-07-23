/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x140273FE0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExfAcquireCacheAwarePushLockExclusiveEx @ 0x140274030 (ExfAcquireCacheAwarePushLockExclusiveEx.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(ULONG_PTR a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = KeAbPreAcquire(a1, 0LL, 0);
  result = ExfAcquireCacheAwarePushLockExclusiveEx(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  return result;
}
