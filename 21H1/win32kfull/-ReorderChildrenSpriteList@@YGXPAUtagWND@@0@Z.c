/*
 * XREFs of ?ReorderChildrenSpriteList@@YGXPAUtagWND@@0@Z @ 0x23494
 * Callers:
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40 (-GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     _GreZorderSprite@16 @ 0x244DA (_GreZorderSprite@16.c)
 */

void __fastcall ReorderChildrenSpriteList(struct tagWND *a1, struct tagWND *a2)
{
  struct tagWND *v2; // eax
  struct tagWND *v4; // esi
  struct tagWND *NextLayeredWindow; // eax
  int v6; // ebx
  int v7; // eax

  v2 = (struct tagWND *)*((_DWORD *)a1 + 15);
  if ( v2 )
  {
    do
    {
      v4 = v2;
      v2 = (struct tagWND *)*((_DWORD *)v2 + 15);
    }
    while ( v2 );
    if ( v4 != a1 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)v4 + 5) + 18) & 8) != 0 )
        goto LABEL_8;
      while ( 1 )
      {
        NextLayeredWindow = GetNextLayeredWindow(v4);
        v4 = NextLayeredWindow;
        if ( !NextLayeredWindow || NextLayeredWindow == a2 )
          break;
LABEL_8:
        if ( a2 )
          v6 = *(_DWORD *)a2;
        else
          v6 = 0;
        v7 = IsWindowDesktopComposed(v4);
        GreZorderSprite(*(_DWORD *)(_gpDispInfo + 20), *(_DWORD *)v4, v6, v7);
      }
    }
  }
}
