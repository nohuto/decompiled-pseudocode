/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8
 * Callers:
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235090 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235E74 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C02395F8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C003DD8C (GetMonitorRectForWindow.c)
 *     SubtractRect @ 0x1C003F10C (SubtractRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C10 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00CAD64 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GetMonitorMenuRectForWindow @ 0x1C025D450 (GetMonitorMenuRectForWindow.c)
 */

_QWORD *__fastcall MNGetPopupBoundsRect(int ***a1, __int64 a2, _OWORD *a3, int a4)
{
  __int128 v8; // xmm0
  int **v9; // rax
  __int128 v10; // xmm0
  __int128 *v11; // rax
  __int128 v12; // xmm0
  int **v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax
  __int64 v30; // [rsp+20h] [rbp-49h] BYREF
  __int128 v31; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v32[16]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v33; // [rsp+48h] [rbp-21h] BYREF
  __int128 v34; // [rsp+60h] [rbp-9h] BYREF
  __int128 v35; // [rsp+70h] [rbp+7h] BYREF
  __int128 v36; // [rsp+80h] [rbp+17h] BYREF

  v8 = *GetMonitorRectForWindow(&v31, a2, *((const struct tagWND **)**a1 + 2));
  v9 = *a1;
  v34 = v8;
  if ( **v9 >= 0 )
  {
    v11 = &v36;
    v36 = v34;
  }
  else
  {
    v10 = *(_OWORD *)GetMonitorMenuRectForWindow(v32, a2, *((_QWORD *)**a1 + 2));
    v11 = &v35;
    v35 = v10;
  }
  v12 = *v11;
  v13 = *a1;
  v33 = v12;
  v14 = *(_QWORD *)(*((_QWORD *)*v13 + 2) + 40LL);
  if ( (*(_DWORD *)(v14 + 288) & 0xF) != 2 )
  {
    v15 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)**a1 + 2) + 40LL) + 256LL));
    v30 = v15;
    if ( v15 )
    {
      if ( v15 != a2 )
      {
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14);
        if ( ***a1 >= 0 || IsRectEmptyInl((const struct tagRECT *)(a2 + 296)) )
          v18 = *(_QWORD *)(a2 + 40) + 28LL;
        else
          v18 = v17;
        PhysicalToLogicalDPIRect(&v33, v18, CurrentThreadDpiAwarenessContext, &v30);
        if ( !a4 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v34, *(_QWORD *)(a2 + 40) + 28LL, CurrentThreadDpiAwarenessContext, &v30);
      }
    }
  }
  if ( a4 )
  {
    SubtractRect((__int64)a3, (__int64)&v34, (__int64)&v33);
    goto LABEL_16;
  }
LABEL_15:
  *a3 = v33;
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  v20 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (CurrentProcess = PsGetCurrentProcess(v22, v21, v23),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v20 = *ThreadWin32Thread;
  }
  if ( *a1 != (int **)gSmartObjNullRef && !--*((_DWORD *)*a1 + 2) )
  {
    if ( *((_BYTE *)*a1 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v20 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v20 + 1472) = result;
  }
  return result;
}
