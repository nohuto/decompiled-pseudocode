/*
 * XREFs of _GetLayeredOrRedirectedParent@4 @ 0x2D54A
 * Callers:
 *     ?SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z @ 0x2D4D2 (-SwpCalcVisRgn@@YGHPAUtagWND@@PAUHRGN__@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__stdcall GetLayeredOrRedirectedParent(_DWORD *a1)
{
  _DWORD *v1; // ecx
  int v3; // eax
  _DWORD *v4; // edx
  int v5; // eax

  v1 = a1;
  if ( a1 )
  {
    do
    {
      if ( (*(_DWORD *)(v1[5] + 16) & 0x20080000) != 0 )
        break;
      v1 = (_DWORD *)v1[14];
    }
    while ( v1 );
    if ( v1 && v1 != a1 )
    {
      v3 = v1[3];
      v4 = 0;
      if ( v3 )
      {
        v5 = *(_DWORD *)(v3 + 4);
        if ( v5 )
          v4 = *(_DWORD **)(v5 + 12);
      }
      return v4 != v1 ? v1 : 0;
    }
  }
  return v1;
}
