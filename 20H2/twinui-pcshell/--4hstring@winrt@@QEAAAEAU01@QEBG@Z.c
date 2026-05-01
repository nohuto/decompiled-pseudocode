/*
 * XREFs of ??4hstring@winrt@@QEAAAEAU01@QEBG@Z @ 0x180097C7C
 * Callers:
 *     _anonymous_namespace_::GetScreenClippingAUMID @ 0x1801E8058 (_anonymous_namespace_--GetScreenClippingAUMID.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008C1A8 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1801E727C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 */

HSTRING *__fastcall winrt::hstring::operator=(HSTRING *a1, HSTRING a2)
{
  HSTRING *v3; // rax
  HSTRING v4; // rbx
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = (HSTRING *)winrt::hstring::hstring(
                    (winrt::hstring *)&v6,
                    L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!ScreenClipping");
  if ( a1 != v3 )
  {
    v4 = *v3;
    *v3 = 0LL;
    winrt::handle_type<winrt::impl::hstring_traits>::close(a1);
    *a1 = v4;
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v6);
  return a1;
}
