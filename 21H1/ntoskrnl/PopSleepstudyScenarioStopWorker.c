/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1408F5C80
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408E6BF8 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x1408E6D40 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  PopSleepstudySessionContext = 0;
  v0 = (_DWORD *)((char *)&unk_140C1E4B8 + 96 * (unsigned int)dword_140C1E4B0);
  PopDiagTraceSleepStudyStop();
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
