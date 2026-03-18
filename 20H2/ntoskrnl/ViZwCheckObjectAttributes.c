/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409EF85C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409EB420 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409EB510 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409EB660 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409EBD10 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409EBD80 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409EBE40 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409EBED0 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409EBFD0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409EC040 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409EC110 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409EC1D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409EC260 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409EC2F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409EC3F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409EC4B0 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409EC710 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409ECC90 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409ECF80 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409ECFF0 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409ED080 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409ED0F0 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409ED190 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409ED200 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409ED270 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409ED3D0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409ED440 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409ED4B0 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409ED630 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409ED6A0 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409ED740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409EDEF0 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409EEB10 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409EF5C0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409EF8AC (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
