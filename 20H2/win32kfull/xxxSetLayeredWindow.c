/*
 * XREFs of xxxSetLayeredWindow @ 0x1C00C6608
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E68A8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C00075A4 (GreGetSprite.c)
 *     zzzUpdateLayeredWindow @ 0x1C003C778 (zzzUpdateLayeredWindow.c)
 *     xxxRedrawWindow @ 0x1C00429A4 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     GreUpdateSpriteClipRgn @ 0x1C008F964 (GreUpdateSpriteClipRgn.c)
 *     UpdateWindowSpriteDPI @ 0x1C0090E4C (UpdateWindowSpriteDPI.c)
 *     TrackLayeredZorder @ 0x1C009153C (TrackLayeredZorder.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0091A10 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     DwmAsyncTextChange @ 0x1C00C4FB0 (DwmAsyncTextChange.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     CreateSprite @ 0x1C00C685C (CreateSprite.c)
 *     CreateVisRgnTracker @ 0x1C00C6F1C (CreateVisRgnTracker.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0109A78 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C0212C4C (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(unsigned __int64 a1, int a2, __int64 *a3)
{
  int v3; // ebx
  __int64 TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  HRGN v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  __int64 Sprite; // rax
  __int64 v20; // rcx
  void *v21; // rax
  int v22; // eax
  __int64 DCEx; // rax
  __int64 v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  struct tagSIZE v34; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v35; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v36[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v37; // [rsp+68h] [rbp-18h] BYREF
  __int64 v38; // [rsp+78h] [rbp-8h]
  __int64 v39; // [rsp+C0h] [rbp+40h] BYREF
  int v40; // [rsp+C8h] [rbp+48h] BYREF
  int v41; // [rsp+CCh] [rbp+4Ch]

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( TopLevelWindow )
  {
    if ( TopLevelWindow == a1
      || *(_WORD *)(a1 + 256) >= 0x602u
      || (v22 = IsChildWindowDpiIsolationEnabled(a1, *(_QWORD *)(a1 + 104)),
          v22 && (unsigned int)IsChildWindowDpiBoundary((struct tagWND *)a1)) )
    {
      v3 = 1;
    }
  }
  LOBYTE(v8) = IsDesktopWindow(a1);
  if ( v8 && (unsigned int)IsWindowDesktopComposed(v9) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v10 + 88, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1LL, a1, 2568LL, 1LL);
      CreateVisRgnTracker((struct tagWND *)a1);
      TrackLayeredZorder((struct tagWND *)a1);
      if ( (unsigned int)IsTopLevelWindow(a1) )
      {
        v14 = *(_QWORD *)(a1 + 40);
        v15 = *(HRGN *)(v14 + 168);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v14 + 21) & 8) == 0 )
            GreUpdateSpriteClipRgn(v13, *(struct PDEVOBJ **)a1, v15, 0);
        }
      }
      v16 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 256LL));
      UpdateWindowSpriteDPI((_QWORD *)a1, v16);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        SendDwmIconChange(a1);
        v18 = (void *)ReferenceDwmApiPort(v17);
        DwmAsyncTextChange(v18, *(_QWORD *)a1);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v36);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v36);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*(_QWORD *)(a1 + 104), 0LL, 3LL);
        v24 = DCEx;
        if ( DCEx )
        {
          v25 = *(_QWORD *)(a1 + 40);
          v39 = 0LL;
          v35 = *(struct tagPOINT *)(v25 + 88);
          v34.cx = *(_DWORD *)(v25 + 96) - *(_DWORD *)(v25 + 88);
          v34.cy = *(_DWORD *)(v25 + 100) - *(_DWORD *)(v25 + 92);
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v39);
          v26 = *(_QWORD *)(a1 + 40);
          v40 = *(_DWORD *)(v26 + 88) - v39;
          v41 = *(_DWORD *)(v26 + 92) - HIDWORD(v39);
          updated = zzzUpdateLayeredWindow((struct tagWND *)a1, v24, &v35, &v34, v24, (__int64)&v40, 0, 0LL, 12, 0LL);
          _ReleaseDC(v24);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*(_QWORD *)(a1 + 40) + 88LL);
        v28 = *(_QWORD *)(a1 + 104);
        v29 = RectRgnIndirect;
        v38 = 0LL;
        v37 = 0LL;
        if ( v28 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          *(_QWORD *)&v37 = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = &v37;
          *((_QWORD *)&v37 + 1) = v28;
          HMLockObject(v28);
          GreOffsetRgn(
            v29,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v28 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v28 + 40) + 108LL));
        }
        xxxRedrawWindow((struct tagWND *)v28, 0LL, v29, 1157);
        if ( v28 )
          ThreadUnlock1(v32, v31, v33);
        xxxUpdateThreadsWindows(gptiCurrent, a1, v29);
        GreDeleteObject(v29);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) &= ~0x20u;
  v20 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(v20 + 232) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v21 = (void *)ReferenceDwmApiPort(v20);
  DwmAsyncChildStyleChange(v21);
  return 0LL;
}
