/*
 * XREFs of KiSaveThreadIptState @ 0x140515170
 * Callers:
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140515068 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
