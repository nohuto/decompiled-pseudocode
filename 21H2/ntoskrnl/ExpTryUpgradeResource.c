/*
 * XREFs of ExpTryUpgradeResource @ 0x140641F38
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14063CB30 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14063D600 (ExpTryConvertSharedToExclusiveLite.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpTryUpgradeResource(__int64 a1)
{
  char result; // al

  if ( *(_DWORD *)(a1 + 64) != 1 )
    return 0;
  result = 1;
  *(_WORD *)(a1 + 26) |= 0x80u;
  return result;
}
