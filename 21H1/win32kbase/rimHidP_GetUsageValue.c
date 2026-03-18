/*
 * XREFs of rimHidP_GetUsageValue @ 0x1C016BF8C
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C0165EF0 (RIMExtractPointerPropertyValues.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C0166A1C (RIMGetMaxCountFeatureDetails.c)
 *     RIMIDE_CreateGenericHidDevice @ 0x1C0173850 (RIMIDE_CreateGenericHidDevice.c)
 *     rimExtractTransducerUsages @ 0x1C017F174 (rimExtractTransducerUsages.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C018151C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0181948 (rimExtractPointerDeviceUsages.c)
 *     rimExtractScantime @ 0x1C0181E28 (rimExtractScantime.c)
 *     rimFindOrCreateActiveContact @ 0x1C0182434 (rimFindOrCreateActiveContact.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsageValue(
        enum _HIDP_REPORT_TYPE a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsageValue )
    return gpfnHidP_GetUsageValue(a1, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
