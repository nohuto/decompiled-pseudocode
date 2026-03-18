/*
 * XREFs of xxxSetWindowPlacement @ 0x1C0112068
 * Callers:
 *     NtUserSetWindowPlacement @ 0x1C0111F10 (NtUserSetWindowPlacement.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C003A968 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C003AE18 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C003AFE8 (GetMonitorRect.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     ?CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z @ 0x1C01123F4 (-CheckPlacementBounds@@YAXPEAUtagRECT@@PEAUtagPOINT@@1PEAUtagMONITOR@@@Z.c)
 *     WPUpdateCheckPointSettings @ 0x1C01125B4 (WPUpdateCheckPointSettings.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
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
  __int64 v14; // r9
  __int64 v15; // rdx
  struct tagPOINT v16; // rcx
  struct tagPOINT v17; // rax
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 updated; // rax
  __int64 v26; // r8
  unsigned int v27; // edx
  int v28; // ecx
  __int64 v29; // rdx
  int v30; // ebx
  char v31; // al
  unsigned __int64 v32; // r9
  int v33; // ebx
  int v35; // ecx
  __int64 v36; // r10
  struct tagQ *v37; // rdx
  struct tagPOINT v38; // [rsp+40h] [rbp-39h] BYREF
  struct tagPOINT v39; // [rsp+48h] [rbp-31h] BYREF
  __int128 v40; // [rsp+50h] [rbp-29h]
  __int128 v41; // [rsp+60h] [rbp-19h] BYREF
  __int128 v42; // [rsp+70h] [rbp-9h] BYREF
  struct tagRECT v43; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v5 = 1;
  v12 = 0;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
    {
      v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
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
  v43 = *(struct tagRECT *)(a2 + 28);
  DesktopWindow = GetDesktopWindow((__int64)a1);
  if ( v15 == DesktopWindow )
  {
    v2 = (struct tagMONITOR *)MonitorFromRect(&v43, 1LL, 0LL, v14);
    v40 = *GetMonitorWorkRect(&v41, (__int64)v2);
  }
  v16 = *(struct tagPOINT *)(a2 + 12);
  v38 = v16;
  if ( v16.x == -1 || v16.y == -1 )
    v5 = 0;
  v17 = *(struct tagPOINT *)(a2 + 20);
  v39 = v17;
  if ( v17.x == -1 || v17.y == -1 )
    v18 = 0;
  else
    v18 = 64;
  v19 = GetDesktopWindow((__int64)a1);
  v22 = DWORD1(v40);
  if ( v23 == v19 && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v24 = *(_QWORD *)GetMonitorRect(&v42, (__int64)v2, v20, v21);
    v43.bottom += DWORD1(v40) - HIDWORD(v24);
    v43.left += v40 - v24;
    v43.right += v40 - v24;
    v43.top += DWORD1(v40) - HIDWORD(v24);
    if ( v5 )
    {
      v38.x += v40 - v24;
      v38.y += DWORD1(v40) - HIDWORD(v24);
    }
    CheckPlacementBounds(&v43, &v38, &v39, v2);
  }
  if ( v12 )
    TransformRectBetweenCoordinateSpaces(&v43, &v43, a1, 0LL);
  updated = UpdateCheckpoint((__int64)a1);
  v26 = updated;
  if ( updated )
  {
    *(struct tagRECT *)updated = v43;
    *(struct tagPOINT *)(updated + 32) = v38;
    v27 = *(_DWORD *)(updated + 48) & 0xFFFFFFDF | (32 * v5);
    *(_DWORD *)(updated + 48) = v27;
    v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)*(_DWORD *)(a2 + 4)) & 1;
    *(_DWORD *)(updated + 48) = v28;
    *(struct tagPOINT *)(updated + 40) = v39;
    *(_DWORD *)(updated + 48) = v18 & 0xFFFFFFFD | v28 & 0xFFFFFFBD;
  }
  v29 = *((_QWORD *)a1 + 5);
  v30 = ((*(_DWORD *)(a2 + 4) & 4) << 12) | 0x14;
  v31 = *(_BYTE *)(v29 + 31);
  if ( (v31 & 0x20) != 0 )
  {
    if ( (!v26 || (*(_DWORD *)(v26 + 48) & 1) != 0) && v5 )
    {
      if ( v12 )
        TransformPointBetweenCoordinateSpaces(&v38, &v38, a1, 0LL);
      xxxSetWindowPos(a1, 0LL, (unsigned int)v38.x, (unsigned int)v38.y, 0, 0, v30 | 1);
    }
  }
  else if ( (v31 & 1) != 0 )
  {
    if ( v26 )
    {
      v35 = *(_DWORD *)(v26 + 48);
      if ( (*(_BYTE *)(v29 + 19) & 0x40) != 0 )
      {
        v35 &= ~0x40u;
        *(_DWORD *)(v26 + 48) = v35;
      }
      if ( (v35 & 0x40) != 0 )
      {
        if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
        {
          v39.x += v40;
          v39.y += v22;
        }
        if ( v12 )
          TransformPointBetweenCoordinateSpaces(&v39, &v39, a1, 0LL);
        xxxSetWindowPos(a1, 0LL, (unsigned int)v39.x, (unsigned int)v39.y, 0, 0, v30 | 1);
      }
    }
  }
  else
  {
    xxxSetWindowPos(
      a1,
      0LL,
      (unsigned int)v43.left,
      (unsigned int)v43.top,
      v43.right - v43.left,
      v43.bottom - v43.top,
      v30);
  }
  v32 = *(unsigned int *)(a2 + 4);
  if ( (v32 & 4) == 0
    || (v36 = *((_QWORD *)a1 + 2), v37 = *(struct tagQ **)(v36 + 432), v37 == *(struct tagQ **)(gptiCurrent + 432LL)) )
  {
    v33 = 0;
    xxxShowWindowEx(a1, *(_BYTE *)(a2 + 8), 0);
  }
  else
  {
    v33 = 1;
    PostEventMessageEx(
      (struct tagTHREADINFO *)v36,
      v37,
      1u,
      a1,
      0,
      v32,
      *(unsigned int *)(a2 + 8) | (unsigned __int64)(gdwPUDFlags & 0x10000),
      0LL);
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 && !v33 )
    WPUpdateCheckPointSettings(a1, *(unsigned int *)(a2 + 4));
  return 1LL;
}
