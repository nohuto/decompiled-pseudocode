/*
 * XREFs of ?PackageFamilyNameToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1804597EC
 * Callers:
 *     ?AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180458F14 (-AumidToAppId@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$basic_string@GU-$char_traits@G@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180084658 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C158 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1801DA194 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::PackageFamilyNameToAppId(__int64 a1, _WORD *a2)
{
  void **v4; // rax
  unsigned __int64 v5; // r8
  void **v6; // rax
  _QWORD v8[4]; // [rsp+28h] [rbp-30h] BYREF

  v4 = (void **)std::wstring::wstring((__int64)v8, L"appx:");
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = std::wstring::append(v4, a2, v5);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)v6 + 1);
  v6[2] = 0LL;
  v6[3] = (void *)7;
  *(_WORD *)v6 = 0;
  std::wstring::_Tidy_deallocate(v8);
  return a1;
}
