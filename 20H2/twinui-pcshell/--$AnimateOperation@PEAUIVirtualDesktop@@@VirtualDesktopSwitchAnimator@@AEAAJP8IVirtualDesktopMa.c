/*
 * XREFs of ??$AnimateOperation@PEAUIVirtualDesktop@@@VirtualDesktopSwitchAnimator@@AEAAJP8IVirtualDesktopManagerPrivate@@EAAJPEAUIVirtualDesktop@@@Z0W4VirtualDesktopSwitchDirection@@0@Z @ 0x18043FDBC
 * Callers:
 *     ?SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@@Z @ 0x180440330 (-SwitchDesktop@VirtualDesktopSwitchAnimator@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDir.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??_9IVirtualDesktopManagerPrivate@@$BPI@AA @ 0x18010042C (--_9IVirtualDesktopManagerPrivate@@$BPI@AA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopSwitchAnimator::AnimateOperation<IVirtualDesktop *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  int v7; // eax
  HWND ShellWindow; // rax
  int v9; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, __int64, __int64, __int64 *); // rbx
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  __int64 v22; // [rsp+58h] [rbp+10h] BYREF

  v22 = a2;
  v7 = DwmpBeginTransitionRequestWithGUID(90LL, &unk_180543AE8);
  v21 = 0LL;
  if ( v7 >= 0 )
  {
    ShellWindow = GetShellWindow();
    v9 = DwmpTransitionWindow(ShellWindow, 76 - (unsigned int)(a4 != 0));
    if ( v9 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2C,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_10;
    }
    DwmFlush();
    v22 = 0LL;
    v10 = *(_QWORD *)(a1 + 16);
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 224LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v12 = v11(v10, &v22);
    v13 = retaddr;
    if ( v12 >= 0 )
    {
      v15 = *(_QWORD *)(a1 + 24);
      v16 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v15 + 40LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      v12 = v16(v15, v22, a3, &v21);
      v13 = retaddr;
      if ( v12 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
        goto LABEL_10;
      }
      v14 = 52LL;
    }
    else
    {
      v14 = 50LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v13,
      (void *)v14,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_9;
  }
LABEL_10:
  v17 =  IVirtualDesktopManagerPrivate::`vcall'{248,{flat}}(*(_QWORD *)(a1 + 16));
  v18 = v17;
  if ( v17 >= 0 )
  {
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
    v18 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopswitchanimator.cpp",
      (const char *)(unsigned int)v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  return v18;
}
