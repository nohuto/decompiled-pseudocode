/*
 * XREFs of KiSaveThreadIptState @ 0x140514B20
 * Callers:
 *     SwapContext @ 0x1403FCEA0 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140514A18 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
}
