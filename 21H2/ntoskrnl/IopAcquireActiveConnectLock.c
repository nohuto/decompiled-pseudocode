/*
 * XREFs of IopAcquireActiveConnectLock @ 0x1407627E0
 * Callers:
 *     IoDisconnectInterrupt @ 0x140761A10 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407621CC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407C4720 (IopAcquireReleaseConnectLockInternal.c)
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
