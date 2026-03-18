/*
 * XREFs of ViErrorReport1 @ 0x14059CA48
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4530 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C4730 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409CCC3C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409CD134 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409CD4B0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409CD5E0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409CD9F8 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409CDB64 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409CDE74 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409CE23C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409CE3F4 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409D4FF8 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD60 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409DFF50 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E0350 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E0450 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E0490 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E0590 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E06A0 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D51F8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
