/*
 * XREFs of VfErrorReport7 @ 0x1409D4FB0
 * Callers:
 *     PpvUtilFailDriver @ 0x14050A630 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A9324 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059AB34 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D5198 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D51EC (ViErrorFinishReport.c)
 */

__int64 __fastcall VfErrorReport7(__int64 a1, const void *a2, const void *a3, const void *a4)
{
  char pszDest[112]; // [rsp+30h] [rbp-98h] BYREF

  ViErrorDisplayDescription(585LL);
  if ( RtlStringCbPrintfA(
         pszDest,
         0x6EuLL,
         "CulpritAddress = %p, DeviceObject1 = %p, DeviceObject2 = %p.\n",
         a2,
         a3,
         a4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(585LL, a2, a3, a4);
}
