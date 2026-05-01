/*
 * XREFs of _anonymous_namespace_::IsAppInBlackList @ 0x1801FD364
 * Callers:
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x1801FD458 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 * Callees:
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800857D4 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 */

char __fastcall anonymous_namespace_::IsAppInBlackList(__int64 *a1)
{
  wchar_t **v2; // r11
  unsigned __int16 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // r11

  v2 = off_1804AAB80;
  while ( 1 )
  {
    v3 = *v2;
    v4 = -1LL;
    do
      ++v4;
    while ( v3[v4] );
    v5 = (__int64)a1;
    if ( (unsigned __int64)a1[3] >= 8 )
      v5 = *a1;
    if ( std::_Traits_equal<std::char_traits<unsigned short>>(v5, a1[2], v3, v4) )
      break;
    v2 = (wchar_t **)(v6 + 8);
    if ( v2 == off_1804AAB98 )
      return 0;
  }
  return 1;
}
