/*
 * XREFs of IopAcquireActiveConnectLock @ 0x14075DFF0
 * Callers:
 *     IoDisconnectInterrupt @ 0x14075D220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14075D9DC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C03E8 (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopAcquireActiveConnectLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
  {
    LOBYTE(a2) = 1;
    return IopAcquireReleaseConnectLockInternal(a1, a2, 0LL);
  }
  return result;
}
