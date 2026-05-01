/*
 * XREFs of ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x180016B70
 * Callers:
 *     _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x1800150A0 (_lambda_1499a186909557a83ff0f6afb6d3c526_--operator().c)
 * Callees:
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x18002AC1C (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002F5AC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        const unsigned __int16 *a2)
{
  __int64 v3; // rdi
  int PropSetMap; // ebx
  int v5; // eax
  int v7[4]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v7 = L"ApplicationMultiviewActivationPolicy";
  v3 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, v7) + 24);
  *(_QWORD *)v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(this, v7);
  if ( PropSetMap >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)v7 + 88LL))(*(_QWORD *)v7, v3);
    PropSetMap = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v5,
        v7[0]);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v7);
  if ( PropSetMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropSetMap,
      v7[0]);
  return (unsigned int)PropSetMap;
}
