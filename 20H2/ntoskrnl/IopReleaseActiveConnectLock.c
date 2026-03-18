/*
 * XREFs of IopReleaseActiveConnectLock @ 0x14075DFCC
 * Callers:
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C03E8 (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0LL, 0LL);
  return result;
}
