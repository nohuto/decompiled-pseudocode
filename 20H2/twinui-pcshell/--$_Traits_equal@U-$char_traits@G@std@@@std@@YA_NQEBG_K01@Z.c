/*
 * XREFs of ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800848B4
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180025040 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800C9874 (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x1800D6720 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 *     ?OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801C37F0 (-OnEventQueued@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x1801E7518 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??R?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0@Z @ 0x18021EBFC (--R-$_Uhash_compare@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-$hash@V-$bas.c)
 *     _anonymous_namespace_::IsAppInBlackList @ 0x18021FC34 (_anonymous_namespace_--IsAppInBlackList.c)
 *     ?IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@Z @ 0x18021FD28 (-IsQualifiedDisplayItem@RecentAppsCache@Discover@PenWorkspace@@AEAA_NV-$shared_ptr@UAppUsageData.c)
 *     ?MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180220D44 (-MatchesStickyNote@RecentAppsCache@Discover@PenWorkspace@@AEBA_NAEBV-$basic_string@GU-$char_trai.c)
 *     ?_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ @ 0x1802535B0 (-_CheckWindowTextChanged@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAA_NXZ.c)
 *     ?GetExePathFromAppId@ExePathToAppIdMapping@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18045C8D8 (-GetExePathFromAppId@ExePathToAppIdMapping@@QEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allo.c)
 *     ?TryGetWindowFromAppId@ExeDataCache@@QEAA?AV?$optional@PEAUHWND__@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@@Z @ 0x18045D4F8 (-TryGetWindowFromAppId@ExeDataCache@@QEAA-AV-$optional@PEAUHWND__@@@std@@AEBV-$basic_string@GU-$.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Traits_equal<std::char_traits<unsigned short>>(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  char v4; // r9
  __int64 v5; // r10
  unsigned __int16 v6; // ax
  int v7; // eax

  if ( a2 != a4 )
    return 0;
  v4 = 1;
  if ( a2 )
  {
    v5 = a1 - (_QWORD)a3;
    while ( 1 )
    {
      v6 = *(unsigned __int16 *)((char *)a3 + v5);
      if ( v6 != *a3 )
        break;
      ++a3;
      if ( !--a2 )
        goto LABEL_6;
    }
    v7 = v6 < *a3 ? -1 : 1;
  }
  else
  {
LABEL_6:
    v7 = 0;
  }
  if ( v7 )
    return 0;
  return v4;
}
