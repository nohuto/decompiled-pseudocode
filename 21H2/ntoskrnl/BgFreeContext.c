/*
 * XREFs of BgFreeContext @ 0x1409F2038
 * Callers:
 *     BgkResumeFinished @ 0x14099608C (BgkResumeFinished.c)
 * Callees:
 *     KeGetCurrentIrql @ 0x1402C43D0 (KeGetCurrentIrql.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 */

void BgFreeContext()
{
  PVOID v0; // rbx

  v0 = qword_140C50688;
  if ( KeGetCurrentIrql() <= 2u && v0 )
  {
    BgpFwAcquireLock();
    if ( (dword_140C134F0 & 1) != 0 )
      ResFwFreeContext(v0);
    BgpFwReleaseLock();
  }
}
