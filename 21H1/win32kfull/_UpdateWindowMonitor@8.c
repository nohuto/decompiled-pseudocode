/*
 * XREFs of _UpdateWindowMonitor@8 @ 0x2A95A
 * Callers:
 *     _UpdateMonitorForWindowAndChildren@16 @ 0x2A86E (_UpdateMonitorForWindowAndChildren@16.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 * Callees:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     ?FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z @ 0x1FB0A (-FindShadow@@YGPAUtagSHADOW@@PAUtagWND@@@Z.c)
 *     _UpdateWindowSpriteDPI@8 @ 0x23C14 (_UpdateWindowSpriteDPI@8.c)
 *     _RecreateRedirectionBitmap@24 @ 0x23D22 (_RecreateRedirectionBitmap@24.c)
 *     __SetDeferredDpiStateForWindowAndChildren@12 @ 0x25A48 (__SetDeferredDpiStateForWindowAndChildren@12.c)
 *     _IsChildWindowComposedForDpi@4 @ 0x2AC2C (_IsChildWindowComposedForDpi@4.c)
 *     _ShouldUseLogPixelsForWindowMetrics@4 @ 0x2AC48 (_ShouldUseLogPixelsForWindowMetrics@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     _xxxInternalInvalidate@12 @ 0x3519E (_xxxInternalInvalidate@12.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _IsChildWindowDpiBoundary@4 @ 0x38846 (_IsChildWindowDpiBoundary@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UpdateTopLevelWindowDPITransform@8 @ 0x99C12 (_UpdateTopLevelWindowDPITransform@8.c)
 */

void __stdcall UpdateWindowMonitor(int a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // ecx
  __int16 v5; // ax
  int v6; // eax
  int v7; // edx
  __int16 v8; // ax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // esi
  PKTHREAD CurrentThread; // eax
  PKTHREAD v14; // eax
  PKTHREAD v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  struct tagSHADOW *Shadow; // eax
  _BYTE v20[8]; // [esp+10h] [ebp-10h] BYREF
  _BYTE v21[8]; // [esp+18h] [ebp-8h] BYREF

  if ( a2 )
  {
    while ( 1 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 20) + 164) = *a2;
      v3 = *(_DWORD *)(a1 + 20);
      v4 = *(_DWORD *)(v3 + 144);
      if ( (v4 & 0x4000000) != 0
        || ((*(_DWORD *)(v3 + 184) & 0xF) != 2 || (*(_DWORD *)(v3 + 184) & 0x20000000) == 0
          ? (v5 = *(_WORD *)(a2[5] + 52))
          : (v5 = *(_WORD *)(a2[5] + 56)),
            v5 != *(_WORD *)(v3 + 180)) )
      {
        v6 = 0x4000000;
      }
      else
      {
        v6 = 0;
      }
      *(_DWORD *)(v3 + 144) = v6 | v4 & 0xFBFFFFFF;
      if ( _IsTopLevelWindow(a1) && (*(_DWORD *)(*(_DWORD *)(a1 + 20) + 184) & 0xF) == 2 )
        _SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
      v7 = *(_DWORD *)(a1 + 20);
      if ( (*(_DWORD *)(v7 + 184) & 0xF) == 2 && (*(_DWORD *)(v7 + 184) & 0x20000000) != 0 )
        v8 = *(_WORD *)(a2[5] + 56);
      else
        v8 = *(_WORD *)(a2[5] + 52);
      *(_WORD *)(v7 + 180) = v8;
      v9 = *(_DWORD **)(a1 + 168);
      if ( v9 )
      {
        --*v9;
        if ( !**(_DWORD **)(a1 + 168) )
          Win32FreePool(*(_DWORD *)(a1 + 168));
        *(_DWORD *)(a1 + 168) = 0;
      }
      v10 = (_DWORD *)a2[45];
      *(_DWORD *)(a1 + 168) = v10;
      ++*v10;
      v11 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(v11 + 144) ^= (*(_DWORD *)(v11 + 144) ^ (ShouldUseLogPixelsForWindowMetrics(a1) << 27)) & 0x8000000;
      v12 = IsChildWindowDpiBoundary(a1);
      if ( v12 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) == 0 )
          ComposeWindow((struct tagWND *)a1, 1);
      }
      else if ( IsChildWindowComposedForDpi(a1) )
      {
        ComposeWindow((struct tagWND *)a1, 2);
        if ( _GetTopLevelWindow(a1) )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
          xxxInternalInvalidate(*(_DWORD *)(a1 + 56), 1, 1157);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
        }
      }
      if ( !_IsTopLevelWindow(a1) && !v12 )
        break;
      if ( (*(_DWORD *)(*(_DWORD *)(a1 + 20) + 144) & 0x4000000) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( W32GetThreadWin32Thread(CurrentThread) )
        {
          v14 = KeGetCurrentThread();
          if ( *(_DWORD *)(W32GetThreadWin32Thread(v14) + 248) )
          {
            v15 = KeGetCurrentThread();
            if ( (*(_BYTE *)(**(_DWORD **)(*(_DWORD *)(W32GetThreadWin32Thread(v15) + 248) + 4) + 32) & 1) != 0 )
            {
              v16 = *(_DWORD *)(a1 + 20);
              v17 = *(_DWORD *)(v16 + 184);
              if ( (v17 & 0xF) == 0
                && (v17 & 0x40000000) != 0
                && (*(_BYTE *)(v16 + 19) & 0x20) != 0
                && (*(_BYTE *)(v16 + 18) & 0x20) == 0 )
              {
                GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
                v18 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0);
                GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
                if ( v18 >= 0 )
                {
                  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
                  xxxInternalInvalidate(a1, 1, 133);
                  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
                }
              }
            }
          }
        }
      }
      UpdateWindowSpriteDPI(a1, (int)a2);
      UpdateTopLevelWindowDPITransform(a1, a2);
      if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 76) + 4) + 10) & 2) != 0 )
      {
        Shadow = FindShadow((void *)a1);
        a1 = Shadow ? *((_DWORD *)Shadow + 1) : 0;
        if ( a1 )
          continue;
      }
      return;
    }
    if ( *(_DWORD *)(a1 + 120) )
    {
      Win32FreePool(*(_DWORD *)(a1 + 120));
      *(_DWORD *)(a1 + 120) = 0;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) != 0 )
      UpdateWindowSpriteDPI(a1, (int)a2);
  }
}
