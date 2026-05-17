/*
 * XREFs of TpIsTimerSet @ 0x180012000
 * Callers:
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 * Callees:
 *     TppTimerpValidateTimer @ 0x180012914 (TppTimerpValidateTimer.c)
 */

__int64 __fastcall TpIsTimerSet(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edx

  v2 = TppTimerpValidateTimer(a1, 0LL, 1LL);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = *(_QWORD *)(a1 + 328) != 0LL;
  return v3;
}
