/*
 * XREFs of ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x18009AF58
 * Callers:
 *     _lambda_4a924f41398b24a36e92e39351e8429b_::operator() @ 0x18009B038 (_lambda_4a924f41398b24a36e92e39351e8429b_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
WCHAR *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(
        WCHAR *a1,
        const WCHAR *a2)
{
  HSTRING Reserved1; // rbx
  HSTRING_HEADER *v4; // rax
  HRESULT v5; // eax
  const WCHAR *v7[3]; // [rsp+28h] [rbp-70h] BYREF
  HSTRING_HEADER v8; // [rsp+40h] [rbp-58h] BYREF
  HSTRING_HEADER v9; // [rsp+60h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v7[1] = (const WCHAR *)-2LL;
  v7[2] = a1;
  v7[0] = a2;
  *(_QWORD *)a1 = 0LL;
  WindowsDeleteString(0LL);
  *(_QWORD *)a1 = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7)[1].Reserved.Reserved1;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, (const WCHAR **)off_1800FA3D0);
  v5 = WindowsConcatString((HSTRING)v4[1].Reserved.Reserved1, Reserved1, (HSTRING *)a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x18009B030LL);
  }
  return a1;
}
