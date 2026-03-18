/*
 * XREFs of VfErrorReport7 @ 0x1409DB030
 * Callers:
 *     PpvUtilFailDriver @ 0x14050E5B0 (PpvUtilFailDriver.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A7A54 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409DB218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
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
