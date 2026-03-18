/*
 * XREFs of rimHidP_GetSpecificValueCaps @ 0x1C016BF38
 * Callers:
 *     _PopulatePropertyUsageValues @ 0x1C0164148 (_PopulatePropertyUsageValues.c)
 *     RIMAssignTouchType @ 0x1C0164834 (RIMAssignTouchType.c)
 *     RIMCacheAxisChildIndex @ 0x1C01649E8 (RIMCacheAxisChildIndex.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0164C98 (RIMCreatePointerDeviceInfo.c)
 *     RIMExtractPointerPropertyValues @ 0x1C0165EF0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0166A1C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0166E50 (RIMGetPointerDeviceProperties.c)
 *     RIMGetPropertyCount @ 0x1C01673FC (RIMGetPropertyCount.c)
 *     RIMIsParallelDevice @ 0x1C0167AE8 (RIMIsParallelDevice.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0168140 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMRetrieveLinkCollection @ 0x1C0168358 (RIMRetrieveLinkCollection.c)
 *     RIMDeliverConfigRequest @ 0x1C0169E24 (RIMDeliverConfigRequest.c)
 *     RIMIsInputUsagePresent @ 0x1C016A580 (RIMIsInputUsagePresent.c)
 *     RIMPopulatePointerDevice @ 0x1C016A764 (RIMPopulatePointerDevice.c)
 *     RIMIDECheckScanTimeSupport @ 0x1C016F8B0 (RIMIDECheckScanTimeSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
