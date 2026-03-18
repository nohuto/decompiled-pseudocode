/*
 * XREFs of KiFreezeSingleThread @ 0x140358E3C
 * Callers:
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KeFreezeProcess @ 0x140358E9C (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140243930 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x140356DBC (KiSuspendThread.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  char result; // al

  v4 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3, a4);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1, v7, v8);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
