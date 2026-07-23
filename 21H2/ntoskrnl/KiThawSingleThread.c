/*
 * XREFs of KiThawSingleThread @ 0x14023A5D0
 * Callers:
 *     KeThawProcess @ 0x14023A474 (KeThawProcess.c)
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 * Callees:
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F0CF0 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rdi
  __int64 result; // rax
  __int64 v8; // r8

  v3 = (volatile signed __int32 *)(a2 + 736);
  result = KiAcquireKobjectLockSafe(a2 + 736);
  if ( (*(_DWORD *)(a2 + 120) & 0x4000) != 0 || a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = a3;
      result = KiResumeThread(a2, a1, v8);
    }
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return result;
}
