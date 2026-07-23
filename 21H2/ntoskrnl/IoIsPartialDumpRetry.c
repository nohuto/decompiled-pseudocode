/*
 * XREFs of IoIsPartialDumpRetry @ 0x140502648
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F8850 (HvlAddSecurePagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517DD8 (KeValidateBugCheckCallbackRecord.c)
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
