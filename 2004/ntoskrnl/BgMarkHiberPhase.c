/*
 * XREFs of BgMarkHiberPhase @ 0x1409F364C
 * Callers:
 *     BgkResumePrepare @ 0x140993078 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140399518 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140399568 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x1409F40F4 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C13310 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
