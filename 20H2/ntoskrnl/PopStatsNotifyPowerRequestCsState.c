/*
 * XREFs of PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     RtlEnumerateGenericTableAvl @ 0x140328760 (RtlEnumerateGenericTableAvl.c)
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PoIsArmedStopWatchCollection @ 0x140361200 (PoIsArmedStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x140361210 (PoUnarmStopWatchCollection.c)
 *     PoArmStopWatchCollection @ 0x140361280 (PoArmStopWatchCollection.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     __report_rangecheckfailure @ 0x1404B4AAC (__report_rangecheckfailure.c)
 *     PopLogPowerRequestAction @ 0x14062C1F0 (PopLogPowerRequestAction.c)
 *     PopPublishAndPurgePowerRequestStats @ 0x1408F8C3C (PopPublishAndPurgePowerRequestStats.c)
 */

void __fastcall PopStatsNotifyPowerRequestCsState(__int64 a1, char a2)
{
  __int64 v2; // rsi
  const CHAR *v3; // rcx
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  __int128 *v6; // rcx
  _QWORD *v7; // rcx
  char v8; // al
  BOOLEAN i; // dl
  char *v10; // rax
  unsigned int v11; // ebx
  _BYTE *v12; // rdi
  __int128 *v13; // rcx
  _BYTE v14[8]; // [rsp+38h] [rbp+10h] BYREF

  v2 = PopWnfCsEnterScenarioId;
  v3 = "CS Entry";
  if ( !a2 )
    v3 = "CS Exit";
  PopLogPowerRequestAction(v3, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PowerReqestStatsLock);
  v4 = 0;
  v5 = 0LL;
  do
  {
    v6 = &ExecutionRequiredStopWatchCollection;
    if ( v4 != 3 )
      v6 = 0LL;
    if ( v6 && PoIsArmedStopWatchCollection((__int64)v6) )
    {
      PoUnarmStopWatchCollection(v7);
      v8 = 1;
    }
    else
    {
      if ( v5 >= 4 )
        _report_rangecheckfailure();
      v8 = 0;
    }
    v14[v5] = v8;
    ++v4;
    ++v5;
  }
  while ( v4 <= 3 );
  for ( i = 1; ; i = 0 )
  {
    v10 = (char *)RtlEnumerateGenericTableAvl(&PowerRequestStatsDatabase, i);
    if ( !v10 )
      break;
    PopPublishAndPurgePowerRequestStats(v10, v2);
  }
  v11 = 0;
  v12 = v14;
  do
  {
    if ( *v12 )
    {
      v13 = &ExecutionRequiredStopWatchCollection;
      if ( v11 != 3 )
        v13 = 0LL;
      PoArmStopWatchCollection(v13);
    }
    ++v11;
    ++v12;
  }
  while ( v11 <= 3 );
  PopReleaseRwLock((ULONG_PTR)&PowerReqestStatsLock);
}
