/*
 * XREFs of ?bGrowPath@WIDEPATHOBJ@@IAEHXZ @ 0x235295
 * Callers:
 *     ?bBeginFigure@WIDEPATHOBJ@@QAEHXZ @ 0x234D6E (-bBeginFigure@WIDEPATHOBJ@@QAEHXZ.c)
 *     ?bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z @ 0x235587 (-bPenFlatten@WIDEPENOBJ@@AAEHPAU_POINTFIX@@@Z.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x236BF0 (-vGrowPathAndAddPoint@WIDEPATHOBJ@@IAEXPAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall WIDEPATHOBJ::bGrowPath(WIDEPATHOBJ *this)
{
  unsigned int v2; // esi
  _DWORD *v3; // eax
  int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int result; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edx
  int v10; // eax

  v2 = 0;
  v3 = (_DWORD *)*((_DWORD *)this + 2);
  v4 = v3[4];
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4) + 16;
    v6 = v4 + *(_DWORD *)(v4 + 8);
    if ( v6 > v5 )
      v2 = (int)(v6 - v5) >> 3;
  }
  if ( v2 < 8 )
  {
    result = newpathalloc();
    v4 = result;
    if ( !result )
      return result;
    *(_DWORD *)result = *(_DWORD *)(*((_DWORD *)this + 2) + 16);
    *(_DWORD *)(*((_DWORD *)this + 2) + 16) = result;
    v3 = (_DWORD *)*((_DWORD *)this + 2);
    v2 = (unsigned int)(v4 + *(_DWORD *)(v4 + 8) - *(_DWORD *)(v4 + 4) - 16) >> 3;
  }
  v8 = *(_DWORD **)(v4 + 4);
  v9 = (_DWORD *)v3[6];
  if ( v9 )
  {
    *v9 = v8;
    v10 = *(_DWORD *)(*((_DWORD *)this + 2) + 24);
  }
  else
  {
    v3[5] = v8;
    v10 = 0;
  }
  v8[1] = v10;
  *(_DWORD *)(*((_DWORD *)this + 2) + 24) = v8;
  *v8 = 0;
  v8[3] = 0;
  *((_DWORD *)this + 18) = v8 + 4;
  *((_DWORD *)this + 19) = &v8[2 * v2 + 4];
  return 1;
}
