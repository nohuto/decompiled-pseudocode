/*
 * XREFs of ViErrorReport1 @ 0x14059C358
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4520 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C4720 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver1 @ 0x1409CCC2C (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x1409CD124 (IovpCallDriver2.c)
 *     IovpCompleteRequest1 @ 0x1409CD4A0 (IovpCompleteRequest1.c)
 *     IovpCompleteRequest2 @ 0x1409CD5D0 (IovpCompleteRequest2.c)
 *     IovpCompleteRequest4 @ 0x1409CD9E8 (IovpCompleteRequest4.c)
 *     IovpExamineIrpStackForwarding @ 0x1409CDB54 (IovpExamineIrpStackForwarding.c)
 *     VfAfterCallDriver @ 0x1409CDE64 (VfAfterCallDriver.c)
 *     VfIoFreeIrp @ 0x1409CE22C (VfIoFreeIrp.c)
 *     VfIoInitializeIrp @ 0x1409CE3E4 (VfIoInitializeIrp.c)
 *     VfErrorReport1 @ 0x1409D4F98 (VfErrorReport1.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD00 (VfPnpVerifyIrpStackUpward.c)
 *     VfPnpVerifyNewRequest @ 0x1409DFEF0 (VfPnpVerifyNewRequest.c)
 *     VfPowerVerifyIrpStackDownward @ 0x1409E02F0 (VfPowerVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackUpward @ 0x1409E03F0 (VfPowerVerifyIrpStackUpward.c)
 *     VfPowerVerifyNewRequest @ 0x1409E0430 (VfPowerVerifyNewRequest.c)
 *     VfWmiVerifyIrpStackDownward @ 0x1409E0530 (VfWmiVerifyIrpStackDownward.c)
 *     VfWmiVerifyNewRequest @ 0x1409E0640 (VfWmiVerifyNewRequest.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D5198 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport1(unsigned int a1, const void *a2, const void *a3)
{
  char pszDest[64]; // [rsp+30h] [rbp-68h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", a2, a3) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, 0LL);
}
