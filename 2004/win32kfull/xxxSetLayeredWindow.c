/*
 * XREFs of xxxSetLayeredWindow @ 0x1C0028B2C
 * Callers:
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7568 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 * Callees:
 *     GreGetSprite @ 0x1C0007704 (GreGetSprite.c)
 *     GreUpdateSpriteClipRgn @ 0x1C001D924 (GreUpdateSpriteClipRgn.c)
 *     TrackLayeredZorder @ 0x1C001EFD4 (TrackLayeredZorder.c)
 *     UpdateWindowSpriteDPI @ 0x1C001F1A4 (UpdateWindowSpriteDPI.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0020CE0 (UserGetRedirectedWindowOrigin.c)
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C0024D74 (zzzUpdateLayeredWindow.c)
 *     CreateVisRgnTracker @ 0x1C0028A38 (CreateVisRgnTracker.c)
 *     CreateSprite @ 0x1C0028D80 (CreateSprite.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     DwmAsyncTextChange @ 0x1C002A50C (DwmAsyncTextChange.c)
 *     SendDwmIconChange @ 0x1C002A5A0 (SendDwmIconChange.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     xxxRedrawWindow @ 0x1C0071544 (xxxRedrawWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0108A50 (IsChildWindowDpiIsolationEnabled.c)
 *     xxxUpdateThreadsWindows @ 0x1C0213ACC (xxxUpdateThreadsWindows.c)
 */

__int64 __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, __int64 *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 result; // rax
  unsigned int updated; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  HRGN v15; // r8
  __int64 v16; // rax
  void *v17; // rax
  __int64 Sprite; // rax
  void *v19; // rax
  __int64 DCEx; // rax
  HDC v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 RectRgnIndirect; // rax
  __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagSIZE v28; // [rsp+50h] [rbp-30h] BYREF
  struct tagPOINT v29; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v30[8]; // [rsp+60h] [rbp-20h] BYREF
  __int128 v31; // [rsp+68h] [rbp-18h] BYREF
  __int64 v32; // [rsp+78h] [rbp-8h]
  __int64 v33; // [rsp+C0h] [rbp+40h] BYREF
  struct tagPOINT v34; // [rsp+C8h] [rbp+48h] BYREF

  v3 = 0;
  if ( a3 )
    *a3 = 0LL;
  TopLevelWindow = (struct tagWND *)GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 128) >= 0x602u
     || (unsigned int)IsChildWindowDpiIsolationEnabled(a1, *((_QWORD *)a1 + 13))
     && (unsigned int)IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  if ( v8 && (unsigned int)IsWindowDesktopComposed(v9) )
    v3 = 1;
  if ( !v3 )
    return 2151546883LL;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x20) == 0 )
  {
    if ( !(unsigned int)IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v10 + 88, a3);
      updated = result;
      if ( (int)result < 0 )
        return result;
      SetOrClrWF(1LL, a1, 2568LL, 1LL);
      CreateVisRgnTracker(a1, 1);
      TrackLayeredZorder(a1);
      if ( (unsigned int)IsTopLevelWindow(a1) )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = *(HRGN *)(v14 + 168);
        if ( v15 )
        {
          if ( (*(_BYTE *)(v14 + 21) & 8) == 0 )
            GreUpdateSpriteClipRgn(v13, *(struct PDEVOBJ **)a1, v15, 0);
        }
      }
      v16 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v16);
      if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      {
        SendDwmIconChange(a1);
        v17 = (void *)ReferenceDwmApiPort();
        DwmAsyncTextChange(v17);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v30);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v30);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
      {
        if ( !a2 )
          return updated;
        DCEx = _GetDCEx(*((_QWORD *)a1 + 13), 0LL, 3LL);
        v21 = (HDC)DCEx;
        if ( DCEx )
        {
          v22 = *((_QWORD *)a1 + 5);
          v33 = 0LL;
          v29 = *(struct tagPOINT *)(v22 + 88);
          v28.cx = *(_DWORD *)(v22 + 96) - *(_DWORD *)(v22 + 88);
          v28.cy = *(_DWORD *)(v22 + 100) - *(_DWORD *)(v22 + 92);
          UserGetRedirectedWindowOrigin(DCEx, (__int64)&v33);
          v23 = *((_QWORD *)a1 + 5);
          v34.x = *(_DWORD *)(v23 + 88) - v33;
          v34.y = *(_DWORD *)(v23 + 92) - HIDWORD(v33);
          updated = zzzUpdateLayeredWindow(a1, v21, &v29, &v28, v21, &v34, 0, 0LL, 0xCu, 0LL);
          _ReleaseDC(v21);
        }
      }
      else
      {
        a2 = 0;
      }
      if ( a2 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_QWORD *)a1 + 5) + 88LL);
        v25 = *((_QWORD *)a1 + 13);
        v26 = RectRgnIndirect;
        v32 = 0LL;
        v31 = 0LL;
        if ( v25 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v31;
          *((_QWORD *)&v31 + 1) = v25;
          HMLockObject(v25);
          GreOffsetRgn(
            v26,
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v25 + 40) + 104LL),
            (unsigned int)-*(_DWORD *)(*(_QWORD *)(v25 + 40) + 108LL));
        }
        xxxRedrawWindow((struct tagWND *)v25);
        if ( v25 )
          ThreadUnlock1();
        xxxUpdateThreadsWindows(gptiCurrent, a1, v26);
        GreDeleteObject(v26);
      }
      return updated;
    }
    return 2151546883LL;
  }
  Sprite = GreGetSprite(v9, *(struct PDEVOBJ **)a1);
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x20u;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v19 = (void *)ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(v19);
  return 0LL;
}
