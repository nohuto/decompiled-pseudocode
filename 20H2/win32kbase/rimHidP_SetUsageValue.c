/*
 * XREFs of rimHidP_SetUsageValue @ 0x1C0163814
 * Callers:
 *     RIMAddSimulatedPointerDeviceData @ 0x1C015BC10 (RIMAddSimulatedPointerDeviceData.c)
 *     RIMDeliverConfigRequest @ 0x1C016156C (RIMDeliverConfigRequest.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C01698B0 (RIMIDESetLinkCollectionUsageValues.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_SetUsageValue(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_SetUsageValue )
    return gpfnHidP_SetUsageValue(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
