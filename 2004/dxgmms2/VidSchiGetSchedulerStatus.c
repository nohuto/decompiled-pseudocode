/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C00144EC
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C008F4F8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00D2940 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 304);
}
