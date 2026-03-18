/*
 * XREFs of _xxxGetUpdateRect@12 @ 0xA5AFE
 * Callers:
 *     _NtUserGetUpdateRect@12 @ 0xA5990 (_NtUserGetUpdateRect@12.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _IntersectWithParents@8 @ 0x35AFC (_IntersectWithParents@8.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _GreTransformPoints@20 @ 0x8DA90 (_GreTransformPoints@20.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MirrorClientRect@8 @ 0x1B6E50 (_MirrorClientRect@8.c)
 */

int __fastcall xxxGetUpdateRect(int a1, struct _POINTL *a2, int a3)
{
  struct _POINTL *v3; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // eax
  int **i; // ecx
  struct _POINTL v16; // [esp+14h] [ebp-14h] BYREF
  LONG v17; // [esp+1Ch] [ebp-Ch]
  LONG v18; // [esp+20h] [ebp-8h]

  v3 = a2;
  v16.x = 0;
  v16.y = 0;
  v17 = 0;
  v18 = 0;
  if ( a3 )
    xxxSimpleDoSyncPaint((struct tagVWPL **)a1);
  SetOrClrWF(0, a1, 0x120u, 1);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(v5 + 92);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v16 = *(struct _POINTL *)(v5 + 68);
      v17 = *(_DWORD *)(v5 + 76);
      v18 = *(_DWORD *)(v5 + 80);
      v3 = a2;
    }
    else
    {
      if ( GreGetRgnBox(v6, &v16) <= 1u )
      {
        v16.x = 0;
        v16.y = 0;
        v17 = 0;
        v18 = 0;
      }
      IntersectRect(&v16, &v16.x, (int *)(*(_DWORD *)(a1 + 20) + 68));
    }
    if ( IntersectWithParents(a1, (int)&v16) )
    {
      if ( a1 != _GetDesktopWindow((_DWORD *)a1) )
      {
        v7 = *(_DWORD *)(a1 + 20);
        v8 = *(_DWORD *)(v7 + 72);
        v9 = *(_DWORD *)(v7 + 68);
        v10 = -v8;
        v18 += v10;
        v11 = -v9;
        v16.x += v11;
        v17 += v11;
        v16.y += v10;
      }
      if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 76) + 4) + 8) & 0x20) != 0 )
      {
        v13 = *(_DWORD *)(a1 + 20);
        if ( (*(_BYTE *)(v13 + 13) & 1) != 0 || *(_DWORD *)(v13 + 92) != 1 )
        {
          GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
          for ( i = *(int ***)(_gpDispInfo + 12); i; i = (int **)*i )
          {
            if ( i[2] == (int *)a1 && ((_BYTE)i[8] & 2) == 0 )
            {
              GreTransformPoints((int)i[1], &v16, &v16, 2, 0);
              break;
            }
          }
          GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
        }
      }
    }
    else
    {
      v16.x = 0;
      v16.y = 0;
      v17 = 0;
      v18 = 0;
    }
    if ( v3 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 0x40) != 0 )
        MirrorClientRect(a1);
      *a2 = v16;
      a2[1].x = v17;
      a2[1].y = v18;
    }
    return 1;
  }
  else
  {
    if ( v3 )
    {
      v3->x = 0;
      v3->y = 0;
      v3[1].x = 0;
      v3[1].y = 0;
    }
    return 0;
  }
}
