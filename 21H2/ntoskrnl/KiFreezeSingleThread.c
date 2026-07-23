/*
 * XREFs of KiFreezeSingleThread @ 0x14023A74C
 * Callers:
 *     KeFreezeProcess @ 0x14023A64C (KeFreezeProcess.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 * Callees:
 *     KiSuspendThread @ 0x1402682C4 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  __int64 result; // rax

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe(a2 + 736);
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1);
  if ( !(_BYTE)result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
