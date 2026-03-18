/*
 * XREFs of UnsetLayeredWindow @ 0x1C00C0BC4
 * Callers:
 *     xxxSetWindowStyle @ 0x1C00583F0 (xxxSetWindowStyle.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     DeleteFadeSprite @ 0x1C01E7500 (DeleteFadeSprite.c)
 * Callees:
 *     _SetLayeredWindowAttributes @ 0x1C003CC6C (_SetLayeredWindowAttributes.c)
 *     UpdateSprite @ 0x1C003CF2C (UpdateSprite.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0042DB4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     GetStyleWindow @ 0x1C00457D0 (GetStyleWindow.c)
 *     RedirectDCEs @ 0x1C0091AD0 (RedirectDCEs.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     RemoveVisRgnTracker @ 0x1C00C0E38 (RemoveVisRgnTracker.c)
 *     GreDeleteSprite @ 0x1C00C0E74 (GreDeleteSprite.c)
 *     UnsetRedirectedWindow @ 0x1C00C11EC (UnsetRedirectedWindow.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00CB734 (DwmAsyncChildStyleChange.c)
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
    && (v8 = SetLayeredWindowAttributes(a1), v8 >= 0) )
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
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
      zzzLockDisplayAreaAndInvalidateDCCache((__int64)a1, 17, 0LL);
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
