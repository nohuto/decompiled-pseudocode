/*
 * XREFs of _CreateDIBPalette@8 @ 0x182CEE
 * Callers:
 *     ?xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z @ 0x1829A7 (-xxxGetDummyPalette@@YGPAXPAUtagWINDOWSTATION@@PAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 */

_WORD *__fastcall CreateDIBPalette(_DWORD *a1, int a2)
{
  unsigned __int16 v3; // bx
  _WORD *result; // eax
  _WORD *v5; // esi
  int v6; // edx
  char *v7; // edx
  _BYTE *v8; // ecx
  int v9; // ebx
  char v10; // al
  int HalftonePalette; // edi
  int v12; // [esp+14h] [ebp-4h]

  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(_gpDispInfo + 32));
LABEL_14:
    GreSetPaletteOwner(HalftonePalette, 0);
    return (_WORD *)HalftonePalette;
  }
  if ( *a1 == 12 )
  {
    v12 = 3;
LABEL_4:
    v3 = a2;
    goto LABEL_5;
  }
  v12 = 4;
  if ( !a1[8] )
    goto LABEL_4;
  v3 = *((_WORD *)a1 + 16);
LABEL_5:
  result = (_WORD *)Win32AllocPoolWithQuota(4 * v3 + 8, 1885565781);
  v5 = result;
  if ( result )
  {
    result[1] = v3;
    v6 = *(unsigned __int16 *)a1;
    *result = 768;
    v7 = (char *)a1 + v6;
    if ( v3 )
    {
      v8 = (char *)result + 5;
      v9 = 0;
      do
      {
        ++v9;
        *(v8 - 1) = v7[2];
        *v8 = v7[1];
        v8 += 4;
        v10 = *v7;
        v7 += v12;
        *(v8 - 3) = v10;
        *(v8 - 2) = 4;
      }
      while ( v9 < (unsigned __int16)v5[1] );
    }
    HalftonePalette = GreCreatePalette(v5);
    Win32FreePool(v5);
    goto LABEL_14;
  }
  return result;
}
