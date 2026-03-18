/*
 * XREFs of ?IsOwnee@@YGHPAUtagWND@@0@Z @ 0x97884
 * Callers:
 *     ?ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z @ 0x32B6C (-ZOrderByOwner2@@YGPAUtagSMWP@@PAU1@H@Z.c)
 *     ?HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z @ 0x97850 (-HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall IsOwnee(int a1, int a2)
{
  int v2; // esi
  int v3; // eax

  v2 = a1;
  if ( !a1 )
    return 0;
  while ( 1 )
  {
    v3 = v2;
    if ( v2 )
      break;
LABEL_5:
    v2 = v2 != *(_DWORD *)(v2 + 64) ? *(_DWORD *)(v2 + 64) : 0;
    if ( !v2 )
      return 0;
  }
  while ( v3 != a2 )
  {
    v3 = *(_DWORD *)(v3 + 56);
    if ( !v3 )
      goto LABEL_5;
  }
  return 1;
}
