/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00919A8
 * Callers:
 *     TrackLayeredZorder @ 0x1C009153C (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00915C4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0091C10 (IsMessageParentWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0091C30 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetNextLayeredWindow(struct tagWND *a1)
{
  struct tagWND *NextLayeredWindowSubtree; // r10
  struct tagWND *v2; // r9
  __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // r9

  NextLayeredWindowSubtree = 0LL;
  v2 = a1;
  if ( a1 )
  {
    while ( !(unsigned int)IsDesktopWindow(v2) && !(unsigned int)IsMessageParentWindow() )
    {
      if ( v3 != v4 && (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 8) != 0 )
        return (struct tagWND *)v3;
      NextLayeredWindowSubtree = GetNextLayeredWindowSubtree(*(struct tagWND **)(v3 + 88));
      if ( !NextLayeredWindowSubtree )
      {
        v2 = *(struct tagWND **)(v5 + 104);
        if ( v2 )
          continue;
      }
      return NextLayeredWindowSubtree;
    }
  }
  return NextLayeredWindowSubtree;
}
