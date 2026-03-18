/*
 * XREFs of ?bDiagonalizeSubPath@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2281CA
 * Callers:
 *     ?bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z @ 0x228189 (-bDiagonalizePath@RTP_PATHMEMOBJ@@QAEHPAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?bFetchNextPoint@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2283B6 (-bFetchNextPoint@RTP_PATHMEMOBJ@@AAEHXZ.c)
 *     ?bWritePoint@RTP_PATHMEMOBJ@@AAEHXZ @ 0x2284B8 (-bWritePoint@RTP_PATHMEMOBJ@@AAEHXZ.c)
 */

int __thiscall RTP_PATHMEMOBJ::bDiagonalizeSubPath(RTP_PATHMEMOBJ *this)
{
  int v2; // edi
  int v3; // edi
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // [esp+Ch] [ebp-10h]
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]

  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 31) = 0;
  if ( !RTP_PATHMEMOBJ::bFetchNextPoint(this)
    || !RTP_PATHMEMOBJ::bFetchNextPoint(this)
    || !RTP_PATHMEMOBJ::bFetchNextPoint(this) )
  {
    return 0;
  }
  v2 = *((_DWORD *)this + 38);
  if ( *((_DWORD *)this + 40) == v2 )
  {
    v3 = v2 - *((_DWORD *)this + 36);
    v13 = 1;
  }
  else
  {
    v3 = *((_DWORD *)this + 37) - *((_DWORD *)this + 35);
    v13 = 0;
  }
  result = EPATHOBJ::bMoveTo(*((EPATHOBJ **)this + 23), 0, (struct _POINTL *)((char *)this + 140));
  v5 = 1;
  v6 = 2;
  v14 = 2;
  if ( result )
  {
    v7 = 0;
    v15 = 0;
    while ( 1 )
    {
      if ( (*((_BYTE *)this + 4 * v7 + 128) & 1) != 0 )
        return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 23), 0, (struct _POINTL *)((char *)this + 100), 2u)
            && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 23));
      if ( v13 )
      {
        v12 = *((_DWORD *)this + 2 * v6 + 35) - *((_DWORD *)this + 2 * v5 + 35);
        if ( v3 <= 0 || v3 != 16 && *((_DWORD *)this + 2 * v6 + 35) - *((_DWORD *)this + 2 * v5 + 35) != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v13 ^= 1u;
LABEL_29:
          v11 = v15;
          v3 = v12;
          v15 = v5;
          v5 = v14;
          v14 = v11;
          goto LABEL_30;
        }
        if ( (*((_BYTE *)this + 4 * v5 + 128) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 23), 0, (struct _POINTL *)((char *)this + 100), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 23));
        if ( !RTP_PATHMEMOBJ::bFetchNextPoint(this) || !RTP_PATHMEMOBJ::bFetchNextPoint(this) )
          return 0;
        v8 = v14;
        v14 = v5;
        v5 = v15;
        v15 = v8;
        v3 = *((_DWORD *)this + 2 * v5 + 36) - *((_DWORD *)this + 2 * v8 + 36);
      }
      else
      {
        v9 = *((_DWORD *)this + 2 * v6 + 36) - *((_DWORD *)this + 2 * v5 + 36);
        v12 = v9;
        if ( v9 >= 0 || v3 != 16 && v9 != -16 )
        {
          result = RTP_PATHMEMOBJ::bFetchNextPoint(this);
          if ( !result )
            return result;
          v13 = 1;
          goto LABEL_29;
        }
        if ( (*((_BYTE *)this + 4 * v5 + 128) & 1) != 0 )
          return EPATHOBJ::bPolyLineTo(*((EPATHOBJ **)this + 23), 0, (struct _POINTL *)((char *)this + 100), 2u)
              && EPATHOBJ::bCloseFigure(*((EPATHOBJ **)this + 23));
        if ( !RTP_PATHMEMOBJ::bFetchNextPoint(this) || !RTP_PATHMEMOBJ::bFetchNextPoint(this) )
          return 0;
        v10 = v14;
        v14 = v5;
        v5 = v15;
        v15 = v10;
        v3 = *((_DWORD *)this + 2 * v5 + 35) - *((_DWORD *)this + 2 * v10 + 35);
      }
LABEL_30:
      result = RTP_PATHMEMOBJ::bWritePoint(this);
      if ( !result )
        return result;
      v7 = v15;
      v6 = v14;
    }
  }
  return result;
}
