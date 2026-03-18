/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0110D38
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0110BE0 (NtUserSetWindowPlacement.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C0026E38 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C002A6F0 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C002A734 (GetMonitorRect.c)
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0099F30 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00B029C (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C01110C4 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C0111284 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowPlacement(struct tagWND *a1, __int64 a2)
{
  struct tagMONITOR *v2; // r12
  int v5; // r15d
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  BOOL v12; // r14d
  __int64 DesktopWindow; // rax
  __int64 v14; // rdx
  struct tagPOINT v15; // rcx
  struct tagPOINT v16; // rax
  int v17; // ebx
  __int64 v18; // rax
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagPOINT *updated; // rax
  struct tagPOINT *v23; // r8
  unsigned int v24; // edx
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // ebx
  char v28; // al
  unsigned __int64 v29; // r9
  int v30; // ebx
  LONG x; // ecx
  __int64 v33; // r10
  struct tagQ *v34; // rdx
  struct tagPOINT v35; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v36; // [rsp+48h] [rbp-31h] BYREF
  __int128 v37; // [rsp+50h] [rbp-29h]
  __int128 v38; // [rsp+60h] [rbp-19h] BYREF
  __int128 v39; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v40; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v5 = 1;
  v12 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472) + 224LL) & 1) == 0 )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 472);
      if ( (*(_BYTE *)(v6 + 224) & 0x20) == 0 )
      {
        v7 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL);
        if ( (((unsigned __int16)(v7 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v6) >> 8)) & 0x1FF) != 0
          || ((v8 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2)
           && (v8 & 0x20000000) != 0
            ? (v9 = 1)
            : (v9 = 0),
              (W32GetCurrentThreadDpiAwarenessContext(v8) & 0xF) == 2
           && (W32GetCurrentThreadDpiAwarenessContext(v10) & 0x20000000) != 0
            ? (v11 = 1)
            : (v11 = 0),
              v9 != v11) )
        {
          v12 = 1;
        }
      }
    }
  }
  v40 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v14 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v40, 1LL, 0);
    v37 = *GetMonitorWorkRect(&v38, (__int64)v2);
  }
  v15 = *(struct tagPOINT *)(a2 + 12);
  v35 = v15;
  if ( v15.x == -1 || v15.y == -1 )
    v5 = 0;
  v16 = *(struct tagPOINT *)(a2 + 20);
  v36 = v16;
  if ( v16.x == -1 || v16.y == -1 )
    v17 = 0;
  else
    v17 = 64;
  v18 = GetDesktopWindow((__int64)a1);
  v19 = DWORD1(v37);
  if ( v20 == v18 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v21 = *(_QWORD *)GetMonitorRect(&v39, (__int64)v2);
    v40.bottom += DWORD1(v37) - HIDWORD(v21);
    v40.left += v37 - v21;
    v40.right += v37 - v21;
    v40.top += DWORD1(v37) - HIDWORD(v21);
    if ( v5 )
    {
      v35.x += v37 - v21;
      v35.y += DWORD1(v37) - HIDWORD(v21);
    }
    CheckPlacementBounds(&v40, &v35, &v36, v2);
  }
  if ( v12 )
    TransformRectBetweenCoordinateSpaces(&v40, &v40, a1, 0LL);
  updated = (struct tagPOINT *)UpdateCheckpoint((__int64)a1);
  v23 = updated;
  if ( updated )
  {
    *(struct tagRECT *)&updated->x = v40;
    updated[4] = v35;
    v24 = updated[6].x & 0xFFFFFFDF | (32 * v5);
    updated[6].x = v24;
    v25 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    updated[6].x = v25;
    updated[5] = v36;
    updated[6].x = v17 & 0xFFFFFFFD | v25 & 0xFFFFFFBD;
  }
  v26 = *((_QWORD *)a1 + 5);
  v27 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v28 = *(_BYTE *)(v26 + 31);
  if ( (v28 & 0x20) != 0 )
  {
    if ( (!v23 || (v23[6].x & 1) != 0) && v5 )
    {
      if ( v12 )
        TransformPointBetweenCoordinateSpaces(&v35, &v35, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v35.x, (unsigned int)v35.y, 0, 0, v27 | 1);
    }
  }
  else if ( (v28 & 1) != 0 )
  {
    if ( v23 )
    {
      x = v23[6].x;
      if ( (*(_BYTE *)(v26 + 19) & 0x40) != 0 )
      {
        x &= ~0x40u;
        v23[6].x = x;
      }
      if ( (x & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v36.x += v37;
          v36.y += v19;
        }
        if ( v12 )
          TransformPointBetweenCoordinateSpaces(&v36, &v36, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v36.x, (unsigned int)v36.y, 0, 0, v27 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v40.left,
      (unsigned int)v40.top,
      v40.right - v40.left,
      v40.bottom - v40.top,
      v27);
  }
  v29 = *(unsigned int *)(a2 + 4);
  if ( (v29 & 4) == 0
    || (v33 = *((_QWORD *)a1 + 2), v34 = *(struct tagQ **)(v33 + 424), v34 == *(struct tagQ **)(gptiCurrent + 424LL)) )
  {
    v30 = 0;
    xxxShowWindowEx(a1, *(_BYTE *)(a2 + 8), 0);
  }
  else
  {
    v30 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v33,
      v34,
      1u,
      a1,
      0,
      v29,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v30 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
