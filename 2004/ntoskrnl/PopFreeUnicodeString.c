/*
 * XREFs of PopFreeUnicodeString @ 0x14064EE54
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14064DA1C (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14064EAA8 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075FD50 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
