/*
 * XREFs of ViErrorReport10 @ 0x1405A056C
 * Callers:
 *     IovpCallDriver2 @ 0x1409D3154 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E5D80 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409E6050 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x1409E6630 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A7A54 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409DB218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
