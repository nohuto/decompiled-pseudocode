/*
 * XREFs of ViErrorReport10 @ 0x14059C3DC
 * Callers:
 *     IovpCallDriver2 @ 0x1409CD124 (IovpCallDriver2.c)
 *     VfPnpVerifyIrpStackUpward @ 0x1409DFD00 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x1409DFFD0 (ViPnpVerifyMinorWasProcessedProperly.c)
 *     VfWmiVerifyIrpStackUpward @ 0x1409E05B0 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D5198 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport10(unsigned int a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-A8h] BYREF

  ViErrorDisplayDescription();
  if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", a2, a3, a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(a1, a2, a3, a4);
}
