/*
 * XREFs of ??$GetActivationFactory@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIUserActivityPayloadFactory@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18004F768
 * Callers:
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004BA34 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::ApplicationModel::Internal::UserActivities::IUserActivityPayloadFactory>(
        const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rax
  int ActivationFactory; // eax
  const WCHAR *v5[4]; // [rsp+30h] [rbp-58h] BYREF
  HSTRING_HEADER v6; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v5[2] = (const WCHAR *)-2LL;
  v5[3] = a1;
  v5[0] = L"Windows.ApplicationModel.Internal.UserActivities.UserActivityPayload";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v6, v5);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_6ce42127_1c3d_4cfd_9c47_01e32e0e4f24, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x661,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x18004F80FLL);
  }
  return a1;
}
