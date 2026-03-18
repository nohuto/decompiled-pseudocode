/*
 * XREFs of MiSetActivePfnHeat @ 0x1405B80F8
 * Callers:
 *     MmSetPfnListInfo @ 0x1403C4E98 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x1405B7B38 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x14033C3A0 (MiSetNonResidentPteHeat.c)
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&MiTransitionPagesMadeCold);
  return MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), a2);
}
