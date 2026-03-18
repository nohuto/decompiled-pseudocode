/*
 * XREFs of VfIoDetachDevice @ 0x1409D9234
 * Callers:
 *     IovDetachDevice @ 0x1409C81C0 (IovDetachDevice.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A7A54 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059ECC4 (VfUtilDbgPrint.c)
 *     IovUtilFlushStackCache @ 0x1409D9914 (IovUtilFlushStackCache.c)
 *     ViErrorDisplayDescription @ 0x1409DB218 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409DB26C (ViErrorFinishReport.c)
 */

__int64 __fastcall VfIoDetachDevice(_QWORD *a1, const void *a2)
{
  char pszDest[80]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a1[3] )
  {
    ViErrorDisplayDescription(514LL);
    if ( RtlStringCbPrintfA(pszDest, 0x49uLL, "CulpritAddress = %p, DeviceObject = %p.\n", a2, a1) >= 0 )
      VfUtilDbgPrint(pszDest);
    ViErrorFinishReport(514LL, a2, a1, 0LL);
  }
  return IovUtilFlushStackCache(a1);
}
