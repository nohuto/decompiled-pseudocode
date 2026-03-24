/*
 * XREFs of BgMarkHiberPhase @ 0x1409F664C
 * Callers:
 *     BgkResumePrepare @ 0x1409961D8 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x1409F70F4 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
