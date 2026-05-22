/*
 * XREFs of _lambda_2f7ec991c440bb20d82758962485f4cf_::operator() @ 0x180158700
 * Callers:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_ae4609f332701fbf386e5d669d1e8a4c___ @ 0x18014F5D0 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_ae4609f332701fb.c)
 * Callees:
 *     ??$_Try_emplace@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$$V@?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@UCaseInsensitiveStringLess@456@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UTrackedDeviceSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@@Z @ 0x180155ED8 (--$_Try_emplace@AEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@_ea_180155ED8.c)
 */

LARGE_INTEGER __fastcall lambda_2f7ec991c440bb20d82758962485f4cf_::operator()(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4)
{
  __int64 v5; // rdi
  _OWORD *v6; // rax
  LARGE_INTEGER result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  std::map<std::wstring,Windows::Internal::Holographic::TrackedDeviceSnapshot,Windows::Internal::Holographic::CaseInsensitiveStringLess,std::allocator<std::pair<std::wstring const,Windows::Internal::Holographic::TrackedDeviceSnapshot>>>::_Try_emplace<std::wstring const &,>(
    *(_QWORD *)(a1 + 8) + 8LL,
    (__int64)v8,
    a2,
    a4);
  v5 = v8[0] + 176LL;
  v6 = ***(_OWORD ****)a1;
  *(_OWORD *)(v8[0] + 176LL) = *v6;
  *(_OWORD *)(v5 + 16) = v6[1];
  *(_OWORD *)(v5 + 32) = v6[2];
  *(_OWORD *)(v5 + 48) = v6[3];
  *(_OWORD *)(v5 + 64) = v6[4];
  *(_OWORD *)(v5 + 80) = v6[5];
  *(_OWORD *)(v5 + 96) = v6[6];
  *(_OWORD *)(v5 + 112) = v6[7];
  *(_OWORD *)(v5 + 128) = v6[8];
  *(_OWORD *)(v5 + 144) = v6[9];
  QueryPerformanceCounter(&PerformanceCount);
  result = PerformanceCount;
  *(LARGE_INTEGER *)(v5 + 160) = PerformanceCount;
  return result;
}
