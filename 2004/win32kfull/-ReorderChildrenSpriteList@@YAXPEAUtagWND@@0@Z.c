/*
 * XREFs of ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F05C
 * Callers:
 *     TrackLayeredZorder @ 0x1C001EFD4 (TrackLayeredZorder.c)
 *     zzzComposeDesktop @ 0x1C004AD48 (zzzComposeDesktop.c)
 * Callees:
 *     GreZorderSprite @ 0x1C001F8D0 (GreZorderSprite.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0020C78 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, HWND *a2)
{
  __int64 v2; // rax
  struct tagWND *v4; // rbx
  struct tagWND *NextLayeredWindow; // rax
  HWND v6; // rsi

  v2 = *((_QWORD *)a1 + 14);
  if ( v2 )
  {
    do
    {
      v4 = (struct tagWND *)v2;
      v2 = *(_QWORD *)(v2 + 112);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)v4 + 5) + 26LL) & 8) != 0 )
      {
        if ( !a2 )
          goto LABEL_13;
        v6 = *a2;
        goto LABEL_10;
      }
      while ( 1 )
      {
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == (struct tagWND *)a2 )
          break;
        if ( a2 )
          v6 = *a2;
        else
LABEL_13:
          v6 = 0LL;
LABEL_10:
        IsWindowDesktopComposed(v4);
        GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)v4, v6);
      }
    }
  }
}
