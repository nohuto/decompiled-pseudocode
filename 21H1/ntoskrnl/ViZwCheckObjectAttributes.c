/*
 * XREFs of ViZwCheckObjectAttributes @ 0x1409E97DC
 * Callers:
 *     VfZwAlpcAcceptConnectPort @ 0x1409E53A0 (VfZwAlpcAcceptConnectPort.c)
 *     VfZwAlpcConnectPort @ 0x1409E5490 (VfZwAlpcConnectPort.c)
 *     VfZwAlpcCreatePort @ 0x1409E55E0 (VfZwAlpcCreatePort.c)
 *     VfZwCreateDirectoryObject @ 0x1409E5C90 (VfZwCreateDirectoryObject.c)
 *     VfZwCreateEnlistment @ 0x1409E5D00 (VfZwCreateEnlistment.c)
 *     VfZwCreateEvent @ 0x1409E5DC0 (VfZwCreateEvent.c)
 *     VfZwCreateFile @ 0x1409E5E50 (VfZwCreateFile.c)
 *     VfZwCreateJobObject @ 0x1409E5F50 (VfZwCreateJobObject.c)
 *     VfZwCreateKey @ 0x1409E5FC0 (VfZwCreateKey.c)
 *     VfZwCreateSection @ 0x1409E6090 (VfZwCreateSection.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E6150 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTimer @ 0x1409E61E0 (VfZwCreateTimer.c)
 *     VfZwCreateTransaction @ 0x1409E6270 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E6370 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteFile @ 0x1409E6430 (VfZwDeleteFile.c)
 *     VfZwDuplicateToken @ 0x1409E6690 (VfZwDuplicateToken.c)
 *     VfZwLoadKey @ 0x1409E6C10 (VfZwLoadKey.c)
 *     VfZwOpenDirectoryObject @ 0x1409E6F00 (VfZwOpenDirectoryObject.c)
 *     VfZwOpenEnlistment @ 0x1409E6F70 (VfZwOpenEnlistment.c)
 *     VfZwOpenEvent @ 0x1409E7000 (VfZwOpenEvent.c)
 *     VfZwOpenFile @ 0x1409E7070 (VfZwOpenFile.c)
 *     VfZwOpenJobObject @ 0x1409E7110 (VfZwOpenJobObject.c)
 *     VfZwOpenKey @ 0x1409E7180 (VfZwOpenKey.c)
 *     VfZwOpenProcess @ 0x1409E71F0 (VfZwOpenProcess.c)
 *     VfZwOpenSection @ 0x1409E7350 (VfZwOpenSection.c)
 *     VfZwOpenSymbolicLinkObject @ 0x1409E73C0 (VfZwOpenSymbolicLinkObject.c)
 *     VfZwOpenThread @ 0x1409E7430 (VfZwOpenThread.c)
 *     VfZwOpenTimer @ 0x1409E75B0 (VfZwOpenTimer.c)
 *     VfZwOpenTransaction @ 0x1409E7620 (VfZwOpenTransaction.c)
 *     VfZwOpenTransactionManager @ 0x1409E76C0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryFullAttributesFile @ 0x1409E7E70 (VfZwQueryFullAttributesFile.c)
 *     VfZwReplaceKey @ 0x1409E8A90 (VfZwReplaceKey.c)
 *     VfZwUnloadKey @ 0x1409E9540 (VfZwUnloadKey.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x1409E982C (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x1409E98C4 (ViZwCheckVirtualAddress.c)
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
