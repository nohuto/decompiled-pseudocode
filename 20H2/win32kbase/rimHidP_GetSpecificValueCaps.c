/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0163688
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C015B898 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C015BF84 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C015C138 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C015D640 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C015E16C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C015E5A0 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C015EB4C (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C015F238 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F890 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C015FAA8 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C016156C (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C0161CD0 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C0161EB4 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0167000 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificValueCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_VALUE_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificValueCaps )
    return gpfnHidP_GetSpecificValueCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
