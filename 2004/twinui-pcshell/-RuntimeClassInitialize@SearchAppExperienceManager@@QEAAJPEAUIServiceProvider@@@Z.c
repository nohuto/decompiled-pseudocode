/*
 * XREFs of ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801F6B1C
 * Callers:
 *     ??$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801F5B10 (--$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009BE60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_18009BE60.c)
 *     ??0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z @ 0x1801F60EC (--0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1801F6BD4 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::RuntimeClassInitialize(
        SearchAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  SearchAppExperienceManagerNotification *v4; // rax
  SearchAppExperienceManagerNotification *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (SearchAppExperienceManagerNotification *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = 0LL;
  if ( v4 )
    v5 = SearchAppExperienceManagerNotification::SearchAppExperienceManagerNotification(v4, this);
  v6 = SearchAppExperienceManager::RuntimeClassInitialize(
         this,
         a2,
         (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)(((unsigned __int64)v5 + 8) & -(__int64)(v5 != 0LL)));
  v7 = v6;
  if ( v6 >= 0 )
    v7 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v5);
  return v7;
}
