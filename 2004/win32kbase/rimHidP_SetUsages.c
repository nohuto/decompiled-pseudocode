/*
 * XREFs of rimHidP_SetUsages @ 0x1C0165DE0
 * Callers:
 *     RIMDeliverConfigRequest @ 0x1C0163ACC (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01648C4 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMIDESetLinkCollectionUsageValues @ 0x1C016BE10 (RIMIDESetLinkCollectionUsageValues.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_SetUsages(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_SetUsages )
    return gpfnHidP_SetUsages(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
