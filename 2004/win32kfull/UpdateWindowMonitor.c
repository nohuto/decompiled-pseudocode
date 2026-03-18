/*
 * XREFs of UpdateWindowMonitor @ 0x1C006F040
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x1C006B23C (xxxInheritWindowMonitor.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E49DC (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001DE38 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowSpriteDPI @ 0x1C001F1A4 (UpdateWindowSpriteDPI.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00232D0 (UpdateTopLevelWindowDPITransform.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C003BDB8 (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ComposeWindow @ 0x1C004E8F0 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006E9F0 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _GetTopLevelWindow @ 0x1C006EA90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     IsChildWindowDpiBoundary @ 0x1C006F7CC (IsChildWindowDpiBoundary.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C006F870 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, _QWORD *a2)
{
  __int64 v4; // rdx
  int v5; // ecx
  __int16 v6; // r8
  int v7; // eax
  __int64 DesktopWindow; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int16 v11; // cx
  _DWORD *v12; // rax
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagSHADOW *Shadow; // rax
  __int64 v23; // rcx
  int v24; // ebx
  char v25; // [rsp+58h] [rbp+10h] BYREF
  char v26; // [rsp+60h] [rbp+18h] BYREF

  while ( a2 )
  {
    *(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL) = *a2;
    v4 = *((_QWORD *)a1 + 5);
    v5 = *(_DWORD *)(v4 + 232);
    if ( (v5 & 0x4000000) != 0
      || ((*(_DWORD *)(v4 + 288) & 0xF) == 2 && (*(_DWORD *)(v4 + 288) & 0x20000000) != 0
        ? (v6 = *(_WORD *)(a2[5] + 68LL))
        : (v6 = *(_WORD *)(a2[5] + 64LL)),
          v6 != *(_WORD *)(v4 + 284)) )
    {
      v7 = 0x4000000;
    }
    else
    {
      v7 = 0;
    }
    *(_DWORD *)(v4 + 232) = v7 | v5 & 0xFBFFFFFF;
    if ( *((_QWORD *)a1 + 13) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( v9 == DesktopWindow && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) == 2 )
        SetDeferredDpiStateForWindowAndChildren(a1, 1, 0);
    }
    v10 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v10 + 288) & 0xF) == 2 && (*(_DWORD *)(v10 + 288) & 0x20000000) != 0 )
      v11 = *(_WORD *)(a2[5] + 68LL);
    else
      v11 = *(_WORD *)(a2[5] + 64LL);
    *(_WORD *)(v10 + 284) = v11;
    v12 = (_DWORD *)*((_QWORD *)a1 + 36);
    if ( v12 )
    {
      --*v12;
      v13 = (_DWORD *)*((_QWORD *)a1 + 36);
      if ( !*v13 )
        Win32FreePool(v13);
      *((_QWORD *)a1 + 36) = 0LL;
    }
    v14 = (_DWORD *)a2[39];
    *((_QWORD *)a1 + 36) = v14;
    ++*v14;
    v15 = *((_QWORD *)a1 + 5);
    *(_DWORD *)(v15 + 232) ^= (*(_DWORD *)(v15 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)a1) << 27)) & 0x8000000;
    v16 = IsChildWindowDpiBoundary(a1);
    v17 = *((_QWORD *)a1 + 5);
    v18 = v16;
    if ( v16 )
    {
      if ( (*(_BYTE *)(v17 + 26) & 8) == 0 )
        ComposeWindow(a1, 1);
    }
    else if ( (*(_DWORD *)(v17 + 232) & 0x20) != 0 )
    {
      if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
      {
        ComposeWindow(a1, 2);
        if ( GetTopLevelWindow((__int64)a1) )
        {
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v25);
          xxxInternalInvalidate(*((struct tagWND **)a1 + 13), (HRGN)1, 0x485u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v25);
        }
      }
    }
    if ( !*((_QWORD *)a1 + 13) || (v19 = GetDesktopWindow(a1), v20 != v19) )
    {
      if ( !v18 )
      {
        v21 = *((_QWORD *)a1 + 27);
        if ( v21 )
        {
          Win32FreePool(v21);
          *((_QWORD *)a1 + 27) = 0LL;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
          UpdateWindowSpriteDPI(a1, (__int64)a2);
        return;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
          {
            v23 = *((_QWORD *)a1 + 5);
            if ( (*(_DWORD *)(v23 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v23 + 27) & 0x20) != 0
              && (*(_BYTE *)(v23 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v24 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, 0LL);
              GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              if ( v24 >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v26);
                xxxInternalInvalidate(a1, (HRGN)1, 0x85u);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v26);
              }
            }
          }
        }
      }
    }
    UpdateWindowSpriteDPI(a1, (__int64)a2);
    UpdateTopLevelWindowDPITransform((__int64)a1, (__int64)a2);
    if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 10LL) & 2) != 0 )
    {
      Shadow = FindShadow(a1);
      a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
      if ( a1 )
        continue;
    }
    return;
  }
}
