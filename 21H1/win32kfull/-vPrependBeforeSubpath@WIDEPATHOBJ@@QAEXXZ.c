/*
 * XREFs of ?vPrependBeforeSubpath@WIDEPATHOBJ@@QAEXXZ @ 0x2373F3
 * Callers:
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

void __thiscall WIDEPATHOBJ::vPrependBeforeSubpath(WIDEPATHOBJ *this)
{
  int v2; // ebx
  _DWORD *v3; // esi
  _DWORD *i; // edx
  _DWORD *v5; // edi
  _DWORD *j; // ecx
  _DWORD *v7; // ebx

  v2 = *((_DWORD *)this + 2);
  v3 = *(_DWORD **)(v2 + 24);
  for ( i = v3; (i[2] & 1) == 0; i = (_DWORD *)i[1] )
    ;
  v5 = (_DWORD *)i[1];
  for ( j = v5; (j[2] & 1) == 0; j = (_DWORD *)j[1] )
    ;
  *(_DWORD *)(v2 + 24) = v5;
  v7 = (_DWORD *)j[1];
  if ( v7 )
    *v7 = i;
  else
    *(_DWORD *)(*((_DWORD *)this + 2) + 20) = i;
  i[1] = j[1];
  *v3 = j;
  j[1] = v3;
  *v5 = 0;
  j[2] &= ~1u;
  v3[2] &= 0xFFFFFFF5;
}
