/*
 * XREFs of KiFreezeSingleThread @ 0x1402831E8
 * Callers:
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KeFreezeProcess @ 0x1402830E8 (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14024C4A0 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x14027A324 (KiSuspendThread.c)
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
