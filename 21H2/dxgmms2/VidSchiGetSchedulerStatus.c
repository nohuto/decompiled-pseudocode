/*
 * XREFs of VidSchiGetSchedulerStatus @ 0x1C0018E74
 * Callers:
 *     VidSchiRequestSchedulerStatus @ 0x1C00B05F4 (VidSchiRequestSchedulerStatus.c)
 *     VidSchFlushAdapter @ 0x1C00F4140 (VidSchFlushAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiGetSchedulerStatus(__int64 a1)
{
  return *(unsigned int *)(a1 + 312);
}
