/*
 * XREFs of DestroyWindowsTimers @ 0x1C00C09C8
 * Callers:
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00C0864 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00C0BD0 (FreeTimer.c)
 */

__int64 DestroyWindowsTimers()
{
  return gtmrListHead[0];
}
