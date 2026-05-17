/*
 * XREFs of _TpIsTimerSet@4 @ 0x4B2B4520
 * Callers:
 *     _TpSetTimerEx@16 @ 0x4B2B4620 (_TpSetTimerEx@16.c)
 * Callees:
 *     _TppTimerpValidateTimer@12 @ 0x4B2B46DB (_TppTimerpValidateTimer@12.c)
 */

BOOL __stdcall TpIsTimerSet(int a1)
{
  return TppTimerpValidateTimer(1) && *(_QWORD *)(a1 + 200) != 0LL;
}
