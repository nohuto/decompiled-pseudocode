/*
 * XREFs of __ScrollDC@28 @ 0x3267A
 * Callers:
 *     _NtUserScrollDC@28 @ 0x324DC (_NtUserScrollDC@28.c)
 *     ?xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z @ 0x15C9B3 (-xxxPaintIconsInSwitchWindow@@YGXPAUtagWND@@PAUtagSwitchWndInfo@@PAUHDC__@@HHHHHPAUtagCURSOR@@@Z.c)
 * Callees:
 *     _FastWindowFromDC@4 @ 0x325E2 (_FastWindowFromDC@4.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     _UnionRect@12 @ 0x982E2 (_UnionRect@12.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 */

BOOL __fastcall _ScrollDC(void *a1, struct tagWND *a2, HDC a3, int *a4, int a5, struct tagRECT *a6, HRGN a7)
{
  struct tagRECT *v7; // esi
  int v8; // eax
  int v9; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // eax
  char **v15; // esi
  struct tagRECT *v16; // [esp+0h] [ebp-40h]
  int v17; // [esp+4h] [ebp-3Ch]
  int v19; // [esp+14h] [ebp-2Ch]
  BOOL v20; // [esp+1Ch] [ebp-24h]
  int v21; // [esp+20h] [ebp-20h] BYREF
  int v22; // [esp+24h] [ebp-1Ch]
  int v23; // [esp+28h] [ebp-18h]
  int v24; // [esp+2Ch] [ebp-14h]
  char *v25; // [esp+30h] [ebp-10h] BYREF
  char *v26; // [esp+34h] [ebp-Ch]
  char *v27; // [esp+38h] [ebp-8h]
  char *v28; // [esp+3Ch] [ebp-4h]

  v7 = 0;
  v8 = FastWindowFromDC(a1);
  v9 = v8;
  v19 = v8;
  if ( v8 )
    v7 = *(_DWORD *)(*(_DWORD *)(v8 + 20) + 92) != 1 ? *(struct tagRECT **)(*(_DWORD *)(v8 + 20) + 92) : 0;
  v20 = InternalScrollDC(a2, a3, (int)a4, a5, v7, a6, a7, (HRGN)1, v16, v17) != 0;
  GreLockVisRgnSharedOrExclusive(*(_DWORD *)(_gpDispInfo + 20), 0);
  if ( v9 )
  {
    v11 = _gpDispInfo;
    if ( *(_DWORD *)(_gpDispInfo + 16) )
    {
      if ( a4 )
      {
        v12 = *(_DWORD *)(v9 + 20);
        v21 = *a4;
        v22 = a4[1];
        v23 = a4[2];
        v24 = a4[3];
        v13 = *(_DWORD *)(v12 + 72);
        v14 = *(_DWORD *)(v12 + 68);
        v21 += v14;
        v24 += v13;
        v22 += v13;
        v25 = (char *)a2 + v21;
        v27 = (char *)a2 + v14 + v23;
        v23 += v14;
        v28 = (char *)a3 + v24;
        v26 = (char *)a3 + v22;
        UnionRect(&v21);
        v9 = v19;
        v11 = _gpDispInfo;
      }
      else
      {
        v15 = (char **)(*(_DWORD *)(v9 + 20) + 68);
        v25 = *v15++;
        v26 = *v15++;
        v27 = *v15;
        v28 = v15[1];
      }
      GreUnlockVisRgn(*(_DWORD *)(v11 + 20));
      GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
      SpbCheckRect(v9, &v25, 0);
    }
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v20;
}
