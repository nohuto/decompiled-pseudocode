/*
 * XREFs of ?WantImeWindow@@YGHPAUtagWND@@0@Z @ 0x2B47C
 * Callers:
 *     _zzzImeSetFutureOwner@8 @ 0x18ECA (_zzzImeSetFutureOwner@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 * Callees:
 *     <none>
 */

int __fastcall WantImeWindow(int a1, int a2)
{
  int v2; // eax
  int v3; // edx

  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x2000000) != 0 )
    return 0;
  if ( (*(_BYTE *)(*(_DWORD *)(a2 + 20) + 10) & 4) != 0 )
    return 0;
  v2 = *(_DWORD *)(a2 + 12);
  if ( !v2 )
    return 0;
  v3 = *(_DWORD *)(v2 + 20);
  if ( !v3 || (*(_BYTE *)(v3 + 32) & 4) != 0 )
    return 0;
  while ( a1 && v2 == *(_DWORD *)(a1 + 12) )
  {
    if ( a1 == *(_DWORD *)(v2 + 52) )
      return 0;
    a1 = *(_DWORD *)(a1 + 56);
  }
  return 1;
}
