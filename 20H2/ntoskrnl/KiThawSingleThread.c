/*
 * XREFs of KiThawSingleThread @ 0x14036142C
 * Callers:
 *     KeForceResumeProcess @ 0x1402EB0E0 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1403612D0 (KeThawProcess.c)
 * Callees:
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402E0780 (KiAcquireKobjectLockSafe.c)
 */

void __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rdi
  char v6; // si
  __int64 v8; // r8

  v4 = (volatile signed __int32 *)(a2 + 736);
  v6 = a3;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3, a4);
  if ( (*(_DWORD *)(a2 + 120) & 0x4000) != 0 || v6 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = v6;
      KiResumeThread(a2, a1, v8);
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
