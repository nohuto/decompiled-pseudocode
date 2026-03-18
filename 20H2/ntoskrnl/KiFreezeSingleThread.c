/*
 * XREFs of KiFreezeSingleThread @ 0x1402EAFAC
 * Callers:
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KeFreezeProcess @ 0x1402EAEAC (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1402EC150 (KiSuspendThread.c)
 */

__int64 __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rsi
  __int64 result; // rax

  v4 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3, a4);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1);
  if ( !(_BYTE)result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
