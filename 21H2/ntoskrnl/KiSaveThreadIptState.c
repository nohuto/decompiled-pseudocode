/*
 * XREFs of KiSaveThreadIptState @ 0x14051A820
 * Callers:
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x14051A718 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
