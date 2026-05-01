/*
 * XREFs of ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x180347DD0
 * Callers:
 *     _lambda_5096affdfa8dd9dd59ff190700218634_::operator() @ 0x1800B130C (_lambda_5096affdfa8dd9dd59ff190700218634_--operator().c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18034FF98 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18013B3E8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18034B914 (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180475D9C (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::AnimateWindow(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        HWND a3,
        struct CExperienceManagerAnimationHelper *a4,
        bool a5)
{
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v12; // rax
  struct tagRECT *p_Rect; // rcx
  char IsAnimationEnabled; // r14
  int v15; // eax
  unsigned int v16; // esi
  struct tagRECT v17; // xmm0
  struct tagRECT Rect; // [rsp+40h] [rbp-51h] BYREF
  struct tagRECT v19; // [rsp+50h] [rbp-41h] BYREF
  int v20[4]; // [rsp+60h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+70h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  Rect = 0LL;
  if ( !GetWindowRect(a3, &Rect) )
  {
    v10 = 469LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v20 = Rect;
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(a3, 1u);
  if ( !v12 )
    return 2147500037LL;
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 477LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  p_Rect = (struct tagRECT *)v20;
  if ( !a5 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
  rc = *(struct tagRECT *)v20;
  v19 = Rect;
  OffsetRect(&rc, -v20[0], -v20[1]);
  OffsetRect(&v19, -v19.left, -v19.top);
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  if ( IsAnimationEnabled
    && (v15 = CExperienceManagerAnimationHelper::Begin(
                a4,
                a2,
                (!a5 << 29) | 0x1800008u,
                &rc,
                v20,
                &v19,
                &Rect,
                &mi.rcMonitor),
        v16 = v15,
        v15 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
  else
  {
    if ( a5 )
    {
      v17 = Rect;
      *((_BYTE *)this + 792) = IsAnimationEnabled;
    }
    else
    {
      v17 = 0LL;
      *((_BYTE *)this + 793) = IsAnimationEnabled;
    }
    *((struct tagRECT *)this + 30) = v17;
    return 0LL;
  }
}
