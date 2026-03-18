/*
 * XREFs of BgFreeContext @ 0x1409EE038
 * Callers:
 *     BgkResumeFinished @ 0x14098CCEC (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1402815B0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = qword_140C50578;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C132D0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
