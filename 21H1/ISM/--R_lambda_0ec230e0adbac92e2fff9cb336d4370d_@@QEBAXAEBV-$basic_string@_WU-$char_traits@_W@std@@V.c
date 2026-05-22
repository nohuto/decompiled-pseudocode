/*
 * XREFs of ??R_lambda_0ec230e0adbac92e2fff9cb336d4370d_@@QEBAXAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18015851C
 * Callers:
 *     ??$LockExclusive@V_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@HolographicDeviceSnapshot@Holographic@Internal@Windows@@KAX$$QEAV_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@Z @ 0x18014F684 (--$LockExclusive@V_lambda_ed6a7cdcc708de0d2bf982d91253a679_@@@HolographicDeviceSnapshot@Holograp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x1800C5708 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800C5D00 (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 *     ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x180155708 (--$_Insert_nohint@U-$pair@$$CBU_GUID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2.c)
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180155ED8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180155ED8.c)
 */

// Hidden C++ exception states: #wind=1
LARGE_INTEGER *__fastcall _lambda_0ec230e0adbac92e2fff9cb336d4370d_::operator()(__int64 a1, LARGE_INTEGER *a2)
{
  __int64 v4; // r8
  int v5; // r9d
  LARGE_INTEGER *QuadPart; // rbx
  __int64 v7; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-50h] BYREF
  __int128 v10; // [rsp+48h] [rbp-40h] BYREF
  void *v11; // [rsp+58h] [rbp-30h] BYREF
  unsigned __int64 v12; // [rsp+70h] [rbp-18h]

  v10 = *(_OWORD *)*(_QWORD *)(a1 + 8);
  std::wstring::wstring((__int64)&v11);
  std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Not_a_node_tag>(
    (_QWORD *)(*(_QWORD *)a1 + 88LL),
    (__int64)&PerformanceCount,
    v4,
    &v10);
  if ( v12 >= 8 )
    std::_Deallocate<16,0>(v11, (const struct std::nothrow_t *)(2 * v12 + 2));
  std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::_Try_emplace<std::wstring const &,>(
    *(_QWORD *)a1 + 8LL,
    (__int64)&PerformanceCount,
    *(_QWORD **)(a1 + 16),
    v5);
  QuadPart = (LARGE_INTEGER *)PerformanceCount.QuadPart;
  v7 = *(_QWORD *)(a1 + 8);
  *(_OWORD *)(PerformanceCount.QuadPart + 144) = *(_OWORD *)v7;
  QuadPart[20].LowPart = *(_DWORD *)(v7 + 16);
  QueryPerformanceCounter(&PerformanceCount);
  QuadPart[21] = PerformanceCount;
  Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(
    QuadPart + 8,
    *(LARGE_INTEGER **)(a1 + 16));
  return Windows::Internal::Holographic::TimestampedProperty<std::wstring>::operator=(QuadPart + 13, a2);
}
