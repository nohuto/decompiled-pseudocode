/*
 * XREFs of _pbmiConvertInfo@8 @ 0x214467
 * Callers:
 *     _GreSetDIBits@28 @ 0x226C73 (_GreSetDIBits@28.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 */

char *__thiscall pbmiConvertInfo(unsigned __int16 *this)
{
  int v2; // edx
  int v3; // esi
  char *v4; // eax
  char *v5; // ecx
  _BYTE *v7; // edx
  unsigned __int16 v8; // ax
  char *v9; // edi
  char v10; // al
  int v11; // [esp-4h] [ebp-10h]

  v2 = this[5];
  if ( v2 == 1 )
  {
    v11 = 2;
    goto LABEL_11;
  }
  if ( this[5] == 4 )
  {
    v11 = 16;
LABEL_11:
    v3 = v11;
    goto LABEL_12;
  }
  if ( this[5] == 8 )
  {
    v3 = 256;
  }
  else
  {
    v3 = 0;
    if ( v2 != 16 && v2 != 24 && v2 != 32 )
      return 0;
  }
LABEL_12:
  v4 = (char *)PALLOCMEM2(4 * v3 + 40, 1886221383, 0);
  v5 = v4;
  if ( !v4 )
    return 0;
  *(_DWORD *)v4 = 40;
  v7 = v4 + 40;
  *((_DWORD *)v4 + 1) = this[2];
  *((_DWORD *)v4 + 2) = this[3];
  *((_WORD *)v4 + 6) = this[4];
  v8 = this[5];
  v9 = (char *)(this + 6);
  *((_WORD *)v5 + 7) = v8;
  *((_DWORD *)v5 + 4) = 0;
  *((_DWORD *)v5 + 5) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *((_DWORD *)v5 + 8) = 0;
  for ( *((_DWORD *)v5 + 9) = 0; v3; --v3 )
  {
    v7[2] = v9[2];
    v7[1] = v9[1];
    v10 = *v9;
    v9 += 3;
    *v7 = v10;
    v7 += 4;
    *(v7 - 1) = 0;
  }
  return v5;
}
