/*
 * XREFs of IoIsPartialDumpRetry @ 0x140500B48
 * Callers:
 *     HvlAddSecurePagesCallbackRoutine @ 0x1404F6D30 (HvlAddSecurePagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140516058 (KeValidateBugCheckCallbackRecord.c)
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
