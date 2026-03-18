/*
 * XREFs of xxxCheckFullScreen @ 0x1C008E698
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006FA2C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0023434 (GetMonitorRectForWindow.c)
 *     _MonitorFromRect @ 0x1C0024B70 (_MonitorFromRect.c)
 *     GetWindowDpiLastNotify @ 0x1C0024D1C (GetWindowDpiLastNotify.c)
 *     ?IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z @ 0x1C008E960 (-IsMaxedRect@@YAHPEAUtagRECT@@PEBUtagSIZERECT@@@Z.c)
 *     GetMonitorWorkRectForDpiContext @ 0x1C008E99C (GetMonitorWorkRectForDpiContext.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x1C008EA80 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C008EABC (xxxRemoveFullScreen.c)
 *     GetDpiDependentMetric @ 0x1C00A002C (GetDpiDependentMetric.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00AD8A0 (GetWindowBordersWithDpiAwareness.c)
 *     RECTFromSIZERECT @ 0x1C00FEA14 (RECTFromSIZERECT.c)
 *     xxxAddFullScreen @ 0x1C01192D4 (xxxAddFullScreen.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0240118 (-ExtendRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 *     GetScreenRectForWindow @ 0x1C025EAA0 (GetScreenRectForWindow.c)
 */

__int64 __fastcall xxxCheckFullScreen(struct tagWND *a1, struct tagSIZERECT *a2)
{
  unsigned int v2; // r14d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  unsigned int WindowCompositedDpiContext; // eax
  struct tagRECT v15; // xmm6
  unsigned int v16; // eax
  __int64 top; // rdx
  __int64 left; // rcx
  __int64 v19; // r8
  struct tagRECT *MonitorRectForWindow; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // ecx
  unsigned int WindowDpiLastNotify; // eax
  unsigned int DpiDependentMetric; // eax
  int v28; // edx
  int WindowBordersWithDpiAwareness; // eax
  LONG bottom; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v33; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v35; // rax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  struct tagRECT v39; // [rsp+28h] [rbp-99h] BYREF
  struct tagRECT v40; // [rsp+38h] [rbp-89h] BYREF
  struct tagRECT v41; // [rsp+48h] [rbp-79h] BYREF
  __int64 v42; // [rsp+58h] [rbp-69h]
  _QWORD v43[3]; // [rsp+60h] [rbp-61h] BYREF
  struct tagRECT v44; // [rsp+78h] [rbp-49h] BYREF
  char v45[16]; // [rsp+88h] [rbp-39h] BYREF
  char v46[16]; // [rsp+98h] [rbp-29h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-19h] BYREF
  struct tagRECT v48; // [rsp+B8h] [rbp-9h] BYREF

  v2 = 0;
  v43[2] = 0LL;
  v48 = 0LL;
  v5 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  v42 = v5;
  v6 = gpDispInfo;
  if ( *(_DWORD *)*gpDispInfo <= 1u )
  {
    v7 = v5;
    goto LABEL_3;
  }
  v44 = *(struct tagRECT *)GetScreenRectForWindow(v45, a1);
  if ( !(unsigned int)IsMaxedRect(&v44, a2) )
  {
    RECTFromSIZERECT(&v48);
    v7 = MonitorFromRect(&v48, 1LL, *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL));
LABEL_3:
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v6)
      || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v33),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v9 = *ThreadWin32Thread;
    }
    v43[0] = *(_QWORD *)(v9 + 408);
    *(_QWORD *)(v9 + 408) = v43;
    v43[1] = v7;
    HMLockObject(v7);
    WindowCompositedDpiContext = GetWindowCompositedDpiContext(a1);
    v15 = *(struct tagRECT *)GetMonitorWorkRectForDpiContext(v46, v7, WindowCompositedDpiContext);
    v39 = v15;
    if ( (unsigned int)IsMaxedRect(&v39, a2) )
    {
      MonitorRectForWindow = (struct tagRECT *)GetMonitorRectForWindow(&v47, v7, a1);
      v22 = *((_QWORD *)a1 + 5);
      v41 = *MonitorRectForWindow;
      if ( (*(_BYTE *)(v22 + 31) & 1) != 0
        && (SetOrClrWF(1LL, a1, 832LL, 1LL), v24 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v24 + 31) & 1) != 0)
        && (((*(_BYTE *)(v24 + 30) & 0xC0) == 0xC0) & *(_BYTE *)(v24 + 30)) != 0 )
      {
        v25 = *(_DWORD *)(v24 + 288) & 0xF;
        if ( v25 == 3 )
        {
          WindowDpiLastNotify = (*(_DWORD *)(v24 + 288) >> 8) & 0x1FF;
        }
        else if ( (*(_DWORD *)(v24 + 232) & 0x8000000) != 0 )
        {
          WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)a1);
        }
        else if ( !v25
               && (v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 448LL)) != 0
               && (*(_DWORD *)(**(_QWORD **)(v35 + 8) + 64LL) & 1) != 0 )
        {
          WindowDpiLastNotify = 96;
        }
        else
        {
          WindowDpiLastNotify = *(unsigned __int16 *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 284LL);
        }
        DpiDependentMetric = GetDpiDependentMetric(2LL, WindowDpiLastNotify, v23);
        v19 = DpiDependentMetric;
        if ( (int)(*(_DWORD *)a2 + DpiDependentMetric) > v41.right
          || (left = (unsigned int)(*((_DWORD *)a2 + 2) + *(_DWORD *)a2), (int)left < v41.right)
          || (v28 = *((_DWORD *)a2 + 1), (int)(v28 + DpiDependentMetric) > v41.top)
          || (top = (unsigned int)(*((_DWORD *)a2 + 3) + v28), (int)top < v41.bottom) )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
            v2 = xxxRemoveFullScreen(a1);
          if ( *((_DWORD *)a1 + 77) )
          {
            v40 = v15;
            ExtendRectByWindowMargin(a1, &v40, &v40);
            left = (unsigned int)v40.left;
            top = (unsigned int)v40.top;
            v36 = v40.right - v40.left;
            *(_DWORD *)a2 = v40.left;
            *((_DWORD *)a2 + 2) = v36;
            v37 = v40.bottom - top;
            *((_DWORD *)a2 + 1) = top;
            *((_DWORD *)a2 + 3) = v37;
          }
          else
          {
            WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
            bottom = v39.bottom;
            *(_DWORD *)a2 = v39.left - WindowBordersWithDpiAwareness;
            *((_DWORD *)a2 + 1) = v39.top - WindowBordersWithDpiAwareness;
            WindowBordersWithDpiAwareness *= 2;
            left = (unsigned int)(WindowBordersWithDpiAwareness - v39.top);
            top = (unsigned int)(left + bottom);
            *((_DWORD *)a2 + 2) = v39.right + WindowBordersWithDpiAwareness - v39.left;
            if ( v7 == v42 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
            {
              v38 = *((_DWORD *)a2 + 3);
              if ( (int)top >= v38 )
                top = (unsigned int)v38;
            }
            *((_DWORD *)a2 + 3) = top;
          }
          goto LABEL_11;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 0x40) != 0 )
        {
LABEL_11:
          ThreadUnlock1(left, top, v19);
          return v2;
        }
      }
      else if ( !(unsigned int)IsMaxedRect(&v41, a2) )
      {
        goto LABEL_11;
      }
      v16 = xxxAddFullScreen(a1);
    }
    else
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
        SetOrClrWF(0LL, a1, 832LL, 1LL);
      v16 = xxxRemoveFullScreen(a1);
    }
    v2 = v16;
    goto LABEL_11;
  }
  return 0LL;
}
