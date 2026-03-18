/*
 * XREFs of ?vSpOrderInY@@YGXPAVSPRITE@@@Z @ 0x9F24C
 * Callers:
 *     ?pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z @ 0x9F136 (-pSpCreateSprite@@YGPAVSPRITE@@PAUHDEV__@@PAU_RECTL@@PAUHWND__@@PAU_POINTL@@@Z.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall vSpOrderInY(_DWORD *this)
{
  _DWORD *v1; // eax
  int v2; // esi
  _DWORD *v3; // edx
  int v4; // edx
  _DWORD *i; // edx
  _DWORD *j; // eax

  v1 = (_DWORD *)this[7];
  v2 = this[12];
  if ( v1 && v1[12] > v2 )
  {
    v4 = this[6];
    v1[6] = v4;
    if ( v4 )
      *(_DWORD *)(v4 + 28) = v1;
    for ( i = (_DWORD *)v1[7]; i && i[12] > v2; i = (_DWORD *)i[7] )
      v1 = i;
    this[7] = i;
    this[6] = v1;
    v1[7] = this;
    if ( i )
      i[6] = this;
    else
      *(_DWORD *)(this[3] + 12) = this;
  }
  else
  {
    v3 = (_DWORD *)this[6];
    if ( v3 && v3[12] < v2 )
    {
      v3[7] = v1;
      if ( v1 )
        v1[6] = v3;
      else
        *(_DWORD *)(this[3] + 12) = v3;
      for ( j = (_DWORD *)v3[6]; j && j[12] < v2; j = (_DWORD *)j[6] )
        v3 = j;
      this[7] = v3;
      this[6] = j;
      v3[6] = this;
      if ( j )
        j[7] = this;
    }
  }
}
