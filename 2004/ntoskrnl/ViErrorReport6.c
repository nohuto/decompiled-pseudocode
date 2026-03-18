/*
 * XREFs of ViErrorReport6 @ 0x14059CC04
 * Callers:
 *     ViGenericVerifyIrpStackDownward @ 0x1409C4530 (ViGenericVerifyIrpStackDownward.c)
 *     ViGenericVerifyIrpStackUpward @ 0x1409C4730 (ViGenericVerifyIrpStackUpward.c)
 *     IovpCallDriver2 @ 0x1409CD134 (IovpCallDriver2.c)
 *     IovpCompleteRequest2 @ 0x1409CD5E0 (IovpCompleteRequest2.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1403A5654 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14059B224 (VfUtilDbgPrint.c)
 *     ViErrorDisplayDescription @ 0x1409D51F8 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1409D524C (ViErrorFinishReport.c)
 */

__int64 __fastcall ViErrorReport6(__int64 a1, const void *a2, const void *a3, int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // ebx
  char pszDest[96]; // [rsp+30h] [rbp-98h] BYREF

  v4 = a4;
  v7 = a1;
  ViErrorDisplayDescription(a1);
  if ( RtlStringCbPrintfA(pszDest, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", a2, a3, v4) >= 0 )
    VfUtilDbgPrint(pszDest);
  return ViErrorFinishReport(v7, a2, a3, v4);
}
