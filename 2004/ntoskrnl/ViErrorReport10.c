/*
 * XREFs of ViErrorReport10 @ 0x14059CACC
 * Callers:
 *     IovpCallDriver2 @ 0x1409CD134 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD60 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E0030 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x1409E0610 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D51F8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
