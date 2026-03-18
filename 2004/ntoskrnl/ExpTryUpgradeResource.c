/*
 * XREFs of ExpTryUpgradeResource @ 0x1405B45C8
 * Callers:
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405AF150 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x1405B0274 (ExpTryConvertSharedToExclusiveLite.c)
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
