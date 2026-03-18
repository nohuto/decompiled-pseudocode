/*
 * XREFs of _EngCTGetCurrentGamma@4 @ 0xBB48C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  ULONG result; // eax

  result = gulGamma;
  if ( gulGamma == 1200 )
  {
    result = *((_DWORD *)hdev + 430);
    if ( !result )
      return 1200;
  }
  return result;
}
