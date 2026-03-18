/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409E983C
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409E5400 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409E54F0 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409E5640 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409E5CF0 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409E5D60 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409E5E20 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409E5EB0 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409E5FB0 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409E6020 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409E60F0 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E61B0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409E6240 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409E62D0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E63D0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409E6490 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409E66F0 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409E6C70 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409E6F60 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409E6FD0 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409E7060 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409E70D0 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409E7170 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409E71E0 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409E7250 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409E73B0 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409E7420 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409E7490 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409E7610 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409E7680 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409E7720 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409E7ED0 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409E8AF0 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409E95A0 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409E988C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
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
