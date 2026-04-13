/*
 * XREFs of ??$GetActivationFactory@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180019EF4
 * Callers:
 *     ?FindAllWebAccountsAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z @ 0x180010DA0 (-FindAllWebAccountsAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU-$IAsyncOperation@PEAU-$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(
        const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rax
  int ActivationFactory; // eax
  const WCHAR *v5[4]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v6; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5[2] = (const WCHAR *)-2LL;
  v5[3] = a1;
  v5[0] = L"Windows.Internal.Security.Authentication.Web.TokenBrokerInternal";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v6, v5);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_07650a66_66ea_489d_aa90_0dabc75f3567, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x661,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x180019F9BLL);
  }
  return a1;
}
