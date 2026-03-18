/*
 * XREFs of VfErrorReport9 @ 0x1409D50D0
 * Callers:
 *     VfIoDeleteDevice @ 0x1409D30D4 (VfIoDeleteDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D5198 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport9(__int64 a1, const void *a2)
{
  unsigned int v3; // ebx
  char pszDest[40]; // [rsp+20h] [rbp-38h] BYREF

  v3 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v3, a2, 0LL, 0LL);
}
