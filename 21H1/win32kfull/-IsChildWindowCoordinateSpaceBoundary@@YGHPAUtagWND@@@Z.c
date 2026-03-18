/*
 * XREFs of ?IsChildWindowCoordinateSpaceBoundary@@YGHPAUtagWND@@@Z @ 0x388D6
 * Callers:
 *     _IsChildWindowComposedForDpi@4 @ 0x2AC2C (_IsChildWindowComposedForDpi@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     ?xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z @ 0x3C78A (-xxxCalcValidRects@@YGHPAUtagSMWP@@PAPAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall IsChildWindowCoordinateSpaceBoundary(_DWORD *this)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // esi
  int v5; // edx
  unsigned int v7; // edi
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // eax

  v1 = this[14];
  if ( !v1 )
    return 0;
  v2 = this[3];
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 4);
    if ( v4 )
      v3 = *(_DWORD *)(v4 + 12);
  }
  if ( v1 == v3 )
    return 0;
  v5 = 1;
  v7 = *(_DWORD *)(*(_DWORD *)(v1 + 20) + 184);
  v8 = *(_DWORD *)(this[5] + 184);
  if ( (((v8 >> 8) ^ (v7 >> 8)) & 0x1FF) == 0 )
  {
    v9 = (v8 & 0xF) == 2 && (v8 & 0x20000000) != 0;
    v10 = (v7 & 0xF) == 2 && (v7 & 0x20000000) != 0;
    if ( v9 == v10 )
      return 0;
  }
  return v5;
}
