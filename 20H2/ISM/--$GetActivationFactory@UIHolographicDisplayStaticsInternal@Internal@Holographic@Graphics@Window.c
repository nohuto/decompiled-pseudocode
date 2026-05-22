/*
 * XREFs of ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x18008BB10
 * Callers:
 *     ?EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18008C288 (-EnsureFrameOfReference@MPCHeadMovementDetector@@AEAA_NXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18007F368 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F53C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Graphics::Holographic::Internal::IHolographicDisplayStaticsInternal>(
        const WCHAR *a1,
        __int64 a2,
        unsigned int a3)
{
  HSTRING_HEADER *v4; // rax
  int ActivationFactory; // eax
  const WCHAR *v7[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7[2] = a1;
  v7[0] = L"Windows.Graphics.Holographic.HolographicDisplay";
  *(_QWORD *)a1 = 0LL;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7, a3);
  ActivationFactory = RoGetActivationFactory(v4[1].Reserved.Reserved1, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, a1);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      1633LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
  return a1;
}
