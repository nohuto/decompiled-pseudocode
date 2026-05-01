/*
 * XREFs of ??$ActivateInstance@UIServiceHostComponent@@@wil@@YA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1801983C4
 * Callers:
 *     ?RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ @ 0x180199D3C (-RuntimeClassInitialize@DesktopBlueLightReductionManager@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIServiceHostComponent@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIServiceHostComponent@@Uerr_exception_policy@wil@@@1@XZ @ 0x180094B20 (--$query@UIServiceHostComponent@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall wil::ActivateInstance<IServiceHostComponent>(__int64 a1, __int64 a2, unsigned int a3)
{
  HSTRING_HEADER *v4; // rdi
  int v5; // eax
  __int64 v7[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v8; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v8 = L"Windows.Internal.Shell.BlueLightReduction.BlueLightReductionManager";
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, &v8, a3);
  v7[0] = 0LL;
  v5 = RoActivateInstance(v4[1].Reserved.Reserved1, v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1642LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v5);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IServiceHostComponent>(v7, a1);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v7);
  return a1;
}
