/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1408F6F70
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408E7E78 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408E7FC0 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  PopSleepstudySessionContext = 0;
  v0 = (_DWORD *)((char *)&unk_140C1E2B8 + 96 * (unsigned int)dword_140C1E2B0);
  PopDiagTraceSleepStudyStop();
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
