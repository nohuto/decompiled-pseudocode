/*
 * XREFs of _NormBuffer__RewindOutputCharacter@4 @ 0x4B3670E0
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

int __thiscall NormBuffer__RewindOutputCharacter(int this)
{
  _WORD *v1; // eax
  int result; // eax

  *(_DWORD *)(this + 20) -= 2;
  v1 = *(_WORD **)(this + 20);
  if ( *v1 > 0xDC00u && *v1 < 0xDFFFu )
    *(_DWORD *)(this + 20) = v1 - 1;
  *(_DWORD *)(this + 36) = *(_DWORD *)(this + 12) - 2;
  result = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_WORD *)(this + 40) = 0;
  return result;
}
