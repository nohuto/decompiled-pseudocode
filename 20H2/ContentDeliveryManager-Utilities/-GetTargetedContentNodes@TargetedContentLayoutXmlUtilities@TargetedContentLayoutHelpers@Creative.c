/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800A2674
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800A5B04 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180037394 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800A6930 (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64, HSTRING, __int64 **); // r15
  unsigned __int64 v5; // rdi
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  unsigned int i; // esi
  __int64 v10; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r9
  _QWORD *v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v28; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+38h] [rbp-48h]
  __int64 v32; // [rsp+40h] [rbp-40h]
  _QWORD *v33; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v32 = -2LL;
  v33 = a2;
  v31 = 0;
  v30 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 **))(*(_QWORD *)*a1 + 128LL);
  v5 = -1LL;
  do
    ++v5;
  while ( aStartTargetedc[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"start:TargetedContentTile", v5, &hstringHeader, &string);
  v6 = v4(v3, string, &v30);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v30 + 48))(v30, &v29);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8);
LABEL_42:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v31 = 1;
  for ( i = 0; i < v29; ++i )
  {
    v28 = 0LL;
    v10 = *v30;
    v28 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v10 + 56))(v30, i, &v28);
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
        (const char *)(unsigned int)v11);
      goto LABEL_40;
    }
    v12 = a2[1];
    if ( (unsigned __int64)&v28 >= v12 || *a2 > (unsigned __int64)&v28 )
    {
      v21 = a2[2];
      v22 = (_QWORD *)a2[1];
      if ( v12 == v21 && !((__int64)(v21 - v12) >> 3) )
      {
        v23 = (__int64)(v12 - *a2) >> 3;
        if ( v23 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v24 = v23 + 1;
        v25 = (v21 - *a2) >> 3;
        v26 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v25 >> 1) >= v25 )
          v26 = v25 + (v25 >> 1);
        if ( v26 >= v24 )
          v24 = v26;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v24);
        v22 = (_QWORD *)a2[1];
      }
      *v22 = v28;
      v20 = v28;
      if ( !v28 )
        goto LABEL_32;
    }
    else
    {
      v13 = ((__int64)&v28 - *a2) >> 3;
      v14 = a2[2];
      v15 = (_QWORD *)a2[1];
      if ( v12 == v14 && !((__int64)(v14 - v12) >> 3) )
      {
        v16 = (__int64)(v12 - *a2) >> 3;
        if ( v16 == 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_42;
        v17 = v16 + 1;
        v18 = (v14 - *a2) >> 3;
        v19 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v18 >> 1) >= v18 )
          v19 = v18 + (v18 >> 1);
        if ( v19 >= v17 )
          v17 = v19;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v17);
        v15 = (_QWORD *)a2[1];
      }
      v20 = *(_QWORD *)(*a2 + 8 * v13);
      *v15 = v20;
      if ( !v20 )
        goto LABEL_31;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
LABEL_31:
    v20 = v28;
LABEL_32:
    a2[1] += 8LL;
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  return a2;
}
