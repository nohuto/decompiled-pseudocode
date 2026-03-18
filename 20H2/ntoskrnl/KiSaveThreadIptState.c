/*
 * XREFs of KiSaveThreadIptState @ 0x140518AA0
 * Callers:
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140518998 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
