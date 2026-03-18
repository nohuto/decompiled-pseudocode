/*
 * XREFs of IoIsPartialDumpRetry @ 0x1404FCC28
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F2E70 (HvlAddSecurePagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x1405120D8 (KeValidateBugCheckCallbackRecord.c)
 * Callees:
 *     <none>
 */

char IoIsPartialDumpRetry()
{
  char result; // al

  result = CrashdmpDumpBlock;
  if ( CrashdmpDumpBlock )
    return (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 8) != 0;
  return result;
}
