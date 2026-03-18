/*
 * XREFs of BgFreeContext @ 0x1409F4038
 * Callers:
 *     BgkResumeFinished @ 0x14099913C (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x14021E5E0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039B9D8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BA28 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = qword_140C504C8;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C13330 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
