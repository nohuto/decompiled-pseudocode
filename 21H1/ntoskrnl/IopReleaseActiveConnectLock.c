/*
 * XREFs of IopReleaseActiveConnectLock @ 0x14074AFCC
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074A220 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074A9DC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407AF3CC (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0LL, 0LL);
  return result;
}
