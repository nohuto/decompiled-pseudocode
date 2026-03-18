/*
 * XREFs of ?HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z @ 0x97850
 * Callers:
 *     _SetWindowGroupBand@12 @ 0x97764 (_SetWindowGroupBand@12.c)
 *     ?HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z @ 0x97850 (-HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z.c)
 * Callees:
 *     ?HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z @ 0x97850 (-HasOwnedWindowInTree@@YGHPAUtagWND@@0@Z.c)
 *     ?IsOwnee@@YGHPAUtagWND@@0@Z @ 0x97884 (-IsOwnee@@YGHPAUtagWND@@0@Z.c)
 */

int __thiscall HasOwnedWindowInTree(_DWORD *this)
{
  int i; // esi
  struct tagWND *v4; // [esp+0h] [ebp-8h]
  struct tagWND *v5; // [esp+0h] [ebp-8h]
  struct tagWND *v6; // [esp+4h] [ebp-4h]
  struct tagWND *v7; // [esp+4h] [ebp-4h]

  if ( IsOwnee(v4, v6) )
    return 1;
  for ( i = this[15]; i; i = *(_DWORD *)(i + 48) )
  {
    if ( HasOwnedWindowInTree(v5, v7) )
      return 1;
  }
  return 0;
}
