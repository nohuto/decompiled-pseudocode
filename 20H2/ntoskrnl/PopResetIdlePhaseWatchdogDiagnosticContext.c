/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408F2A78
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408F252C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14033E5A4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14036343C (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21208);
  dword_140C21220 = 0;
  if ( qword_140C21218 )
  {
    ExFreePoolWithTag(qword_140C21218, 0x67696450u);
    qword_140C21218 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C21208);
}
