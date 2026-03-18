/*
 * XREFs of ViErrorReport1 @ 0x1405A04E8
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409CA550 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409CA750 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409D2C5C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409D3154 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409D34D0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409D3600 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409D3A18 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D3B84 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409D3E94 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409D425C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409D4414 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409DB018 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409E5D80 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409E5F70 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E6370 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E6470 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E64B0 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E65B0 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E66C0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A7A54 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409DB218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
