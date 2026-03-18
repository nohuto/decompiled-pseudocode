/*
 * XREFs of BgFreeContext @ 0x140AAB038
 * Callers:
 *     BgkResumeFinished @ 0x140A4E360 (BgkResumeFinished.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = qword_140C547D8;
  if ( KeGetCurrentIrql() <= 2u && qword_140C547D8 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C0DF90 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
