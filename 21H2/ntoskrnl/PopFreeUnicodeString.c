/*
 * XREFs of PopFreeUnicodeString @ 0x1406C17D8
 * Callers:
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x14062B9E4 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlDeleteStatsForPowerRequest @ 0x14062DB80 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x140772520 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
