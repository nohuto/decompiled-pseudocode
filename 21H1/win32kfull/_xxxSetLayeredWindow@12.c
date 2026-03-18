/*
 * XREFs of _xxxSetLayeredWindow@12 @ 0x1F2B8
 * Callers:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _SendDwmIconChange@4 @ 0x1D802 (_SendDwmIconChange@4.c)
 *     _DwmAsyncTextChange@8 @ 0x1EC70 (_DwmAsyncTextChange@8.c)
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _CreateSprite@16 @ 0x1F5C2 (_CreateSprite@16.c)
 *     _TrackLayeredZorder@4 @ 0x2343C (_TrackLayeredZorder@4.c)
 *     _GreUpdateSpriteClipRgn@16 @ 0x239F2 (_GreUpdateSpriteClipRgn@16.c)
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _IsToplevelWindowDesktopComposed@4 @ 0x35ADA (_IsToplevelWindowDesktopComposed@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserGetRedirectedWindowOrigin@8 @ 0x38754 (_UserGetRedirectedWindowOrigin@8.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _IsDesktopWindow@4 @ 0x72F74 (_IsDesktopWindow@4.c)
 *     _IsChildWindowDpiIsolationEnabled@8 @ 0xA8DE2 (_IsChildWindowDpiIsolationEnabled@8.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 *     _GreGetSprite@8 @ 0xC3FF0 (_GreGetSprite@8.c)
 *     _CreateVisRgnTracker@8 @ 0xF4C7C (_CreateVisRgnTracker@8.c)
 *     _xxxUpdateThreadsWindows@12 @ 0x17804C (_xxxUpdateThreadsWindows@12.c)
 */

int __fastcall xxxSetLayeredWindow(struct tagWND *a1, int a2, int *a3)
{
  int v3; // ebx
  struct tagWND *TopLevelWindow; // eax
  struct PDEVOBJ *v6; // ecx
  int v7; // ebx
  int Sprite; // eax
  void *v9; // eax
  int result; // eax
  int v11; // eax
  struct PDEVOBJ *v12; // ecx
  int v13; // eax
  void *v14; // eax
  int v15; // edi
  int DCEx; // ebx
  _DWORD *v17; // edx
  int v18; // ecx
  int RectRgnIndirect; // eax
  int v20; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v23; // edi
  int v24; // [esp-4h] [ebp-34h]
  _DWORD v25[2]; // [esp+Ch] [ebp-24h] BYREF
  int updated; // [esp+14h] [ebp-1Ch] BYREF
  int v27; // [esp+18h] [ebp-18h]
  _DWORD v28[2]; // [esp+1Ch] [ebp-14h] BYREF
  int v29; // [esp+24h] [ebp-Ch] BYREF
  int v30; // [esp+28h] [ebp-8h]
  int v31; // [esp+2Ch] [ebp-4h]

  v3 = 0;
  v25[0] = a2;
  if ( a3 )
    *a3 = 0;
  TopLevelWindow = (struct tagWND *)_GetTopLevelWindow(a1);
  if ( TopLevelWindow
    && (TopLevelWindow == a1
     || *((_WORD *)a1 + 74) >= 0x602u
     || IsChildWindowDpiIsolationEnabled(a1, *((_DWORD *)a1 + 14)) && IsChildWindowDpiBoundary(a1)) )
  {
    v3 = 1;
  }
  if ( IsDesktopWindow(a1) && IsWindowDesktopComposed(a1) )
    v3 = 1;
  if ( !v3 )
    return -2143420413;
  v7 = *((_DWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 144) & 0x20) == 0 )
  {
    if ( !IsWindowBeingDestroyed(a1) )
    {
      result = CreateSprite(*(_DWORD *)(_gpDispInfo + 20), a1, v7 + 52, a3);
      updated = result;
      if ( result < 0 )
        return result;
      SetOrClrWF(1, (int)a1, 0xA08u, 1);
      CreateVisRgnTracker(a1);
      TrackLayeredZorder(a1);
      if ( _IsTopLevelWindow(a1) )
      {
        v11 = *((_DWORD *)a1 + 5);
        v12 = *(struct PDEVOBJ **)(v11 + 108);
        if ( v12 )
        {
          if ( (*(_BYTE *)(v11 + 13) & 8) == 0 )
            GreUpdateSpriteClipRgn(v12, (int)v12, 0);
        }
      }
      v13 = ValidateHmonitorNoRip(*(_DWORD *)(*((_DWORD *)a1 + 5) + 164));
      UpdateWindowSpriteDPI(a1, v13);
      if ( IsToplevelWindowDesktopComposed(a1) )
      {
        SendDwmIconChange(a1);
        v14 = (void *)ReferenceDwmApiPort();
        DwmAsyncTextChange(v14, *(_DWORD *)a1);
      }
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v29);
      zzzLockDisplayAreaAndInvalidateDCCache(0);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v29);
      if ( (*(_BYTE *)(*((_DWORD *)a1 + 5) + 23) & 0x10) != 0 )
      {
        v15 = v25[0];
        if ( !v25[0] )
          return updated;
        DCEx = _GetDCEx(*((_DWORD *)a1 + 14), 0, 3);
        if ( DCEx )
        {
          v17 = (_DWORD *)*((_DWORD *)a1 + 5);
          updated = 0;
          v27 = 0;
          v29 = v17[13];
          v30 = v17[14];
          v28[0] = v17[15] - v17[13];
          v28[1] = v17[16] - v17[14];
          UserGetRedirectedWindowOrigin(DCEx, &updated);
          v18 = *((_DWORD *)a1 + 5);
          v25[0] = *(_DWORD *)(v18 + 52) - updated;
          v25[1] = *(_DWORD *)(v18 + 56) - v27;
          updated = zzzUpdateLayeredWindow(a1, DCEx, &v29, v28, DCEx, v25, 0, 0, 12, 0);
          _ReleaseDC(DCEx);
        }
      }
      else
      {
        v15 = 0;
      }
      if ( v15 )
      {
        RectRgnIndirect = GreCreateRectRgnIndirect(*((_DWORD *)a1 + 5) + 52);
        v20 = *((_DWORD *)a1 + 14);
        v25[0] = RectRgnIndirect;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        if ( v20 )
        {
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v29 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v29;
          v30 = v20;
          HMLockObject(v20);
          v23 = v25[0];
          GreOffsetRgn(v25[0], -*(_DWORD *)(*(_DWORD *)(v20 + 20) + 68), -*(_DWORD *)(*(_DWORD *)(v20 + 20) + 72));
        }
        else
        {
          v23 = v25[0];
        }
        xxxRedrawWindow(v23, 1157);
        if ( v20 )
          ThreadUnlock1();
        xxxUpdateThreadsWindows(v23);
        GreDeleteObject(v23);
      }
      return updated;
    }
    return -2143420413;
  }
  Sprite = GreGetSprite(v6);
  *(_DWORD *)(*((_DWORD *)a1 + 5) + 144) &= ~0x20u;
  *(_DWORD *)(*((_DWORD *)a1 + 5) + 144) |= 0x40u;
  if ( a3 )
    *a3 = Sprite;
  v24 = *(_DWORD *)(*((_DWORD *)a1 + 5) + 144);
  v9 = (void *)ReferenceDwmApiPort();
  DwmAsyncChildStyleChange(v9, *(_DWORD *)a1, -268435456, v24);
  return 0;
}
