/*
 * XREFs of BgMarkHiberPhase @ 0x1409F364C
 * Callers:
 *     BgkResumePrepare @ 0x140991A38 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x1409F40F4 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C132D0 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
