/*
 * XREFs of rimHidP_GetUsages @ 0x1C016C064
 * Callers:
 *     rimExtractButtonPageButtonUsages @ 0x1C0180FA4 (rimExtractButtonPageButtonUsages.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0181134 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractPointerDeviceUsages @ 0x1C0181948 (rimExtractPointerDeviceUsages.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall rimHidP_GetUsages(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        unsigned __int16 *a4,
        unsigned int *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        char *a7,
        unsigned int a8)
{
  if ( gpfnHidP_GetUsages )
    return gpfnHidP_GetUsages(HidP_Input, a2, a3, a4, a5, a6, a7, a8);
  else
    return -1073741637;
}
