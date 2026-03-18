/*
 * XREFs of CreateDIBPalette @ 0x1C021F2B8
 * Callers:
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C021EF44 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 */

_WORD *__fastcall CreateDIBPalette(unsigned __int16 *a1, int a2)
{
  int v2; // ebx
  unsigned __int16 v3; // bp
  __int64 v5; // r14
  _WORD *result; // rax
  _WORD *v7; // rdi
  _BYTE *v8; // rdx
  __int64 v9; // r14
  _BYTE *v10; // rcx
  char v11; // al
  __int64 HalftonePalette; // rbx

  v2 = 0;
  v3 = a2;
  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(gpDispInfo + 64LL));
LABEL_12:
    GreSetPaletteOwner(HalftonePalette, 0LL);
    return (_WORD *)HalftonePalette;
  }
  if ( *(_DWORD *)a1 == 12 )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = 1LL;
    if ( *((_DWORD *)a1 + 8) )
      v3 = a1[16];
  }
  result = (_WORD *)Win32AllocPoolWithQuota(4LL * v3 + 8, 1885565781LL);
  v7 = result;
  if ( result )
  {
    result[1] = v3;
    v8 = (_BYTE *)(*a1 + 1LL);
    *result = 768;
    if ( v3 )
    {
      v9 = v5 + 3;
      v10 = (char *)result + 5;
      v8 = &v8[(_QWORD)a1];
      do
      {
        ++v2;
        *(v10 - 1) = v8[1];
        *v10 = *v8;
        v10 += 4;
        v11 = *(v8 - 1);
        v8 += v9;
        *(v10 - 3) = v11;
        *(v10 - 2) = 4;
      }
      while ( v2 < (unsigned __int16)v7[1] );
    }
    HalftonePalette = GreCreatePalette(v7, v8);
    Win32FreePool(v7);
    goto LABEL_12;
  }
  return result;
}
