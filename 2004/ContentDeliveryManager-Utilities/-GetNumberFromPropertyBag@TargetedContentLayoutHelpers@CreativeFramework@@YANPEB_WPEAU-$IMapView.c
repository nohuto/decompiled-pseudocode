/*
 * XREFs of ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800A51CC
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800A5314 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
double __fastcall CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
        const WCHAR *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 (__fastcall *v5)(__int64, PVOID, _BYTE *); // rbx
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  const WCHAR *v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER v18; // [rsp+40h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v17[1] = -2LL;
  v16 = a1;
  *a3 = 0;
  v17[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)a2 + 64LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16);
  v7 = v5(a2, v6[1].Reserved.Reserved1, a3);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_9;
  if ( !*a3 )
    return *(double *)v17;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)a2 + 48LL);
  v15 = 0LL;
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v18, &v16);
  v11 = v9(a2, v10[1].Reserved.Reserved1, &v15);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x140,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800A530BLL);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v15 + 80LL))(v15, v17);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
LABEL_9:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x13C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_10;
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return *(double *)v17;
}
