/*
 * XREFs of ??$query@UITabViewManager@@@?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITabViewManager@@Uerr_exception_policy@wil@@@1@XZ @ 0x18009D580
 * Callers:
 *     ?GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z @ 0x18026D170 (-GetViewForTabInDrag@TabTransferManager@@UEAAJPEAUIInspectable@@PEAPEAUIApplicationView@@@Z.c)
 *     ?OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026D860 (-OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShe.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18026DED4 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18026E8B4 (-PrepareTabAndViewForDrag@TabTransferManager@@AEAAXPEAUIShellTab@Tabs@ComposableShell@Internal@W.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z @ 0x18026748C (-query@weak_query_policy@details@wil@@SAJPEAUIWeakReference@@AEBU_GUID@@PEAPEAX@Z.c)
 */

void **__fastcall wil::com_ptr_t<IWeakReference,wil::err_exception_policy>::query<ITabViewManager>(
        struct IWeakReference **a1,
        void **a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = wil::details::weak_query_policy::query(*a1, &GUID_d1710073_c814_4a0c_9685_00e44547418f, a2);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a2;
}
