/*
 * XREFs of ?IsValidForHangTest@@YGHPBUtagTHREADINFO@@@Z @ 0x11BFE
 * Callers:
 *     _DoExplorerHangDetection@4 @ 0x11B94 (_DoExplorerHangDetection@4.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsValidForHangTest(_DWORD *this)
{
  BOOL result; // eax

  result = 0;
  if ( this )
  {
    if ( this[61] )
      return this[58] != 0;
  }
  return result;
}
