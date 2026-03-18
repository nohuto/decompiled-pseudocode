/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00F9CD8
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     UpdateWindowMonitor @ 0x1C0046CD0 (UpdateWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00CA04C (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00F9728 (zzzUpdateWindowsAfterModeChange.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E7990 (UserRecreateRedirectionBitmap.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCE40 (NtUserHwndQueryRedirectionInfo.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020EAF8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetRedirectionFlags @ 0x1C003C5D8 (GetRedirectionFlags.c)
 *     HintSpriteShape @ 0x1C003CE8C (HintSpriteShape.c)
 *     GetRedirectionBitmap @ 0x1C003F430 (GetRedirectionBitmap.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0090CAC (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0091758 (ChangeRedirectionParentInDCEs.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     GreExtGetObjectW @ 0x1C0099FD8 (GreExtGetObjectW.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     GreNotifyDirtySprite @ 0x1C00F9F64 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00FA070 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00FAABC (GreAdjustSpriteDirtyAccum.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(void **a1, LONG a2, int a3, int a4, int a5, HBRUSH *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  __int64 v14; // rax
  int v15; // ebx
  int v16; // eax
  HBRUSH v17; // rbx
  int v18; // r12d
  LONG x; // r14d
  bool v20; // zf
  int v21; // r13d
  _DWORD *v22; // rcx
  HWND v23; // rdx
  LONG v24; // eax
  struct _POINTL v27; // [rsp+48h] [rbp-61h] BYREF
  int v28; // [rsp+50h] [rbp-59h]
  unsigned int v29; // [rsp+54h] [rbp-55h]
  struct _POINTL v30; // [rsp+58h] [rbp-51h] BYREF
  tagBITMAP v31; // [rsp+60h] [rbp-49h] BYREF
  struct tagBITMAP v32; // [rsp+80h] [rbp-29h] BYREF
  struct _RECTL v33; // [rsp+A0h] [rbp-9h] BYREF

  v27.x = a2;
  v30 = 0LL;
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v28 = 0;
  v29 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HBRUSH)RedirectionBitmap;
  v14 = HmgShareLockCheck(RedirectionBitmap, v12);
  *(_QWORD *)&v33.left = v14;
  if ( v14 )
  {
    v15 = *(_DWORD *)(v14 + 112);
    DEC_SHARE_REF_CNT(v14);
    if ( (v15 & 0x800000) != 0 && a4 && !v9 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v33);
  }
  v16 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (HSURF *)&v30);
  v17 = (HBRUSH)v30;
  v18 = v16;
  if ( v16 < 0 )
    goto LABEL_27;
  if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v30, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v17, 1);
    v18 = -1073741801;
  }
  if ( v18 < 0 )
  {
LABEL_27:
    SetRedirectionBitmap(a1, 0LL, 0);
    v29 = 1;
  }
  if ( v17 && !v9 )
  {
    if ( v13 )
    {
      GreExtGetObjectW(v13, 32LL, (char *)&v32);
      v28 = 1;
    }
    GreExtGetObjectW(v17, 32LL, (char *)&v31);
  }
  if ( (GetRedirectionFlags((__int64)a1) & 1) != 0
    && (HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, 0LL, v9 == 0 ? 2 : 0), v17) )
  {
    HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), (struct tagWND *)a1, (HBITMAP)v17, v9 == 0 ? 2 : 0);
    x = v27.x;
    v20 = v9 == 0;
    v21 = a3;
    if ( v20 )
    {
      v22 = a1[5];
      v23 = (HWND)*a1;
      v30.x = v22[22];
      v24 = v22[23];
      v33.left = 0;
      v33.top = 0;
      v30.y = v24;
      v33.right = v31.bmWidth;
      v33.bottom = v31.bmHeight;
      v27.x = -v27.x;
      v27.y = -a3;
      GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v23, &v33, &v27, &v30);
    }
  }
  else
  {
    v21 = a3;
    x = v27.x;
  }
  if ( v28 )
  {
    BltOldRedirectionBitsToNewBitmap((struct tagWND *)a1, (HBITMAP)v13, (HBITMAP)v17, &v32, &v31, x, v21);
    GreNotifyDirtySprite((HWND)*a1);
  }
  ChangeRedirectionParentInDCEs((struct tagWND *)a1, v29);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v13, 1);
  }
  return (unsigned int)v18;
}
