/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408ECE68
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EC91C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402985D4 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402DF2F4 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21108);
  dword_140C21120 = 0;
  if ( qword_140C21118 )
  {
    ExFreePoolWithTag(qword_140C21118, 0x67696450u);
    qword_140C21118 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C21108);
}
