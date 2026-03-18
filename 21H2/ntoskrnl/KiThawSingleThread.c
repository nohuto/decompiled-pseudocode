/*
 * XREFs of KiThawSingleThread @ 0x14035F27C
 * Callers:
 *     KeThawMultiProcess @ 0x14025753C (KeThawMultiProcess.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 * Callees:
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1402F3290 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiThawSingleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rsi
  char v6; // r14
  char v7; // bl
  char v9; // dl
  char v10; // r8
  char result; // al
  char v12; // r8

  v4 = (volatile signed __int32 *)(a2 + 736);
  v6 = a4;
  v7 = a3;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736), a2, a3, a4);
  v9 = *(_BYTE *)(a2 + 794);
  v10 = v9 & 2;
  if ( v7 )
  {
    result = v9 & 0xF9;
    *(_BYTE *)(a2 + 794) = v9 & 0xF9;
    if ( v10 || (v9 & 4) != 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        v12 = 1;
        goto LABEL_10;
      }
    }
  }
  else
  {
    result = v9 & (v6 != 0 ? -5 : -3);
    *(_BYTE *)(a2 + 794) = result;
    if ( (v10 || (v9 & 4) != 0) && (result & 6) == 0 )
    {
      _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
      if ( !*(_BYTE *)(a2 + 644) )
      {
        v12 = 0;
LABEL_10:
        result = KiResumeThread(a2, a1, v12);
      }
    }
  }
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
