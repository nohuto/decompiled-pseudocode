/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C00160FC
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C0092A98 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00D1510 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 304);
}
