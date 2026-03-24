/*
 * XREFs of KiSaveThreadIptState @ 0x14051A5E0
 * Callers:
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x14051A4D8 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
