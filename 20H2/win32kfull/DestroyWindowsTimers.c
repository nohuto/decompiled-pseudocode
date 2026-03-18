/*
 * XREFs of DestroyWindowsTimers @ 0x1C000BEF8
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C000BD94 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C000C100 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead;
}
