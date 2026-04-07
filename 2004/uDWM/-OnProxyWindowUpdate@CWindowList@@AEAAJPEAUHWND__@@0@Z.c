/*
 * XREFs of ?OnProxyWindowUpdate@CWindowList@@AEAAJPEAUHWND__@@0@Z @ 0x180006588
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000D8C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006618 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800103D0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OnProxyWindowUpdate(CWindowList *this, HWND a2, HWND a3)
{
  __int64 v6; // rbp
  struct CWindowData *WindowDataByHwnd; // rbx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  struct CWindowData *v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = &CDesktopManager::s_csDwmInstance;
  v6 = 0LL;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
  if ( WindowDataByHwnd )
  {
    v12 = 0LL;
    if ( !a3 || (v12 = CWindowList::FindWindowDataByHwnd(this, a3)) != 0LL )
    {
      v13 = *((_QWORD *)WindowDataByHwnd + 74);
      if ( v13 )
      {
        v6 = *(_QWORD *)(v13 + 40);
        *(_QWORD *)(v13 + 600) = 0LL;
      }
      if ( a3 )
      {
        *((_QWORD *)WindowDataByHwnd + 74) = v12;
        v14 = *((_QWORD *)v12 + 48) == 0LL;
        *((_QWORD *)v12 + 75) = WindowDataByHwnd;
        if ( v14 )
          *((_BYTE *)v12 + 613) |= 0x10u;
      }
      else
      {
        *((_QWORD *)WindowDataByHwnd + 74) = 0LL;
      }
      v15 = (*(__int64 (__fastcall **)(_QWORD, HWND, HWND, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 65)
                                                                   + 112LL))(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 65),
              a2,
              a3,
              v6);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v8 = 0;
        goto LABEL_4;
      }
      v10 = (unsigned int)v15;
      v9 = 7090LL;
    }
    else
    {
      v8 = -2147024809;
      v9 = 7059LL;
      v10 = 2147942487LL;
    }
  }
  else
  {
    v8 = -2147024809;
    v9 = 7054LL;
    v10 = 2147942487LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)v10,
    v16);
LABEL_4:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v18);
  return v8;
}
