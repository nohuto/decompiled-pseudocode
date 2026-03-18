/*
 * XREFs of IopAcquireActiveConnectLock @ 0x14074F410
 * Callers:
 *     IoDisconnectInterrupt @ 0x14074E640 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074EDFC (IopConnectInterrupt.c)
 * Callees:
 *     IopAcquireReleaseConnectLockInternal @ 0x1407B24A0 (IopAcquireReleaseConnectLockInternal.c)
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
