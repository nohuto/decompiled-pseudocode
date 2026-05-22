/*
 * XREFs of _lambda_127c0a03318944d5deebafe495b3f28d_::operator() @ 0x1801585D8
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_81a1f3a0b0089925dbb8abbd9e8c6b20___ @ 0x18014F4BC (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_81a1f3a0b008992.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180155DB4 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180155DB4.c)
 */

LARGE_INTEGER __fastcall lambda_127c0a03318944d5deebafe495b3f28d_::operator()(__int64 a1, _QWORD *a2)
{
  LARGE_INTEGER *v3; // rdi
  LARGE_INTEGER result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  std::map<std::wstring,Windows::Internal::Holographic::SpatialGraphSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Try_emplace<std::wstring const &,>(
    (__int64 *)(*(_QWORD *)(a1 + 8) + 56LL),
    (__int64)v5,
    a2);
  v3 = (LARGE_INTEGER *)v5[0];
  *(_BYTE *)(v5[0] + 120LL) = ***(_BYTE ***)a1 != 0;
  QueryPerformanceCounter(&PerformanceCount);
  result = PerformanceCount;
  v3[16] = PerformanceCount;
  return result;
}
