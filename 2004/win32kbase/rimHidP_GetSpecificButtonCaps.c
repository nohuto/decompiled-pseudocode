/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C0165B94
 * Callers:
 *     RIMAssignTouchType @ 0x1C015E4E4 (RIMAssignTouchType.c)
 *     RIMGetDeviceButtons @ 0x1C016026C (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C0160B00 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0161DF0 (RIMRetrieveAllLinkIndexUsages.c)
 *     RIMDeliverConfigRequest @ 0x1C0163ACC (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C01648C4 (RIMSendLatencyMgtDeviceRequest.c)
 *     rimIDECheckConfidenceSupport @ 0x1C01691EC (rimIDECheckConfidenceSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetSpecificButtonCaps(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        struct _HIDP_BUTTON_CAPS *a5,
        unsigned __int16 *a6,
        struct _HIDP_PREPARSED_DATA *a7)
{
  if ( gpfnHidP_GetSpecificButtonCaps )
    return gpfnHidP_GetSpecificButtonCaps(a1, a2, a3, a4, a5, a6, a7);
  else
    return -1073741637;
}
