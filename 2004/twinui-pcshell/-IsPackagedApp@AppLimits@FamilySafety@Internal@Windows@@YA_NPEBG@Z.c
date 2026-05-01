/*
 * XREFs of ?IsPackagedApp@AppLimits@FamilySafety@Internal@Windows@@YA_NPEBG@Z @ 0x180457D94
 * Callers:
 *     ?TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1800BB090 (-TerminateApp@AppUsageTracker@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Window.c)
 *     ?GetDisplayName@AppUsageTracker@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x180457C20 (-GetDisplayName@AppUsageTracker@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@.c)
 *     ?IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z @ 0x180457D10 (-IsAppActive@AppUsageTracker@@UEAA_NPEBG@Z.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180085BB8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008C5D8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Windows::Internal::FamilySafety::AppLimits::IsPackagedApp(
        Windows::Internal::FamilySafety::AppLimits *this,
        const unsigned __int16 *a2)
{
  char *v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  const wchar_t *v5; // rcx
  signed __int64 v6; // rax
  wchar_t v7; // r9
  int v8; // eax
  bool v9; // bl
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (char *)std::wstring::wstring((__int64)v11, this);
  v3 = 5LL;
  if ( *((_QWORD *)v2 + 2) < 5uLL )
    v3 = *((_QWORD *)v2 + 2);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  v4 = v3;
  if ( v3 > 5 )
    v4 = 5LL;
  v5 = L"appx:";
  if ( v4 )
  {
    v6 = v2 - (char *)L"appx:";
    while ( 1 )
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      if ( v7 != *v5 )
        break;
      ++v5;
      if ( !--v4 )
        goto LABEL_11;
    }
    v8 = v7 < *v5 ? -1 : 1;
  }
  else
  {
LABEL_11:
    v8 = 0;
  }
  if ( !v8 )
  {
    if ( v3 >= 5 )
      v8 = v3 > 5;
    else
      v8 = -1;
  }
  v9 = v8 == 0;
  std::wstring::_Tidy_deallocate(v11);
  return v9;
}
