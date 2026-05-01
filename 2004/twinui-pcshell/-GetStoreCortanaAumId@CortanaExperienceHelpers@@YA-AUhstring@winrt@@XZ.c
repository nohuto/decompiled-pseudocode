/*
 * XREFs of ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801F3C54
 * Callers:
 *     _lambda_5714c418893fc4a70a6a077a7390b140_::operator() @ 0x180097008 (_lambda_5714c418893fc4a70a6a077a7390b140_--operator().c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801F30F0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801F44B0 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801F4F64 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1800669F0 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C628 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801E7CAC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z @ 0x1801F4418 (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YAJPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
HSTRING __fastcall CortanaExperienceHelpers::GetStoreCortanaAumId(HSTRING a1, bool *a2)
{
  int IsTestAppConfiguredAsReplacement; // eax
  HSTRING *v4; // rcx
  char v5; // bl
  HSTRING v6; // rax
  char v7; // bl
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING v10; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v11; // [rsp+48h] [rbp+10h] BYREF

  v10 = a1;
  LOBYTE(v10) = 0;
  IsTestAppConfiguredAsReplacement = CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(
                                       (CortanaExperienceHelpers::Testing *)&v10,
                                       a2);
  if ( IsTestAppConfiguredAsReplacement < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"internal\\shellcommonshell\\inc\\cortana\\CortanaAvailabilityHelpers.h",
      (const char *)(unsigned int)IsTestAppConfiguredAsReplacement);
  if ( (_BYTE)v10 )
  {
    winrt::hstring::hstring((winrt::hstring *)&v10, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App");
    v4 = &v10;
    v5 = 9;
  }
  else
  {
    CortanaExperienceHelpers::TryGetCortanaAumid(&v11);
    v4 = &v11;
    v5 = 18;
  }
  v6 = *v4;
  *v4 = 0LL;
  *(_QWORD *)a1 = v6;
  v7 = v5 | 4;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v11);
  }
  if ( (v7 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v10);
  return a1;
}
