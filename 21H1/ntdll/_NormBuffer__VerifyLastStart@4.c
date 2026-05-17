/*
 * XREFs of _NormBuffer__VerifyLastStart@4 @ 0x4B3671A4
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

char __thiscall NormBuffer__VerifyLastStart(int this)
{
  char v1; // dl
  char result; // al
  int v3; // eax

  v1 = *(_BYTE *)(this + 40);
  if ( !v1 || v1 == 63 || (result = *(_BYTE *)(this + 41)) == 0 || result == 64 )
  {
    v3 = *(_DWORD *)(this + 36);
    *(_DWORD *)(this + 60) = 0;
    *(_DWORD *)(this + 56) = 0;
    *(_DWORD *)(this + 44) = v3 + 2;
    *(_DWORD *)(this + 48) = *(_DWORD *)(this + 32);
    result = *(_BYTE *)(this + 41);
    *(_BYTE *)(this + 52) = v1;
    *(_BYTE *)(this + 53) = result;
  }
  return result;
}
