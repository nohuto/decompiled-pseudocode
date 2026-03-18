/*
 * XREFs of UpdateWindowMonitor @ 0x1C0046CD0
 * Callers:
 *     xxxInheritWindowMonitor @ 0x1C004A0B0 (xxxInheritWindowMonitor.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C00F9A00 (UpdateMonitorForWindowAndChildren.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01E3D1C (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00133EC (_SetDeferredDpiStateForWindowAndChildren.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C003CBD8 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0041A54 (UpdateTopLevelWindowDPITransform.c)
 *     xxxInternalInvalidate @ 0x1C0042BD0 (xxxInternalInvalidate.c)
 *     IsChildWindowDpiBoundary @ 0x1C0046590 (IsChildWindowDpiBoundary.c)
 *     ?IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z @ 0x1C0046634 (-IsChildWindowCoordinateSpaceBoundary@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0046F40 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C0090E4C (UpdateWindowSpriteDPI.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ComposeWindow @ 0x1C00C2AD0 (ComposeWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00F9CD8 (RecreateRedirectionBitmap.c)
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
    *(_DWORD *)(v15 + 232) ^= (*(_DWORD *)(v15 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(a1) << 27)) & 0x8000000;
    v16 = IsChildWindowDpiBoundary(a1);
    v17 = *((_QWORD *)a1 + 5);
    v18 = v16;
    if ( v16 )
    {
      if ( (*(_BYTE *)(v17 + 26) & 8) == 0 )
        ComposeWindow(a1);
    }
    else if ( (*(_DWORD *)(v17 + 232) & 0x20) != 0 )
    {
      if ( (unsigned int)IsChildWindowCoordinateSpaceBoundary(a1) )
      {
        ComposeWindow(a1);
        if ( GetTopLevelWindow(a1) )
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
          UpdateWindowSpriteDPI(a1, a2);
        return;
      }
    }
    if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x4000000) != 0 )
    {
      if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
      {
        if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) )
        {
          if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
          {
            v23 = *((_QWORD *)a1 + 5);
            if ( (*(_DWORD *)(v23 + 288) & 0x4000000F) == 0x40000000
              && (*(_BYTE *)(v23 + 27) & 0x20) != 0
              && (*(_BYTE *)(v23 + 26) & 0x20) == 0 )
            {
              GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
              v24 = RecreateRedirectionBitmap(a1, 0, 0LL);
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
    UpdateWindowSpriteDPI(a1, a2);
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
