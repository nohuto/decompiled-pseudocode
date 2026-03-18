/*
 * XREFs of IoIsPartialDumpRetry @ 0x1404FD278
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F34C0 (HvlAddSecurePagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140512728 (KeValidateBugCheckCallbackRecord.c)
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
