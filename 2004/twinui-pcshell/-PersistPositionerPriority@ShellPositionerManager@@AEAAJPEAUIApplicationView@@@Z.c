/*
 * XREFs of ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180025180
 * Callers:
 *     ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x180025040 (-UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority.c)
 *     ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803D3FE0 (-ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHEL.c)
 *     ?ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@_N@Z @ 0x1803D41EC (-ChangePositionerForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_T.c)
 *     ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1803D66E0 (-SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z.c)
 *     ?UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1803D6C04 (-UpdatePositionerPriorityForFrameworkViewType@ShellPositionerManager@@AEAAJPEAUIShellPositionerP.c)
 * Callees:
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x180017B18 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039250 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180139C44 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1803E8C60 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::PersistPositionerPriority(
        ShellPositionerManager *this,
        struct IApplicationView *a2)
{
  void *v4; // rdi
  int LastErrorFailHr; // ebx
  int v6; // eax
  unsigned int v7; // ebx
  struct IApplicationView *v8; // rdx
  HWND v9; // rax
  wil::details *v10; // rcx
  __int64 v11; // rcx
  struct IApplicationView *v13; // rdx
  HWND WindowForView; // rax
  unsigned int PropW; // eax
  const struct _GUID *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rdx
  int savedregs; // [rsp+20h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  void *v25; // [rsp+58h] [rbp+38h] BYREF
  __int64 v26; // [rsp+60h] [rbp+40h] BYREF
  void *v27; // [rsp+68h] [rbp+48h]

  v4 = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, void **))(*(_QWORD *)a2 + 264LL))(a2, &v25) >= 0 )
    goto LABEL_2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v25 = 0LL;
  WindowForView = ApplicationViewHelpers::GetWindowForView(a2, v13);
  if ( WindowForView )
  {
    PropW = (unsigned int)GetPropW(WindowForView, L"ShellPositionerManager:PriorityList");
    if ( PropW )
    {
      v17 = PositionerPriority_CreateInstance(PropW, v16, &v25);
      if ( v17 >= 0 )
        goto LABEL_25;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x503,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v17,
        savedregs);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  v19 = PositionerPriority_CreateInstance(*((_DWORD *)this + 36), v18, &v25);
  LastErrorFailHr = v19;
  if ( v19 < 0 )
  {
    v20 = 1075LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v19,
      savedregs);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
    goto LABEL_7;
  }
LABEL_25:
  v19 = (*(__int64 (__fastcall **)(struct IApplicationView *, void *))(*(_QWORD *)a2 + 272LL))(a2, v25);
  LastErrorFailHr = v19;
  if ( v19 < 0 )
  {
    v20 = 1079LL;
    goto LABEL_24;
  }
LABEL_2:
  v4 = v25;
  if ( v25 )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)v25 + 8LL))(v25);
    v4 = v25;
  }
  v27 = v4;
  if ( v4 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  LastErrorFailHr = 0;
LABEL_7:
  if ( LastErrorFailHr < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E6,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)LastErrorFailHr,
      savedregs);
    goto LABEL_14;
  }
  v26 = 0LL;
  v6 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v4)(v4, &GUID_12c8e92e_f569_48ec_9d4d_56b96469e294, &v26);
  LastErrorFailHr = v6;
  if ( v6 < 0 )
  {
    v21 = (unsigned int)v6;
    v22 = 1258LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v21,
      savedregs);
    goto LABEL_12;
  }
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 24LL))(v26);
  v9 = ApplicationViewHelpers::GetWindowForView(a2, v8);
  if ( !v9 )
  {
    LastErrorFailHr = -2147023728;
    v21 = 2147943568LL;
    v22 = 1265LL;
    goto LABEL_30;
  }
  if ( SetPropW(v9, L"ShellPositionerManager:PriorityList", (HANDLE)v7) )
    LastErrorFailHr = 0;
  else
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v10);
LABEL_12:
  v11 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
LABEL_14:
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)LastErrorFailHr;
}
