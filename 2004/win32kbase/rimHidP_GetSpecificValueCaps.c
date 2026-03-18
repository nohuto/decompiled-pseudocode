/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C0165BE8
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C015DDF8 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C015E4E4 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C015E698 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015E948 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C015FBA0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C01606CC (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0160B00 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C01610AC (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C0161798 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0161DF0 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C0162008 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C0163ACC (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C0164230 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C0164414 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C0169560 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
