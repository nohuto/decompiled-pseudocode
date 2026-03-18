/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1408FCB80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408EDA88 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408EDBD0 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  PopSleepstudySessionContext = 0;
  v0 = (_DWORD *)((char *)&unk_140C1E398 + 96 * (unsigned int)dword_140C1E390);
  PopDiagTraceSleepStudyStop();
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
