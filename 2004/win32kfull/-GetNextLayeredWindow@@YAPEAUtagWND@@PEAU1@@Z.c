/*
 * XREFs of ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020C78
 * Callers:
 *     TrackLayeredZorder @ 0x1C001EFD4 (TrackLayeredZorder.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F05C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     IsMessageParentWindow @ 0x1C0020EE0 (IsMessageParentWindow.c)
 *     ?GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020F00 (-GetNextLayeredWindowSubtree@@YAPEAUtagWND@@PEAU1@@Z.c)
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
