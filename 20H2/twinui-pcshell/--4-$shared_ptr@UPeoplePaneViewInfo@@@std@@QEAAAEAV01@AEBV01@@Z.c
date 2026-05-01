/*
 * XREFs of ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18021EBA8
 * Callers:
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180221154 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025E3C8 (-FindPaneViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePaneViewInf.c)
 *     ?FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025E488 (-FindPendingShareViewInfoByContactId@PeoplePaneViewManager@@AEAAJPEBGAEAV-$shared_ptr@UPeoplePan.c)
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025E6E0 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18025E794 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180325E80 (-_CancelAndRunContinuations@-$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180326060 (-_CancelAndRunContinuations@-$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Ex.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348E1C (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x180348ECC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@AEAV-$shared_pt.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x1803492A0 (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034E860 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::shared_ptr<PeoplePaneViewInfo>::operator=(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  std::_Ref_count_base *v4; // rcx

  v2 = a2[1];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a2[1];
  }
  *a1 = *a2;
  v4 = (std::_Ref_count_base *)a1[1];
  a1[1] = v2;
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
