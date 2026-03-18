/*
 * XREFs of ?bEqualEntries@XEPALOBJ@@QAEHV1@@Z @ 0x222E1E
 * Callers:
 *     ?bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z @ 0x96B14 (-bEnableHalftone@PDEVOBJ@@QAEHPAUtagCOLORADJUSTMENT@@@Z.c)
 *     _EngHTBlt@48 @ 0x2271FF (_EngHTBlt@48.c)
 * Callees:
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

BOOL __thiscall XEPALOBJ::bEqualEntries(int *this, int a2)
{
  int v2; // edx
  unsigned int v3; // edi
  int v4; // ecx
  unsigned int v5; // esi
  _DWORD *v6; // ecx
  int v7; // edx
  bool v9; // zf

  if ( !a2 )
    return 0;
  v2 = *this;
  v3 = *(_DWORD *)(*this + 20);
  if ( v3 != *(_DWORD *)(a2 + 20) )
    return 0;
  v4 = *(_DWORD *)(v2 + 16);
  if ( (v4 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 16) & 1) != 0 )
    {
      v5 = 0;
      if ( v3 )
      {
        v6 = *(_DWORD **)(a2 + 76);
        v7 = *(_DWORD *)(v2 + 76) - (_DWORD)v6;
        while ( ((*v6 ^ *(_DWORD *)((char *)v6 + v7)) & 0xFFFFFF) == 0 )
        {
          ++v5;
          ++v6;
          if ( v5 >= v3 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
  }
  else
  {
    if ( (v4 & 2) != 0 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 2) != 0 )
        return memcmp(*(const void **)(v2 + 76), *(const void **)(a2 + 76), 0xCu) == 0;
      return 0;
    }
    if ( (v4 & 4) != 0 )
    {
      v9 = (*(_BYTE *)(a2 + 16) & 4) == 0;
    }
    else
    {
      if ( (v4 & 8) == 0 )
        return 0;
      v9 = (*(_BYTE *)(a2 + 16) & 8) == 0;
    }
    if ( !v9 )
      return 1;
  }
  return 0;
}
