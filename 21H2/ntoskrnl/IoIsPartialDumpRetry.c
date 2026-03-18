/*
 * XREFs of IoIsPartialDumpRetry @ 0x1405529A8
 * Callers:
 *     HvlAddPagesCallbackRoutine @ 0x14054A4B0 (HvlAddPagesCallbackRoutine.c)
 *     HvlAddSecureHvPagesCallbackRoutine @ 0x14054A5C0 (HvlAddSecureHvPagesCallbackRoutine.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x14054A610 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlAddSecureSkPagesCallbackRoutine @ 0x14054A840 (HvlAddSecureSkPagesCallbackRoutine.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140567038 (KeValidateBugCheckCallbackRecord.c)
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
