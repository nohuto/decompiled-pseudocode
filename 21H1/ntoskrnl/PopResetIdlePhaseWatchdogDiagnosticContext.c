/*
 * XREFs of PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1408EBBE8
 * Callers:
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EB69C (PopDisarmIdlePhaseWatchdog.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void PopResetIdlePhaseWatchdogDiagnosticContext()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&unk_140C21348);
  dword_140C21360 = 0;
  if ( qword_140C21358 )
  {
    ExFreePoolWithTag(qword_140C21358, 0x67696450u);
    qword_140C21358 = 0LL;
  }
  PopReleaseRwLock((ULONG_PTR)&unk_140C21348);
}
