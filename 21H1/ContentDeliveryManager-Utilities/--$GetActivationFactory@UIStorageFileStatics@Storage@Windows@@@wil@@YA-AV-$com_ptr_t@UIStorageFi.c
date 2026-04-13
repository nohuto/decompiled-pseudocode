/*
 * XREFs of ??$GetActivationFactory@UIStorageFileStatics@Storage@Windows@@@wil@@YA?AV?$com_ptr_t@UIStorageFileStatics@Storage@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18007B9A8
 * Callers:
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x18007A740 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z @ 0x1800989D4 (-CopyFaviconToEdge@@YAJPEAUHSTRING__@@PEAPEAU1@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
const WCHAR *__fastcall wil::GetActivationFactory<Windows::Storage::IStorageFileStatics>(const WCHAR *a1)
{
  HSTRING_HEADER *v2; // rax
  int ActivationFactory; // eax
  const WCHAR *v5[3]; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER v6; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v5[1] = (const WCHAR *)-2LL;
  v5[2] = a1;
  v5[0] = L"Windows.Storage.StorageFile";
  *(_QWORD *)a1 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v6, v5);
  ActivationFactory = RoGetActivationFactory(v2[1].Reserved.Reserved1, &GUID_5984c710_daf2_43c8_8bb4_a4d3eacfd03f, a1);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x661,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)ActivationFactory);
    JUMPOUT(0x18007BA46LL);
  }
  return a1;
}
