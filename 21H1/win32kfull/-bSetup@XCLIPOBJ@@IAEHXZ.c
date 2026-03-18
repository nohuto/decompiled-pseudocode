/*
 * XREFs of ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bFindFirstScan@XCLIPOBJ@@IAEHXZ @ 0x237BFC (-bFindFirstScan@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IAEHXZ @ 0x237C98 (-bFindFirstSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IAEHXZ @ 0x237EBE (-bFindNextScan@XCLIPOBJ@@IAEHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IAEHXZ @ 0x237F2B (-bFindNextSegment@XCLIPOBJ@@IAEHXZ.c)
 *     ?bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z @ 0x237F88 (-bIntersectWall@XCLIPOBJ@@IAEHJPAU_POINTL@@0PAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IAEHAAJ@Z @ 0x237FC4 (-bRecordRun@XCLIPOBJ@@IAEHAAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z @ 0x23838E (-vIntersectScan@XCLIPOBJ@@IAEXJPAU_POINTL@@0PAJ@Z.c)
 *     ?vSetLeftToRight@XCLIPOBJ@@IAEXH@Z @ 0x23842A (-vSetLeftToRight@XCLIPOBJ@@IAEXH@Z.c)
 */

int __thiscall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // eax
  int v5; // ebx
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ebx
  int v10; // ecx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v14; // [esp+Ch] [ebp-10h] BYREF
  struct _POINTL v15; // [esp+14h] [ebp-8h] BYREF

  v2 = (_DWORD *)*((_DWORD *)this + 30);
  if ( ((unsigned int)&loc_20000 & v2[4]) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v2 + 6);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_33;
  }
  v2[36] = -1;
  XCLIPOBJ::vSetLeftToRight(this, *(_DWORD *)(*((_DWORD *)this + 30) + 96) <= *(_DWORD *)(*((_DWORD *)this + 30) + 104));
  v3 = (_DWORD *)*((_DWORD *)this + 30);
  if ( v3[25] <= v3[27] )
  {
    v3[4] |= 0x800000u;
    v3 = (_DWORD *)*((_DWORD *)this + 30);
  }
  v4 = v3[25];
  v5 = *((_DWORD *)this + 2);
  if ( v4 >= v5 || v3[27] >= v5 )
  {
    v6 = *((_DWORD *)this + 4);
    if ( v4 < v6 || v3[27] < v6 )
    {
      if ( (v3[4] & 0x800000) != 0 )
      {
        if ( v4 < v5 )
        {
          v15 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v5, 0, &v15, v3 + 36);
          *(struct _POINTL *)(*((_DWORD *)this + 30) + 96) = v15;
          v3 = (_DWORD *)*((_DWORD *)this + 30);
          v6 = *((_DWORD *)this + 4);
        }
        if ( v3[27] >= v6 )
        {
          v14 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v6, &v14, 0, &v15.y);
          *(struct _POINTL *)(*((_DWORD *)this + 30) + 104) = v14;
        }
      }
      else
      {
        if ( v3[27] < v5 )
        {
          v14 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v5, &v14, 0, &v15.y);
          *(struct _POINTL *)(*((_DWORD *)this + 30) + 104) = v14;
          v3 = (_DWORD *)*((_DWORD *)this + 30);
          v6 = *((_DWORD *)this + 4);
        }
        if ( v3[25] >= v6 )
        {
          v14 = 0LL;
          XCLIPOBJ::vIntersectScan(this, v6, 0, &v14, v3 + 36);
          *(struct _POINTL *)(*((_DWORD *)this + 30) + 96) = v14;
        }
      }
      v7 = (_DWORD *)*((_DWORD *)this + 30);
      v8 = *((_DWORD *)this + 1);
      v9 = v7[24];
      if ( v9 >= v8 || v7[26] >= v8 )
      {
        v10 = *((_DWORD *)this + 3);
        if ( v9 < v10 || v7[26] < v10 )
        {
          if ( (v7[4] & 0x400000) != 0 )
          {
            if ( v9 < v8 )
            {
              v14 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v8, 0, &v14, v7 + 36);
              *(struct _POINTL *)(*((_DWORD *)this + 30) + 96) = v14;
              v7 = (_DWORD *)*((_DWORD *)this + 30);
              v10 = *((_DWORD *)this + 3);
            }
            if ( v7[26] >= v10 )
            {
              v14 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v10, &v14, 0, &v15.y);
              *(struct _POINTL *)(*((_DWORD *)this + 30) + 104) = v14;
            }
          }
          else
          {
            if ( v7[26] < v8 )
            {
              v14 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v8, &v14, 0, &v15.y);
              *(struct _POINTL *)(*((_DWORD *)this + 30) + 104) = v14;
              v7 = (_DWORD *)*((_DWORD *)this + 30);
              v10 = *((_DWORD *)this + 3);
            }
            if ( v7[24] >= v10 )
            {
              v14 = 0LL;
              XCLIPOBJ::bIntersectWall(this, v10, 0, &v14, v7 + 36);
              *(struct _POINTL *)(*((_DWORD *)this + 30) + 96) = v14;
            }
          }
          *(_DWORD *)(*((_DWORD *)this + 30) + 136) = *(_DWORD *)(*((_DWORD *)this + 30) + 96);
          *(_DWORD *)(*((_DWORD *)this + 30) + 140) = *(_DWORD *)(*((_DWORD *)this + 30) + 100);
          *(_DWORD *)(*((_DWORD *)this + 30) + 16) |= (unsigned int)&loc_20000;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_33:
            if ( NextSegment )
              return 1;
          }
        }
      }
    }
  }
  return 0;
}
