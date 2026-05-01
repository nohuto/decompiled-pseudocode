/*
 * XREFs of ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z @ 0x18009D3B0
 * Callers:
 *     ??$MakeAndInitialize@VShellFeedsExperienceManagerImpl@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x180099F88 (--$MakeAndInitialize@VShellFeedsExperienceManagerImpl@@UIInspectable@@AEAPEAUIServiceProvider@@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CE34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ShellFeedsExperienceManagerNotification@@QEAA@PEAVShellFeedsExperienceManagerImpl@@@Z @ 0x18009AC48 (--0ShellFeedsExperienceManagerNotification@@QEAA@PEAVShellFeedsExperienceManagerImpl@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009D0B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18009D0B0.c)
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFeedsExperienceManagerNotification@ShellFeeds@TwinUI@@@Z @ 0x18009D468 (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@PEAVIShellFe.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::RuntimeClassInitialize(
        ShellFeedsExperienceManagerImpl *this,
        struct IServiceProvider *a2)
{
  ShellFeedsExperienceManagerNotification *v4; // rax
  ShellFeedsExperienceManagerNotification *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (ShellFeedsExperienceManagerNotification *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = ShellFeedsExperienceManagerNotification::ShellFeedsExperienceManagerNotification(v4, this);
  v6 = ShellFeedsExperienceManagerImpl::RuntimeClassInitialize(
         this,
         a2,
         (struct TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification *)(((unsigned __int64)v5 + 8) & -(__int64)(v5 != 0LL)));
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v5);
  return v7;
}
