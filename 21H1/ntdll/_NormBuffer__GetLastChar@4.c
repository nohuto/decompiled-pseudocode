/*
 * XREFs of _NormBuffer__GetLastChar@4 @ 0x4B366D40
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     <none>
 */

int __thiscall NormBuffer__GetLastChar(int this)
{
  int v2; // ecx
  unsigned __int16 *v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  int v6; // edi
  unsigned __int8 v7; // al
  char v8; // cl
  char v9; // al
  char v10; // cl

  v2 = *(_DWORD *)(this + 20);
  if ( *(_DWORD *)(this + 36) != v2 - 2 )
  {
    v3 = (unsigned __int16 *)(v2 - 2);
    *(_DWORD *)(this + 36) = v3;
    v4 = *v3;
    *(_DWORD *)(this + 32) = v4;
    v5 = v4;
    if ( v4 > 0xDC00 && v4 <= 0xDFFF )
    {
      v5 = v4 + ((*(v3 - 1) - 55287) << 10);
      *(_DWORD *)(this + 32) = v5;
    }
    v6 = *(_DWORD *)(this + 68);
    v7 = *(_BYTE *)((v5 >> 7) + *(_DWORD *)(v6 + 20));
    if ( v7 && v7 < 0xFBu )
    {
      v8 = *(_BYTE *)(*(_DWORD *)(v6 + 24) + (v7 << 7) + (v5 & 0x7F) - 128);
      v9 = v8 & 0xC0;
      v10 = v8 & 0x3F;
    }
    else
    {
      v9 = 0;
      v10 = 0;
    }
    *(_BYTE *)(this + 40) = v10;
    *(_BYTE *)(this + 41) = v9;
  }
  return *(_DWORD *)(this + 32);
}
