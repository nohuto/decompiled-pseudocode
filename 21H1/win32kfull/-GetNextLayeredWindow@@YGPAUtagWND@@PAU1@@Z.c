/*
 * XREFs of ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40
 * Callers:
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     ?ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z @ 0x23494 (-ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z.c)
 * Callees:
 *     _IsMessageParentWindow@4 @ 0x21F92 (_IsMessageParentWindow@4.c)
 *     ?GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z @ 0x21FA6 (-GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 */

struct tagWND *__thiscall GetNextLayeredWindow(_DWORD *this)
{
  struct tagWND *NextLayeredWindowSubtree; // edi
  _DWORD *v3; // esi
  struct tagWND *v5; // [esp+0h] [ebp-Ch]

  NextLayeredWindowSubtree = 0;
  v3 = this;
  if ( this )
  {
    while ( !IsDesktopWindow(v3) && !IsMessageParentWindow() )
    {
      if ( v3 != this && (*(_BYTE *)(v3[5] + 18) & 8) != 0 )
        return (struct tagWND *)v3;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(v5);
      if ( !NextLayeredWindowSubtree )
      {
        v3 = (_DWORD *)v3[14];
        if ( v3 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
