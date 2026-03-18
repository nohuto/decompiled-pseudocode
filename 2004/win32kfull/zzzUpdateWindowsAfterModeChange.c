/*
 * XREFs of zzzUpdateWindowsAfterModeChange @ 0x1C0051198
 * Callers:
 *     zzzResetSharedDesktops @ 0x1C00521B0 (zzzResetSharedDesktops.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C0020E80 (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C0021060 (GetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C0051470 (UpdateMonitorForWindowAndChildren.c)
 *     RecreateRedirectionBitmap @ 0x1C0051748 (RecreateRedirectionBitmap.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetNewMonitor @ 0x1C006A920 (GetNewMonitor.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006D19C (zzzEndDeferWinEventNotify.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C00717E0 (xxxInternalInvalidate.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E7E1C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     GreGetBitmapDpiScaleValue @ 0x1C029F4AC (GreGetBitmapDpiScaleValue.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzUpdateWindowsAfterModeChange(int a1, int a2)
{
  int v2; // ebx
  int v3; // ebp
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 *v6; // r13
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 NewMonitor; // rax
  __int64 v11; // rcx
  int v12; // r15d
  __int64 RedirectionBitmap; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // eax
  int v18; // r9d
  int v19; // r12d
  int v20; // ecx
  HBITMAP v21; // rbp
  __int16 v23; // bx
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF
  int v26; // [rsp+98h] [rbp+10h]
  HBITMAP v27; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+20h] BYREF

  v26 = a2;
  v2 = a1;
  v3 = a2;
  ++gdwDeferWinEvent;
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  v4 = gSharedInfo[1];
  v5 = v4 + 32LL * giheLast;
  v6 = (__int64 *)gpKernelHandleTable;
  while ( v4 <= v5 )
  {
    v27 = 0LL;
    if ( *(_BYTE *)(v4 + 24) == 1 )
    {
      v7 = *v6;
      if ( (unsigned int)IsTopLevelWindow(*v6) )
        goto LABEL_9;
      v8 = *(_QWORD *)(v7 + 24);
      v9 = 0LL;
      if ( v8 )
        v9 = *(_QWORD *)(v8 + 104);
      if ( *(_QWORD *)(v7 + 104) == v9 )
      {
LABEL_9:
        NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 256LL));
        if ( !NewMonitor )
          NewMonitor = GetNewMonitor((struct tagWND *)v7, 0LL);
        UpdateMonitorForWindowAndChildren(v7, NewMonitor, 0LL, 0LL);
      }
      v11 = *(_QWORD *)(v7 + 40);
      if ( (*(_BYTE *)(v11 + 27) & 0x20) != 0
        && (*(_BYTE *)(v11 + 26) & 0x20) == 0
        && (v2 || (unsigned int)IsWindowDesktopComposed(v7)) )
      {
        *(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) &= ~0x80000u;
        v12 = GetRedirectionBitmap(v7) == 0;
        RedirectionBitmap = GetRedirectionBitmap(v7);
        LOBYTE(v14) = 5;
        v15 = HmgShareLockCheck(RedirectionBitmap, v14);
        v28 = v15;
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 + 116);
          DEC_SHARE_REF_CNT(v15);
          if ( (v16 & 0x2000) != 0 )
            v3 = 1;
          v26 = v3;
        }
        else
        {
          EPALOBJ::~EPALOBJ((EPALOBJ *)&v28);
        }
        RecreateRedirectionBitmap((struct tagWND *)v7, 0, (__int64)&v27);
        LOBYTE(v17) = IsDesktopWindow(v7);
        v19 = v17;
        if ( !v27 )
        {
LABEL_21:
          if ( !v19 )
            goto LABEL_22;
          goto LABEL_31;
        }
        if ( v17
          || v18 >= 0
          || (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 232LL) & 0x20) == 0
          || !(unsigned int)RestoreOldRedirectionBitmap((struct tagWND *)v7, v27) )
        {
          if ( W32GetThreadWin32Thread(KeGetCurrentThread())
            && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0
            && (v20 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL), (v20 & 0xF) == 0)
            && (v20 & 0x40000000) != 0 )
          {
            v21 = v27;
            v23 = 96 * GreGetBitmapDpiScaleValue(v27);
            v12 |= v23 != (__int16)GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 284LL));
          }
          else
          {
            v21 = v27;
          }
          DeleteOrSetRedirectionBitmap(v7, (HSURF)v21, 1);
          v3 = v26;
          goto LABEL_21;
        }
LABEL_22:
        if ( v12 )
        {
LABEL_31:
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
          zzzLockDisplayAreaAndInvalidateDCCache(v7, 0LL);
          if ( v12 )
            xxxInternalInvalidate((struct tagWND *)v7, (HRGN)1, 0x401u);
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
        }
        v2 = a1;
      }
    }
    v4 += 32LL;
    v6 += 3;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return zzzEndDeferWinEventNotify();
}
