/*
 * XREFs of ?vPrependBeforeFigure@WIDEPATHOBJ@@QAEXXZ @ 0x2373A5
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall WIDEPATHOBJ::vPrependBeforeFigure(WIDEPATHOBJ *this)
{
  int v2; // edi
  _DWORD *v3; // esi
  _DWORD *i; // edx
  int v5; // ecx
  _DWORD *v6; // ebx
  _DWORD *v7; // edi

  v2 = *((_DWORD *)this + 2);
  v3 = *(_DWORD **)(v2 + 24);
  for ( i = v3; (i[2] & 1) == 0; i = (_DWORD *)i[1] )
    ;
  v5 = *((_DWORD *)this + 20);
  v6 = (_DWORD *)i[1];
  *(_DWORD *)(v2 + 24) = v6;
  v7 = *(_DWORD **)(v5 + 4);
  if ( v7 )
    *v7 = i;
  else
    *(_DWORD *)(*((_DWORD *)this + 2) + 20) = i;
  i[1] = *(_DWORD *)(v5 + 4);
  *v3 = v5;
  *(_DWORD *)(v5 + 4) = v3;
  *v6 = 0;
  *(_DWORD *)(v5 + 8) &= ~1u;
  v3[2] &= 0xFFFFFFF5;
}
