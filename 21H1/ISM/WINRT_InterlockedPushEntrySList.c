/*
 * XREFs of WINRT_InterlockedPushEntrySList @ 0x18003DBDD
 * Callers:
 *     ??$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@Z @ 0x180033740 (--$call@AEAV_lambda_a0948b4265dfdd13ae56361479f20a08_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 *     ??$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@Z @ 0x180033860 (--$call@AEAV_lambda_3c84e564eb869bfeecbf9f03c102acb2_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 *     ??$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@?$factory_cache_entry@UAppViewInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIAppViewStatics@23456@@impl@winrt@@QEAA?AUAppView@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@Z @ 0x1800BCC34 (--$call@AEAV_lambda_57c88d371994e6bd0831055e214b4d4d_@@@-$factory_cache_entry@UAppViewInProc@Win.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PSLIST_ENTRY __stdcall WINRT_InterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  return InterlockedPushEntrySList(ListHead, ListEntry);
}
