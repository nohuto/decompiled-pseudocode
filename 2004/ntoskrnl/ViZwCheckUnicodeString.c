/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409E988C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409E50B0 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409E54F0 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409E5B30 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409E5BE0 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409E6020 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E61B0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409E62D0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E63D0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409E64D0 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409E6620 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409E6C30 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409E7720 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409E7BB0 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409E8490 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409E86E0 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409E87F0 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409E93A0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409E9560 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409E983C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409E9924 (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rsi
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( (MmVerifierData & 0x100) != 0 )
    {
      if ( v4 + v5 < v4
        || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
        || (((unsigned __int16)v5 | v6) & 1) != 0 )
      {
        VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
      }
    }
  }
}
