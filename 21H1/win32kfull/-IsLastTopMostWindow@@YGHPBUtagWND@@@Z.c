/*
 * XREFs of ?IsLastTopMostWindow@@YGHPBUtagWND@@@Z @ 0xEA05C
 * Callers:
 *     ?TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z @ 0x32AE4 (-TrackBackground@@YGHPAUtagWINDOWPOS@@PAUtagWND@@1111@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsLastTopMostWindow(_DWORD *this)
{
  int v1; // eax
  BOOL result; // eax

  result = 0;
  if ( (*(_BYTE *)(this[5] + 16) & 8) != 0 )
  {
    v1 = this[12];
    if ( v1 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(v1 + 20) + 16) & 8) == 0 )
        return 1;
    }
  }
  return result;
}
