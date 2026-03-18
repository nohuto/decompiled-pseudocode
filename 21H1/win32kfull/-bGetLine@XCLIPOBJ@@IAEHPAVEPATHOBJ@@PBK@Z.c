/*
 * XREFs of ?bGetLine@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PBK@Z @ 0x2236A0
 * Callers:
 *     ?bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z @ 0x22360C (-bEnumPath@XCLIPOBJ@@QAEHPAU_PATHOBJ@@KPAU_CLIPLINE@@H@Z.c)
 *     ?vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z @ 0x22389D (-vEnumPathStart@XCLIPOBJ@@QAEXPAU_PATHOBJ@@PAVSURFACE@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     ?bGetMorePoints@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PAK@Z @ 0x22376E (-bGetMorePoints@XCLIPOBJ@@IAEHPAVEPATHOBJ@@PAK@Z.c)
 *     ?bEnumStartLine@XCLIPOBJ@@QAEHK@Z @ 0x237B25 (-bEnumStartLine@XCLIPOBJ@@QAEHK@Z.c)
 */

int __thiscall XCLIPOBJ::bGetLine(XCLIPOBJ *this, struct EPATHOBJ *a2, const unsigned int *a3)
{
  int v3; // edi
  _DWORD *v5; // ecx
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  unsigned int v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v9 = 0;
  while ( 1 )
  {
    v8 = (_DWORD *)*((_DWORD *)this + 30);
    if ( (v8[4] & 0x2000000) != 0 )
      break;
    if ( *v8 <= 1u )
    {
      if ( (v8[4] & 8) != 0 )
      {
        v7 = (_DWORD *)v8[3];
        v8[1] = *v7;
        v8[2] = v7[1];
        *(_DWORD *)(*((_DWORD *)this + 30) + 12) = *((_DWORD *)this + 30) + 184;
        if ( XCLIPOBJ::bEnumStartLine(this, 0x100000u) && !v3 )
          return 1;
      }
      else
      {
        if ( !XCLIPOBJ::bGetMorePoints(this, a2, &v9) )
          return 0;
        if ( XCLIPOBJ::bEnumStartLine(this, v9 | v3) )
          return 1;
        v3 |= *(_DWORD *)(*((_DWORD *)this + 30) + 16) & 5;
      }
    }
    else
    {
      v5 = (_DWORD *)v8[3];
      v8[1] = *v5;
      v8[2] = v5[1];
      *(_DWORD *)(*((_DWORD *)this + 30) + 12) += 8;
      --**((_DWORD **)this + 30);
      if ( XCLIPOBJ::bEnumStartLine(this, v3 | *(_DWORD *)(*((_DWORD *)this + 30) + 16) & 8) )
        return 1;
    }
  }
  return 0;
}
