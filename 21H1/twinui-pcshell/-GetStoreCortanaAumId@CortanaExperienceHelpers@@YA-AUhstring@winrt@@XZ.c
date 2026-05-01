/*
 * XREFs of ?GetStoreCortanaAumId@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1801D0124
 * Callers:
 *     _lambda_5714c418893fc4a70a6a077a7390b140_::operator() @ 0x180095C98 (_lambda_5714c418893fc4a70a6a077a7390b140_--operator().c)
 *     ?CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801CF5C0 (-CreateCortanaAltTabProxyWindow@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ @ 0x1801D0990 (-LaunchOrCloseAppAsync@CortanaStoreAppExperienceManager@@UEAAJXZ.c)
 *     ?SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z @ 0x1801D1444 (-SetDefaultIconForProxyWindowThumbnail@CortanaStoreAppExperienceManager@@CAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x1800662D0 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008BF68 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801C41EC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ @ 0x1801D094C (-IsTestAppConfiguredAsReplacement@Testing@CortanaExperienceHelpers@@YA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
CortanaExperienceHelpers::Testing *__fastcall CortanaExperienceHelpers::GetStoreCortanaAumId(
        CortanaExperienceHelpers::Testing *a1)
{
  HSTRING *v2; // rcx
  char v3; // bl
  HSTRING v4; // rax
  char v5; // bl
  CortanaExperienceHelpers::Testing *v7; // [rsp+40h] [rbp+8h] BYREF
  HSTRING v8; // [rsp+48h] [rbp+10h] BYREF

  v7 = a1;
  if ( CortanaExperienceHelpers::Testing::IsTestAppConfiguredAsReplacement(a1) )
  {
    winrt::hstring::hstring((winrt::hstring *)&v8, L"3242f7d9-db60-4380-a379-4205ea768bfc_zs4v8rx04ex0m!App");
    v2 = &v8;
    v3 = 9;
  }
  else
  {
    CortanaExperienceHelpers::TryGetCortanaAumid(&v7);
    v2 = (HSTRING *)&v7;
    v3 = 18;
  }
  v4 = *v2;
  *v2 = 0LL;
  *(_QWORD *)a1 = v4;
  v5 = v3 | 4;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    winrt::handle_type<winrt::impl::hstring_traits>::close((HSTRING *)&v7);
  }
  if ( (v5 & 1) != 0 )
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
  return a1;
}
