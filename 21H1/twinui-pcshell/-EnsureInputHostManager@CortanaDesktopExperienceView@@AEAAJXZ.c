/*
 * XREFs of ?EnsureInputHostManager@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801E86F0
 * Callers:
 *     ?ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAUIInspectable@@@Z @ 0x1801E7E80 (-ControlGained@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1801ECB08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801E867C (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::EnsureInputHostManager(CortanaDesktopExperienceView *this)
{
  __int64 *v1; // rdi
  int v3; // eax
  unsigned int v4; // esi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, SID *, GUID *, __int64 *); // rsi
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 128);
  if ( *((_QWORD *)this + 16) )
    return 0LL;
  v3 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x691,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v6 = *((_QWORD *)this + 15);
  v7 = *v1;
  v8 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  if ( *v1 )
  {
    *v1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v9 = v8(v6, &SID_InputHostLayout, &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25, v1);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x692,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
