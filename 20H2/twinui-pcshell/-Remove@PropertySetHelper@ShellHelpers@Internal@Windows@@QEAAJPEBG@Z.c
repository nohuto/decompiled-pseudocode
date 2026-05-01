/*
 * XREFs of ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x180040FC8
 * Callers:
 *     _lambda_1499a186909557a83ff0f6afb6d3c526_::operator() @ 0x18004107C (_lambda_1499a186909557a83ff0f6afb6d3c526_--operator().c)
 * Callees:
 *     ?GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@4@@Z @ 0x180023D6C (-GetPropSetMap@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAPEAU-$IMap@PEAUHSTRING__.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  PVOID Reserved1; // rdi
  int PropSetMap; // ebx
  int v6; // eax
  const WCHAR *v8[2]; // [rsp+20h] [rbp-48h] BYREF
  HSTRING_HEADER v9; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8[0] = L"ApplicationMultiviewActivationPolicy";
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v9, v8, a3)[1].Reserved.Reserved1;
  v8[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  PropSetMap = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropSetMap(
                 (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))this,
                 (__int64)v8);
  if ( PropSetMap >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(const WCHAR *, PVOID))(*(_QWORD *)v8[0] + 88LL))(v8[0], Reserved1);
    PropSetMap = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B6,
        (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v6,
        (int)v8[0]);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  if ( PropSetMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BB,
      (unsigned int)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
      (const char *)(unsigned int)PropSetMap,
      (int)v8[0]);
  return (unsigned int)PropSetMap;
}
