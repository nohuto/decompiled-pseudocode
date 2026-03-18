/*
 * XREFs of BgMarkHiberPhase @ 0x140AAB248
 * Callers:
 *     BgkResumePrepare @ 0x140A4E794 (BgkResumePrepare.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwMarkHiberPhase @ 0x140AAB280 (BgpFwMarkHiberPhase.c)
 */

__int64 BgMarkHiberPhase()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( (dword_140C0DF90 & 1) != 0 )
    v0 = BgpFwMarkHiberPhase();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
