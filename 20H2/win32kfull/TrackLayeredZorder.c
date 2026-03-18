/*
 * XREFs of TrackLayeredZorder @ 0x1C009153C
 * Callers:
 *     LinkWindow @ 0x1C0046760 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C6608 (xxxSetLayeredWindow.c)
 * Callees:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C00915C4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00919A8 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     GreZorderSprite @ 0x1C0096E3C (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3);
  ReorderChildrenSpriteList(a1, a1);
}
