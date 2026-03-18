/*
 * XREFs of KiSaveThreadIptState @ 0x140570350
 * Callers:
 *     SwapContext @ 0x140428D90 (SwapContext.c)
 * Callees:
 *     KiSaveIptState @ 0x140570250 (KiSaveIptState.c)
 */

void __fastcall KiSaveThreadIptState(__int64 a1)
{
  KiSaveIptState(*(unsigned __int64 **)(a1 + 1112));
}
