/*
 * XREFs of _TrackLayeredZorder@4 @ 0x2343C
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _LinkWindow@12 @ 0x34D24 (_LinkWindow@12.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40 (-GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z @ 0x23494 (-ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z.c)
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 */

void __thiscall TrackLayeredZorder(_DWORD *this)
{
  struct tagWND *NextLayeredWindow; // eax
  int v3; // edi
  int v4; // eax
  struct tagWND *v5; // [esp+0h] [ebp-Ch]
  struct tagWND *v6; // [esp+4h] [ebp-8h]

  if ( IsDesktopWindow(this) && IsWindowDesktopComposed(this) )
    NextLayeredWindow = (struct tagWND *)this[15];
  else
    NextLayeredWindow = GetNextLayeredWindow(this);
  if ( NextLayeredWindow )
    v3 = *(_DWORD *)NextLayeredWindow;
  else
    v3 = 0;
  v4 = IsWindowDesktopComposed(this);
  GreZorderSprite(*(_DWORD *)(_gpDispInfo + 20), *this, v3, v4);
  ReorderChildrenSpriteList(v5, v6);
}
