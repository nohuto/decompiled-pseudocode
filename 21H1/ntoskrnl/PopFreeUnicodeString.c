/*
 * XREFs of PopFreeUnicodeString @ 0x1406FF10C
 * Callers:
 *     PopAvlDeleteStatsForPowerRequest @ 0x1406FF4A0 (PopAvlDeleteStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForPowerRequest @ 0x1407007B8 (PopAvlFindOrMakeStatsForPowerRequest.c)
 *     PopAvlFindOrMakeStatsForScenarioType @ 0x14075DA40 (PopAvlFindOrMakeStatsForScenarioType.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
