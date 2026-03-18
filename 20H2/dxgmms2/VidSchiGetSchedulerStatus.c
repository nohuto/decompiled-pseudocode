/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C001601C
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C008F638 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 304);
}
