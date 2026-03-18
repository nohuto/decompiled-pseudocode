/*
 * XREFs of ?bEnumStartLine@XCLIPOBJ@@QAEHK@Z @ 0x237B25
 * Callers:
 *     ?bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z @ 0x2236A0 (-bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z.c)
 * Callees:
 *     ?vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z @ 0x238459 (-vUnflip@DDA_CLIPLINE@@QBEXPAJ0@Z.c)
 *     ?vUpdateStyleState@XCLIPOBJ@@QAEXXZ @ 0x238683 (-vUpdateStyleState@XCLIPOBJ@@QAEXXZ.c)
 *     ?bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z @ 0x24939F (-bInit@DDA_CLIPLINE@@QAEHPAU_POINTFIX@@0@Z.c)
 */

int __thiscall XCLIPOBJ::bEnumStartLine(XCLIPOBJ *this, unsigned int a2)
{
  int result; // eax
  _DWORD *v4; // ecx
  int v5; // ecx
  int v6; // eax

  *(_DWORD *)(*((_DWORD *)this + 30) + 16) = a2 | *(_DWORD *)(*((_DWORD *)this + 30) + 16) & 0x200000;
  result = DDA_CLIPLINE::bInit(
             (DDA_CLIPLINE *)(*((_DWORD *)this + 30) + 48),
             (struct _POINTFIX *)(*((_DWORD *)this + 30) + 4),
             *(struct _POINTFIX **)(*((_DWORD *)this + 30) + 12));
  v4 = (_DWORD *)*((_DWORD *)this + 30);
  if ( result )
  {
    v4[24] = v4[20];
    *(_DWORD *)(*((_DWORD *)this + 30) + 100) = *(_DWORD *)(*((_DWORD *)this + 30) + 84);
    *(_DWORD *)(*((_DWORD *)this + 30) + 104) = *(_DWORD *)(*((_DWORD *)this + 30) + 88);
    *(_DWORD *)(*((_DWORD *)this + 30) + 108) = *(_DWORD *)(*((_DWORD *)this + 30) + 92);
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_DWORD *)this + 30) + 48),
      (int *)(*((_DWORD *)this + 30) + 96),
      (int *)(*((_DWORD *)this + 30) + 100));
    DDA_CLIPLINE::vUnflip(
      (DDA_CLIPLINE *)(*((_DWORD *)this + 30) + 48),
      (int *)(*((_DWORD *)this + 30) + 104),
      (int *)(*((_DWORD *)this + 30) + 108));
    v5 = *((_DWORD *)this + 30);
    if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
    {
      *(_DWORD *)(v5 + 184) = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(v5 + 188) = *(_DWORD *)(v5 + 8);
      v5 = *((_DWORD *)this + 30);
    }
    if ( *(int *)(v5 + 164) > 0 )
    {
      *(_DWORD *)(v5 + 156) = *(_DWORD *)(v5 + 160);
      v6 = *((_DWORD *)this + 30);
      if ( (*(_BYTE *)(v6 + 16) & 4) != 0 )
        *(_DWORD *)(v6 + 156) = 0;
      XCLIPOBJ::vUpdateStyleState(this);
    }
    return 1;
  }
  else
  {
    v4[4] |= 0x10000u;
  }
  return result;
}
