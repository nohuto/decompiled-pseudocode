/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409E982C
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409E5050 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409E5490 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409E5AD0 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409E5B80 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409E5FC0 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409E6150 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409E6270 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409E6370 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409E6470 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409E65C0 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409E6BD0 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409E76C0 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409E7B50 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409E8430 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409E8680 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409E8790 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409E9340 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409E9500 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409E97DC (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD34 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409E98C4 (ViZwCheckVirtualAddress.c)
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
