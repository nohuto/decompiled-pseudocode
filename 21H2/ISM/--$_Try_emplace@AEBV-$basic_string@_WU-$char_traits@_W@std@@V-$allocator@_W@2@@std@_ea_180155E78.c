/*
 * XREFs of ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180155E78
 * Callers:
 *     ??R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1801584BC (--R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 *     _lambda_2f7ec991c440bb20d82758962485f4cf_::operator() @ 0x1801586A0 (_lambda_2f7ec991c440bb20d82758962485f4cf_--operator().c)
 *     _lambda_bc1cdd8537cae97bcdb95bd5aa776a35_::operator() @ 0x18015875C (_lambda_bc1cdd8537cae97bcdb95bd5aa776a35_--operator().c)
 * Callees:
 *     ??RCaseInsensitiveStringLess@Holographic@Internal@Windows@@QEBA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x1800C5C9C (--RCaseInsensitiveStringLess@Holographic@Internal@Windows@@QEBA_NAEBV-$basic_string@_WU-$char_tr.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801564F8 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBV-$basic_string@_WU-$cha_ea_1801564F8.c)
 */

__int64 __fastcall std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::_Try_emplace<std::wstring const &,>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  __int64 *v4; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rbx
  _QWORD *v10; // rax
  _QWORD *v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(__int64 **)a1;
  v8 = *(__int64 **)a1;
  v9 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  if ( !*((_BYTE *)v9 + 25) )
  {
    do
    {
      if ( Windows::Internal::Holographic::CaseInsensitiveStringLess::operator()(a1, v9 + 4, a3) )
      {
        v9 = (__int64 *)v9[2];
      }
      else
      {
        v4 = v9;
        v9 = (__int64 *)*v9;
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
    v8 = *(__int64 **)a1;
  }
  if ( v4 == v8 || Windows::Internal::Holographic::CaseInsensitiveStringLess::operator()(a1, a3, v4 + 4) )
  {
    v12 = a3;
    v10 = (_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<std::wstring const &>,std::tuple<>>(
                      a1,
                      (unsigned int)&v13,
                      (_DWORD)v4,
                      a4,
                      (__int64)&v12);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v10;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
