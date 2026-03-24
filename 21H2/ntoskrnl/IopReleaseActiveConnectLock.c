/*
 * XREFs of IopReleaseActiveConnectLock @ 0x1407627BC
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761A10 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4720 (IopAcquireReleaseConnectLockInternal.c)
 */

__int64 __fastcall IopReleaseActiveConnectLock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 24) )
    return IopAcquireReleaseConnectLockInternal(a1, 0LL, 0LL);
  return result;
}
