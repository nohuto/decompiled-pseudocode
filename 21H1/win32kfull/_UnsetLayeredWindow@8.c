/*
 * XREFs of _UnsetLayeredWindow@8 @ 0x1B80C
 * Callers:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _xxxSetWindowStyle@12 @ 0x3FA70 (_xxxSetWindowStyle@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _DeleteFadeSprite@0 @ 0x153705 (_DeleteFadeSprite@0.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     _UnsetRedirectedWindow@8 @ 0x1BE12 (_UnsetRedirectedWindow@8.c)
 *     __SetLayeredWindowAttributes@16 @ 0x1FB1E (__SetLayeredWindowAttributes@16.c)
 *     _UpdateSprite@48 @ 0x2B1AA (_UpdateSprite@48.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     _RedirectDCEs@4 @ 0x73D3A (_RedirectDCEs@4.c)
 *     _RemoveVisRgnTracker@8 @ 0xF4D94 (_RemoveVisRgnTracker@8.c)
 */

int __fastcall UnsetLayeredWindow(_DWORD *a1, char a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  _DWORD *StyleWindow; // eax
  int v11; // [esp-4h] [ebp-1Ch]
  int v12; // [esp-4h] [ebp-1Ch]
  int v13; // [esp-4h] [ebp-1Ch]
  _BYTE v14[8]; // [esp+10h] [ebp-8h] BYREF

  v4 = GreIsDynamicModeChangeLocked(*(_DWORD *)(_gpDispInfo + 20));
  if ( v4 )
    GreLockVisRgnWithDmcLockAcquiredEx(*(_DWORD *)(_gpDispInfo + 20));
  else
    GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  if ( (a2 & 1) == 0
    && IsWindowDesktopComposed(a1)
    && (*(_BYTE *)(a1[5] + 23) & 0x10) != 0
    && (v6 = _SetLayeredWindowAttributes(255, 18), v6 >= 0) )
  {
    *(_DWORD *)(a1[5] + 144) |= 0x20u;
    v11 = *(_DWORD *)(a1[5] + 144);
    ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(-268435456, v11);
  }
  else
  {
    v7 = a1[5];
    if ( (*(_BYTE *)(v7 + 23) & 0x10) != 0 )
    {
      UpdateSprite(*(_DWORD *)(_gpDispInfo + 20), a1, v5, 0, 0, 0, 0, 0, 0, 0, 0x80000000, 0);
      v7 = a1[5];
    }
    if ( (*(_BYTE *)(v7 + 19) & 0x20) != 0 )
    {
      UnsetRedirectedWindow(a1, 1);
      v7 = a1[5];
    }
    *(_DWORD *)(v7 + 144) &= ~0x20u;
    *(_DWORD *)(a1[5] + 144) &= ~0x40u;
    v8 = IsWindowDesktopComposed(a1);
    v6 = GreDeleteSprite(*(_DWORD *)(_gpDispInfo + 20), *a1, 0, v8);
    SetOrClrWF(2568, 1);
    RemoveVisRgnTracker(a1, 1);
    v12 = *(_DWORD *)(a1[5] + 144);
    ReferenceDwmApiPort();
    DwmAsyncChildStyleChange(-268435456, v12);
    StyleWindow = (_DWORD *)GetStyleWindow(a1, 2848);
    if ( StyleWindow && StyleWindow != a1 )
      RedirectDCEs(a1);
    if ( (*(_BYTE *)(a1[5] + 23) & 0x10) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
      zzzLockDisplayAreaAndInvalidateDCCache(0);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
    }
  }
  v13 = *(_DWORD *)(_gpDispInfo + 20);
  if ( v4 )
    GreUnlockVisRgnWithDmcLockAcquiredEx(v13);
  else
    GreUnlockVisRgn(v13);
  return v6;
}
