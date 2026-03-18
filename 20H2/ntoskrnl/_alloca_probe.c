/*
 * XREFs of _alloca_probe @ 0x140405E30
 * Callers:
 *     RtlpWalkFrameChain @ 0x1402273F0 (RtlpWalkFrameChain.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140258C6C (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140259248 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140259738 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x140259AE0 (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x140259F60 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14025A3BC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14025A430 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14025AC68 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14025BC70 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_C.c)
 *     KiIntSteerCalculateDistribution @ 0x140288180 (KiIntSteerCalculateDistribution.c)
 *     RtlRaiseException @ 0x1402E5480 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x1402E5630 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x1402E5AF0 (RtlUnwindEx.c)
 *     KiContinuePreviousModeUser @ 0x1402E6AC0 (KiContinuePreviousModeUser.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     RtlUnwind @ 0x14032EAB0 (RtlUnwind.c)
 *     HalGetEnvironmentVariableEx @ 0x1403BA250 (HalGetEnvironmentVariableEx.c)
 *     ReadStringDelimited_0 @ 0x1403DA208 (ReadStringDelimited_0.c)
 *     HalSetEnvironmentVariableEx @ 0x1404BA3D0 (HalSetEnvironmentVariableEx.c)
 *     HalpHvStartVirtualProcessor @ 0x1404C12B0 (HalpHvStartVirtualProcessor.c)
 *     IommuProcessPageRequestQueue @ 0x1404D7890 (IommuProcessPageRequestQueue.c)
 *     KiRaiseException @ 0x1405203B0 (KiRaiseException.c)
 *     KiUnwindUserSspForApcContextCopyBypass @ 0x1405236B4 (KiUnwindUserSspForApcContextCopyBypass.c)
 *     KiParkUmsThread @ 0x140524440 (KiParkUmsThread.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140596654 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x140596764 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x14059687C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     EtwpApplyEventNameFilter @ 0x1405AA124 (EtwpApplyEventNameFilter.c)
 *     EtwpTraceLastBranchRecord @ 0x1405AE8B4 (EtwpTraceLastBranchRecord.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405AF388 (EtwpApplyPayloadFilterInternal.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspWow64GetContextThread @ 0x140691C20 (PspWow64GetContextThread.c)
 *     NtCreateThreadEx @ 0x140692890 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     PspSetContextThreadInternal @ 0x140693770 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140693928 (PspGetContextThreadInternal.c)
 *     PspWow64SetContextThread @ 0x1406C79EC (PspWow64SetContextThread.c)
 *     KiSwapToUmsThread @ 0x1408C0160 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140911094 (PspDisassociateUmsThreadFromPrimary.c)
 *     SmStorePhysicalRequestIssue @ 0x14092CD38 (SmStorePhysicalRequestIssue.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *v2; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
  v2 = &v3;
  LOWORD(v2) = (unsigned __int16)&v3 & 0xF000;
  while ( v1 < v2 )
    v2 -= 4096;
  return result;
}
