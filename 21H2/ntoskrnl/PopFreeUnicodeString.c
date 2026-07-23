/*
 * XREFs of PopFreeUnicodeString @ 0x1406713A4
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1406705BC (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x140670FF8 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x1407726E0 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_DWORD *)a1 = 0;
}
