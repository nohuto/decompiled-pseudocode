/*
 * XREFs of WdipSemRollBackProviderTable @ 0x14092B4F4
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x14078551C (WdipSemLoadScenarioTable.c)
 * Callees:
 *     WdipSemFastFree @ 0x1407741A4 (WdipSemFastFree.c)
 */

PSLIST_ENTRY __fastcall WdipSemRollBackProviderTable(int a1)
{
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax

  for ( i = a1; i < dword_140C1C540; ++i )
  {
    result = WdipSemFastFree(2, (_SLIST_ENTRY *)WdipSemProviderTable[i]);
    WdipSemProviderTable[i] = 0LL;
  }
  dword_140C1C540 = a1;
  return result;
}
