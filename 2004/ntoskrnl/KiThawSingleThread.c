/*
 * XREFs of KiThawSingleThread @ 0x140347C4C
 * Callers:
 *     KeForceResumeProcess @ 0x1402FCC94 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x140347AF0 (KeThawProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140280030 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 */

void __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rdi
  char v6; // si
  __int64 v8; // r8
  __int64 v9; // r9

  v4 = (volatile signed __int32 *)(a2 + 736);
  v6 = a3;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3, a4);
  if ( (*(_DWORD *)(a2 + 120) & 0x4000) != 0 || v6 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = v6;
      KiResumeThread(a2, a1, v8, v9);
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
}
