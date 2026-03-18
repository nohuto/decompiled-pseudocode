/*
 * XREFs of KiCanSelectSoftParkedProcessor @ 0x14045B8E6
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x14045AFC6 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeQueryReadyQueueStatsProcessor @ 0x14056A438 (KeQueryReadyQueueStatsProcessor.c)
 */

bool __fastcall KiCanSelectSoftParkedProcessor(__int64 a1, int a2)
{
  char v2; // bl
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v2 = 0;
  if ( KeSoftParkedQueueThreshold )
  {
    v5 = 0LL;
    v6 = 0LL;
    KeQueryReadyQueueStatsProcessor(a2, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v4, (__int64)&v6);
    return v5 + v6 > (unsigned __int64)(unsigned int)KeSoftParkedQueueThreshold;
  }
  return v2;
}
