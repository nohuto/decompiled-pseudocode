/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800798B0
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180075A44 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x18007D5F8 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800899E8 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x180097F2C (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009C7D8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x18009CC00 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180017DE0 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18006ADD8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180079AC4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800CD8A8 (memcpy_0.c)
 */

__int64 __fastcall std::wstring::append(void **a1, void **a2, unsigned __int64 a3)
{
  void **v5; // rbx
  void **v6; // rax
  _BYTE *v7; // rax
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rcx
  _BYTE *v11; // rax

  v5 = a1;
  if ( !a2 )
    goto LABEL_13;
  v6 = (unsigned __int64)a1[3] < 8 ? a1 : (void **)*a1;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( (unsigned __int64)a1[3] >= 8 )
    a1 = (void **)*a1;
  if ( (void **)((char *)a1 + 2 * (_QWORD)v5[2]) > a2 )
  {
    if ( (unsigned __int64)v5[3] < 8 )
      v7 = v5;
    else
      v7 = *v5;
    return std::wstring::append(v5, v5, ((char *)a2 - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( ~(unsigned __int64)v5[2] <= a3 )
      std::wstring::_Xlen();
    if ( a3 )
    {
      v9 = (unsigned __int64)v5[2] + a3;
      if ( std::wstring::_Grow(v5, v9, 0) )
      {
        if ( (unsigned __int64)v5[3] < 8 )
          v10 = v5;
        else
          v10 = *v5;
        memcpy_0(&v10[2 * (_QWORD)v5[2]], a2, 2 * a3);
        if ( (unsigned __int64)v5[3] < 8 )
          v11 = v5;
        else
          v11 = *v5;
        v5[2] = (void *)v9;
        *(_WORD *)&v11[2 * v9] = 0;
      }
    }
    return (__int64)v5;
  }
}
