/*
 * XREFs of ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QAEHPAPAVSPRITE@@@Z @ 0x1DCD53
 * Callers:
 *     ?vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z @ 0x1E1DFF (-vSpRedrawArea@@YGXPAU_SPRITESTATE@@PAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z @ 0x1E1FC9 (-vSpRedrawAreaExMirror@@YGXPAU_SPRITESTATE@@PAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ENUMAREAS::bAdvanceToTopMostOpaqueLayer(ENUMAREAS *this, struct SPRITE **a2)
{
  int v3; // ebx
  _DWORD *v4; // edi
  _DWORD *v5; // edx
  unsigned int v6; // ebx
  int v7; // ecx
  _DWORD *v8; // ecx
  int result; // eax

  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)*((_DWORD *)this + 14);
  if ( gpto )
  {
    v6 = *((_DWORD *)this + 13) - 12 + *(_DWORD *)(*((_DWORD *)this + 13) + 8);
    while ( 1 )
    {
      v7 = v5[2];
      if ( (*(_BYTE *)v7 & 8) != 0 )
      {
        v8 = *(_DWORD **)(v7 + 132);
        if ( !v8
          || v8[13] <= 0x38u
          && v8[16] <= *v5
          && v8[18] >= v5[1]
          && v8[17] <= *((_DWORD *)this + 9)
          && v8[19] >= *((_DWORD *)this + 10) )
        {
          v4 = v5;
        }
      }
      if ( (unsigned int)v5 >= v6 || v5[3] != *v5 )
        break;
      v5 += 3;
    }
    v3 = 0;
  }
  if ( v4 && *a2 != (struct SPRITE *)v4[2] )
  {
    *((_DWORD *)this + 14) = v4;
    v3 = 1;
  }
  result = v3;
  *a2 = *(struct SPRITE **)(*((_DWORD *)this + 14) + 8);
  return result;
}
