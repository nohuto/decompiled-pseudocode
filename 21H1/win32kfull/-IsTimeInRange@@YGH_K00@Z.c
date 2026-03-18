/*
 * XREFs of ?IsTimeInRange@@YGH_K00@Z @ 0x15E699
 * Callers:
 *     ?FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z @ 0x15E421 (-FindEntryByTime@@YGPAUtagINPUTTRANSFORMENTRY@@PAUtagINPUTTRANSFORMLIST@@PAU1@_K@Z.c)
 * Callees:
 *     <none>
 */

BOOL __stdcall IsTimeInRange(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  return a1 - a2 < a3 - a2;
}
