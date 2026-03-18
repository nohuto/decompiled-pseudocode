/*
 * XREFs of _NextOwnedWindow@12 @ 0x1C8E4
 * Callers:
 *     ?SetTopmost@@YGXPAUtagWND@@HH@Z @ 0x19066 (-SetTopmost@@YGXPAUtagWND@@HH@Z.c)
 *     ?AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z @ 0x1C4D6 (-AddSelfAndOwnees@@YGPAUtagSMWP@@PAU1@PAUtagWND@@11HI@Z.c)
 *     _zzzSetWindowCompositionCloak@12 @ 0x1C5F8 (_zzzSetWindowCompositionCloak@12.c)
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall NextOwnedWindow(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // edx
  bool i; // zf
  _DWORD *v7; // eax

  if ( a1 )
    goto LABEL_8;
  a1 = *(_DWORD **)(a3 + 60);
  if ( !a1 )
    return 0;
  do
  {
    v5 = (_DWORD *)a1[16];
    v7 = a1;
    for ( i = a1 == v5; !i; i = v5 == (_DWORD *)a1[14] )
    {
      v7 = v5;
      if ( !v5 )
        break;
      v5 = (_DWORD *)v5[14];
    }
    if ( a2 == v7 )
      break;
LABEL_8:
    a1 = (_DWORD *)a1[12];
  }
  while ( a1 );
  return a1;
}
