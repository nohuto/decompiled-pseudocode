/*
 * XREFs of UnsetLayeredWindow @ 0x1C004EA28
 * Callers:
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     xxxFreeWindow @ 0x1C008B600 (xxxFreeWindow.c)
 *     xxxSetWindowStyle @ 0x1C009C710 (xxxSetWindowStyle.c)
 *     DeleteFadeSprite @ 0x1C01E81C0 (DeleteFadeSprite.c)
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x1C001EDB4 (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C00201F0 (UpdateSprite.c)
 *     RedirectDCEs @ 0x1C0020DA0 (RedirectDCEs.c)
 *     RemoveVisRgnTracker @ 0x1C004EC9C (RemoveVisRgnTracker.c)
 *     GreDeleteSprite @ 0x1C004ECD8 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C004F050 (UnsetRedirectedWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetStyleWindow @ 0x1C00707C0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 */

__int64 __fastcall UnsetLayeredWindow(struct tagWND *a1, char a2)
{
  int v4; // esi
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebp
  void *v9; // rax
  struct tagWND *StyleWindow; // rax
  __int64 v11; // rcx
  void *v13; // rax
  char v14; // [rsp+80h] [rbp+18h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_QWORD *)(gpDispInfo + 40LL));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_QWORD *)(gpDispInfo + 40LL));
  else
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  if ( (a2 & 1) == 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0
    && (v8 = SetLayeredWindowAttributes(a1, 0, 255, 18), v8 >= 0) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
    v13 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v13);
  }
  else
  {
    v6 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v6 + 31) & 0x10) != 0 )
    {
      UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v5, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0LL, 0x80000000, 0LL);
      v6 = *((_QWORD *)a1 + 5);
    }
    if ( (*(_BYTE *)(v6 + 27) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1);
      v6 = *((_QWORD *)a1 + 5);
    }
    *(_DWORD *)(v6 + 232) &= ~0x20u;
    *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~0x40u;
    v7 = IsWindowDesktopComposed(a1);
    v8 = GreDeleteSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, 0LL, v7);
    SetOrClrWF(0LL, a1, 2568LL, 1LL);
    RemoveVisRgnTracker(a1, 1LL);
    v9 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 5));
    DwmAsyncChildStyleChange(v9);
    StyleWindow = (struct tagWND *)GetStyleWindow(a1, 2848LL);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
      zzzLockDisplayAreaAndInvalidateDCCache(a1, 17LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    }
  }
  v11 = *(_QWORD *)(gpDispInfo + 40LL);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v11);
  else
    GreUnlockVisRgn(v11);
  return (unsigned int)v8;
}
