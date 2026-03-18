/*
 * XREFs of _xxxSetWindowPlacement@8 @ 0xB2DF4
 * Callers:
 *     _NtUserSetWindowPlacement@8 @ 0xB2D14 (_NtUserSetWindowPlacement@8.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _WPUpdateCheckPointSettings@8 @ 0xB274C (_WPUpdateCheckPointSettings@8.c)
 *     ?CheckPlacementBounds@@YGXPAUtagRECT@@PAUtagPOINT@@1PAUtagMONITOR@@@Z @ 0xB277C (-CheckPlacementBounds@@YGXPAUtagRECT@@PAUtagPOINT@@1PAUtagMONITOR@@@Z.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z @ 0xF505E (-_ShowWindowAsync@@YGHPAUtagWND@@W4QEVENT_SHOWINDOW_MESSAGE_ID@@HI@Z.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

int __fastcall xxxSetWindowPlacement(_DWORD *a1, LONG a2)
{
  PKTHREAD CurrentThread; // eax
  PKTHREAD v4; // eax
  unsigned int v5; // esi
  int v6; // edi
  int *MonitorWorkRect; // eax
  LONG right; // esi
  int v9; // ecx
  LONG v10; // ecx
  int *MonitorRect; // eax
  _DWORD *updated; // eax
  _DWORD *v13; // ecx
  unsigned int v14; // ecx
  int v15; // edx
  unsigned int v16; // edx
  int v17; // edx
  int v18; // edi
  char v19; // al
  int v20; // esi
  LONG v21; // edi
  int v23; // edi
  int v24; // eax
  int v25; // eax
  struct tagPOINT *v26; // [esp+0h] [ebp-78h]
  struct tagMONITOR *v27; // [esp+4h] [ebp-74h]
  struct tagPOINT *v28; // [esp+Ch] [ebp-6Ch]
  int v29; // [esp+10h] [ebp-68h] BYREF
  int v30; // [esp+14h] [ebp-64h]
  struct tagRECT v31; // [esp+18h] [ebp-60h] BYREF
  BOOL v32; // [esp+28h] [ebp-50h]
  int v33; // [esp+2Ch] [ebp-4Ch]
  int v34; // [esp+30h] [ebp-48h]
  int v35; // [esp+34h] [ebp-44h]
  int v36; // [esp+38h] [ebp-40h]
  int v37; // [esp+3Ch] [ebp-3Ch]
  int v38; // [esp+40h] [ebp-38h] BYREF
  int v39; // [esp+44h] [ebp-34h]
  int v40; // [esp+48h] [ebp-30h]
  int v41; // [esp+4Ch] [ebp-2Ch]
  _BYTE v42[20]; // [esp+50h] [ebp-28h] BYREF
  int v43; // [esp+64h] [ebp-14h] BYREF
  int v44; // [esp+68h] [ebp-10h]
  int v45; // [esp+6Ch] [ebp-Ch]
  int v46; // [esp+70h] [ebp-8h]

  v31.right = a2;
  v34 = 0;
  v28 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v32 = a1
     && (CurrentThread = KeGetCurrentThread(),
         (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) == 0)
     && (v4 = KeGetCurrentThread(), (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v4) + 260) + 148) & 0x20) == 0)
     && ((v5 = *(_DWORD *)(a1[5] + 184),
          (((v5 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8)) & 0x1FF) != 0)
      || ((*(_DWORD *)(a1[5] + 184) & 0xF) == 2 && (*(_DWORD *)(a1[5] + 184) & 0x20000000) != 0 ? (v23 = 1) : (v23 = 0),
          (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
       && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0
        ? (v24 = 1)
        : (v24 = 0),
          v23 != v24));
  v43 = *(_DWORD *)(v31.right + 28);
  v44 = *(_DWORD *)(v31.right + 32);
  v45 = *(_DWORD *)(v31.right + 36);
  v46 = *(_DWORD *)(v31.right + 40);
  v6 = a1[14];
  if ( v6 == _GetDesktopWindow(a1) )
  {
    v28 = (struct tagPOINT *)_MonitorFromRect(&v43, 1, 0);
    MonitorWorkRect = (int *)GetMonitorWorkRect(&v38);
    v34 = *MonitorWorkRect;
    v35 = MonitorWorkRect[1];
    v36 = MonitorWorkRect[2];
    v37 = MonitorWorkRect[3];
    v6 = a1[14];
  }
  right = v31.right;
  v9 = *(_DWORD *)(v31.right + 16);
  v29 = *(_DWORD *)(v31.right + 12);
  v30 = v9;
  v31.bottom = v29 != -1 && v9 != -1;
  v10 = *(_DWORD *)(v31.right + 24);
  v31.left = *(_DWORD *)(v31.right + 20);
  v31.top = v10;
  if ( v31.left == -1 || v10 == -1 )
    v33 = 0;
  else
    v33 = 64;
  if ( v6 == _GetDesktopWindow(a1) && *(char *)(a1[5] + 16) >= 0 )
  {
    MonitorRect = (int *)GetMonitorRect(v42);
    v38 = *MonitorRect;
    v39 = MonitorRect[1];
    v40 = MonitorRect[2];
    v41 = MonitorRect[3];
    v43 += v34 - v38;
    v45 += v34 - v38;
    v46 += v35 - v39;
    v44 += v35 - v39;
    if ( v31.bottom )
    {
      v29 += v34 - v38;
      v30 += v35 - v39;
    }
    CheckPlacementBounds(&v29, &v43, &v31, v28, v26, v27);
    right = v31.right;
  }
  if ( v32 )
    TransformRectBetweenCoordinateSpaces(&v43, &v43, a1, 0);
  updated = (_DWORD *)UpdateCheckpoint(a1);
  v13 = updated;
  if ( updated )
  {
    *updated = v43;
    updated[1] = v44;
    updated[2] = v45;
    updated[3] = v46;
    right = v31.right;
    updated[8] = v29;
    updated[9] = v30;
    v14 = (32 * v31.bottom) | updated[12] & 0xFFFFFFDF;
    updated[12] = v14;
    v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)*(_DWORD *)(right + 4)) & 1;
    v13 = updated;
    updated[12] = v15;
    v16 = v33 | v15 & 0xFFFFFFBF;
    updated[10] = v31.left;
    updated[11] = v31.top;
    updated[12] = v16 & 0xFFFFFFFD;
  }
  v17 = a1[5];
  v18 = ((*(_DWORD *)(right + 4) & 4) << 12) | 0x14;
  v19 = *(_BYTE *)(v17 + 23);
  if ( (v19 & 0x20) != 0 )
  {
    if ( v13 && (v13[12] & 1) == 0 )
      goto LABEL_25;
    v20 = 0;
    if ( v31.bottom )
    {
      if ( v32 )
        TransformPointBetweenCoordinateSpaces(&v29, &v29, a1, 0);
      xxxSetWindowPos((int)a1, 0, v29, v30, 0, 0, v18 | 1);
    }
  }
  else
  {
    if ( (v19 & 1) == 0 )
    {
      xxxSetWindowPos((int)a1, 0, v43, v44, v45 - v43, v46 - v44, ((*(_DWORD *)(right + 4) & 4) << 12) | 0x14);
LABEL_25:
      v20 = 0;
      goto LABEL_26;
    }
    if ( !v13 )
      goto LABEL_25;
    v25 = v13[12];
    if ( (*(_BYTE *)(v17 + 11) & 0x40) != 0 )
    {
      v25 &= ~0x40u;
      v13[12] = v25;
    }
    if ( (v25 & 0x40) == 0 )
      goto LABEL_25;
    if ( a1[14] == _GetDesktopWindow(a1) )
    {
      v31.left += v34;
      v31.top += v35;
    }
    v20 = 0;
    if ( v32 )
      TransformPointBetweenCoordinateSpaces(&v31, &v31, a1, 0);
    xxxSetWindowPos((int)a1, 0, v31.left, v31.top, 0, 0, v18 | 1);
  }
LABEL_26:
  v21 = v31.right;
  v33 = *(_DWORD *)(v31.right + 4);
  if ( (v33 & 4) == 0 || *(_DWORD *)(a1[2] + 236) == *(_DWORD *)(_gptiCurrent + 236) )
  {
    xxxShowWindow((struct tagWND *)v26, (unsigned int)v27);
  }
  else
  {
    v20 = 1;
    _ShowWindowAsync(a1, 0, *(_DWORD *)(v31.right + 8), v33);
  }
  if ( (*(_BYTE *)(a1[5] + 23) & 0x20) != 0 && !v20 )
    WPUpdateCheckPointSettings((int)a1, *(_DWORD *)(v21 + 4));
  return 1;
}
