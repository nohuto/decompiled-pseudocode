/*
 * XREFs of IopAcquireActiveConnectLock @ 0x14074AFF0
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC (IopAcquireReleaseConnectLockInternal.c)
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
