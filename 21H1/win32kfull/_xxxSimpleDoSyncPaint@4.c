/*
 * XREFs of _xxxSimpleDoSyncPaint@4 @ 0xA4A1C
 * Callers:
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     ?xxxUpdateWindow2@@YGXPAUtagWND@@K@Z @ 0x7D46A (-xxxUpdateWindow2@@YGXPAUtagWND@@K@Z.c)
 *     _xxxGetUpdateRect@12 @ 0xA5AFE (_xxxGetUpdateRect@12.c)
 *     _xxxGetUpdateRgn@12 @ 0xC3C20 (_xxxGetUpdateRgn@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     ?GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z @ 0x73A88 (-GetNCUpdateRgn@@YGPAUHRGN__@@PAUtagWND@@H@Z.c)
 *     _xxxSendEraseBkgnd@12 @ 0x73B52 (_xxxSendEraseBkgnd@12.c)
 *     ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0 (-xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z.c)
 *     _xxxRedrawHungWindow@8 @ 0xCC8B8 (_xxxRedrawHungWindow@8.c)
 */

char __thiscall xxxSimpleDoSyncPaint(struct tagVWPL **this)
{
  int StyleWindow; // eax
  struct tagVWPL *v3; // ecx
  int v4; // ebx
  unsigned int NCUpdateRgn; // eax
  unsigned int v6; // edi
  struct tagVWPL *v7; // eax

  StyleWindow = GetStyleWindow((int)this, 2818);
  if ( !StyleWindow )
  {
    SetOrClrWF(0, (int)this, 0x240u, 1);
    v3 = this[5];
    LOBYTE(StyleWindow) = *((_BYTE *)v3 + 9);
    v4 = ((unsigned __int8)StyleWindow >> 2) & 2;
    if ( (StyleWindow & 2) != 0 )
      v4 |= 1u;
    if ( v4 )
    {
      if ( (*((_BYTE *)v3 + 23) & 0x10) != 0 )
      {
        if ( !*((_DWORD *)v3 + 23) )
        {
          SetOrClrWF(0, (int)this, 0x102u, 1);
          SetOrClrWF(0, (int)this, 0x104u, 1);
          LOBYTE(v4) = v4 & 0xFE;
        }
        if ( this[2] == (struct tagVWPL *)_gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((int)this, 1);
          v6 = NCUpdateRgn;
          if ( (v4 & 2) != 0 && (*((_BYTE *)this[5] + 9) & 8) != 0 )
            xxxSendNCPaint(this, NCUpdateRgn);
          if ( (v4 & 1) != 0 )
          {
            v7 = this[5];
            if ( (*((_BYTE *)v7 + 9) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v6);
              v6 = GetNCUpdateRgn((int)this, 0);
              v7 = this[5];
            }
            if ( (*((_BYTE *)v7 + 9) & 2) != 0 )
            {
              SetOrClrWF(0, (int)this, 0x102u, 1);
              SetOrClrWF(0, (int)this, 0x104u, 1);
              xxxSendEraseBkgnd(this, 0, v6);
            }
            ClearHungFlag(this, 0x308u);
          }
          LOBYTE(StyleWindow) = DeleteMaybeSpecialRgn(v6);
        }
        else
        {
          LOBYTE(StyleWindow) = *((_BYTE *)this[5] + 23) & 0xC0;
          if ( (_BYTE)StyleWindow != 64 )
          {
            StyleWindow = *(_DWORD *)(_grpdeskRitInput + 4);
            if ( this != *(struct tagVWPL ***)(StyleWindow + 12) )
            {
              StyleWindow = IsHungWindow((int)this);
              if ( StyleWindow )
              {
                StyleWindow = (int)this[5];
                if ( (*(_BYTE *)(StyleWindow + 11) & 8) != 0 )
                {
                  ClearHungFlag(this, 0x308u);
                  LOBYTE(StyleWindow) = xxxRedrawHungWindow(this, 0);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, (int)this, 0x108u, 1);
        SetOrClrWF(0, (int)this, 0x102u, 1);
        SetOrClrWF(0, (int)this, 0x680u, 1);
        SetOrClrWF(0, (int)this, 0x104u, 1);
        LOBYTE(StyleWindow) = (unsigned __int8)ClearHungFlag(this, 0x308u);
      }
    }
  }
  return StyleWindow;
}
