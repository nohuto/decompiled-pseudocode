/*
 * XREFs of ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180050150
 * Callers:
 *     ?FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004B9D4 (-FindAllUserAccounts@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVW.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<ContentManagement::IContentManagementBroker>(__int64 a1)
{
  HSTRING_HEADER *v2; // rax
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  _QWORD *v7; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8[3]; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8[2] = (const WCHAR *)-2LL;
  v8[0] = L"ContentManagement.ContentManagementBroker";
  v7 = 0LL;
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8);
  v3 = RoActivateInstance(v2[1].Reserved.Reserved1, &v7);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x66A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x18005022ELL);
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64))*v7)(v7, &GUID_44431c59_c5ec_4253_94f7_27563a8a242f, a1);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v5);
    goto LABEL_7;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v7 + 16LL))(v7, *v7);
  return a1;
}
