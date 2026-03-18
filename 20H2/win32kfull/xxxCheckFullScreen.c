/*
 * XREFs of xxxCheckFullScreen @ 0x1C00D3A38
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004596C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C004C5DC (GetWindowBordersWithDpiAwareness.c)
 *     GetDpiDependentMetric @ 0x1C005BD0C (GetDpiDependentMetric.c)
 *     GetWindowDpiLastNotify @ 0x1C00C9744 (GetWindowDpiLastNotify.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C00D3D00 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C00D3D3C (GetMonitorWorkRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C00D3E20 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00D3E5C (xxxRemoveFullScreen.c)
 *     RECTFromSIZERECT @ 0x1C00F8D5C (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C0119DA4 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C023EE78 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025D48C (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v17; // xmm6
  unsigned int v18; // eax
  __int64 top; // rdx
  __int64 left; // rcx
  __int64 v21; // r8
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // ecx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int DpiDependentMetric; // eax
  int v29; // edx
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v38; // rax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  struct tagRECT v42; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v43; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v44; // [rsp+48h] [rbp-79h] BYREF
  __int64 v45; // [rsp+58h] [rbp-69h]
  _QWORD v46[3]; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v47; // [rsp+78h] [rbp-49h] BYREF
  char v48[16]; // [rsp+88h] [rbp-39h] BYREF
  char v49[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v50; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v51; // [rsp+B8h] [rbp-9h] BYREF

  v4 = 0;
  v46[2] = 0LL;
  v51 = 0LL;
  v7 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  v45 = v7;
  v8 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v9 = v7;
    goto LABEL_3;
  }
  v47 = *(struct tagRECT *)GetScreenRectForWindow(v48, a1);
  if ( !(unsigned int)IsMaxedRect(&v47, a2) )
  {
    RECTFromSIZERECT(&v51, v32);
    v9 = MonitorFromRect(&v51, 1LL, *(unsigned int *)(*((_QWORD *)a1 + 5) + 288LL), v33);
LABEL_3:
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v8)
      || (CurrentProcess = PsGetCurrentProcess(v13, v12, v14),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    v46[0] = *(_QWORD *)(v11 + 416);
    *(_QWORD *)(v11 + 416) = v46;
    v46[1] = v9;
    HMLockObject(v9);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    v17 = *(struct tagRECT *)GetMonitorWorkRectForDpiContext(v49, v9, WindowCompositedDpiContext);
    v42 = v17;
    if ( (unsigned int)IsMaxedRect(&v42, a2) )
    {
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v50, v9, a1);
      v24 = *((_QWORD *)a1 + 5);
      v44 = *MonitorRectForWindow;
      if ( (*(_BYTE *)(v24 + 31) & 1) != 0
        && (SetOrClrWF(1, (__int64)a1, 0x340u, 1), v25 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v25 + 31) & 1) != 0)
        && (((*(_BYTE *)(v25 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v25 + 30)) != 0 )
      {
        v26 = *(_DWORD *)(v25 + 288) & 0xF;
        if ( v26 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v25 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v25 + 232) & 0x8000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v26
               && (v38 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify);
        v21 = DpiDependentMetric;
        if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v44.right
          || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v44.right)
          || (v29 = *((_DWORD *)a2 + 1), (int)(v29 + DpiDependentMetric) > v44.top)
          || (top = (unsigned int)(*((_DWORD *)a2 + 3) + v29), (int)top < v44.bottom) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
            v4 = xxxRemoveFullScreen(a1);
          if ( *((_DWORD *)a1 + 77) )
          {
            v43 = v17;
            ExtendRectByWindowMargin(a1, &v43, &v43);
            left = (unsigned int)v43.left;
            top = (unsigned int)v43.top;
            v39 = v43.right - v43.left;
            *(_DWORD *)a2 = v43.left;
            *((_DWORD *)a2 + 2) = v39;
            v40 = v43.bottom - top;
            *((_DWORD *)a2 + 1) = top;
            *((_DWORD *)a2 + 3) = v40;
          }
          else
          {
            WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
            bottom = v42.bottom;
            *(_DWORD *)a2 = v42.left - WindowBordersWithDpiAwareness;
            *((_DWORD *)a2 + 1) = v42.top - WindowBordersWithDpiAwareness;
            WindowBordersWithDpiAwareness *= 2;
            left = (unsigned int)(WindowBordersWithDpiAwareness - v42.top);
            top = (unsigned int)(left + bottom);
            *((_DWORD *)a2 + 2) = v42.right + WindowBordersWithDpiAwareness - v42.left;
            if ( v9 == v45 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            {
              v41 = *((_DWORD *)a2 + 3);
              if ( (int)top >= v41 )
                top = (unsigned int)v41;
            }
            *((_DWORD *)a2 + 3) = top;
          }
          goto LABEL_11;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
LABEL_11:
          ThreadUnlock1(left, top, v21);
          return v4;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(&v44, a2) )
      {
        goto LABEL_11;
      }
      v18 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0, (__int64)a1, 0x340u, 1);
      v18 = xxxRemoveFullScreen(a1);
    }
    v4 = v18;
    goto LABEL_11;
  }
  return 0LL;
}
