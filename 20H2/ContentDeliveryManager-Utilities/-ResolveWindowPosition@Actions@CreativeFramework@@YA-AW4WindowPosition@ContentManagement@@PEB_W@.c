/*
 * XREFs of ?ResolveWindowPosition@Actions@CreativeFramework@@YA?AW4WindowPosition@ContentManagement@@PEB_W@Z @ 0x18008CD14
 * Callers:
 *     ?GetPositionParameters@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x18008D4CC (-GetPositionParameters@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IMapView@W4WindowPosition@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180006484 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

__int64 __fastcall CreativeFramework::Actions::ResolveWindowPosition(const WCHAR *a1)
{
  wchar_t **v2; // rbx
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = &off_180197970;
  while ( CompareStringOrdinal(a1, -1, *v2, -1, 1) != 2 )
  {
    v2 += 2;
    if ( v2 == (wchar_t **)&unk_1801979B0 )
    {
      v4 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)v4);
      JUMPOUT(0x18008CD92LL);
    }
  }
  return *((unsigned int *)v2 + 2);
}
