/*
 * XREFs of PopFreeUnicodeString @ 0x1406E1388
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x14071CB48 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14071D27C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14076E3C0 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
