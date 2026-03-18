/*
 * XREFs of ViZwCheckUnicodeString @ 0x1409EF8AC
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm @ 0x1409EB0D0 (VfZwAccessCheckAndAuditAlarm.c)
 *     VfZwAlpcConnectPort @ 0x1409EB510 (VfZwAlpcConnectPort.c)
 *     VfZwCloseObjectAuditAlarm @ 0x1409EBB50 (VfZwCloseObjectAuditAlarm.c)
 *     VfZwConnectPort @ 0x1409EBC00 (VfZwConnectPort.c)
 *     VfZwCreateKey @ 0x1409EC040 (VfZwCreateKey.c)
 *     VfZwCreateSymbolicLinkObject @ 0x1409EC1D0 (VfZwCreateSymbolicLinkObject.c)
 *     VfZwCreateTransaction @ 0x1409EC2F0 (VfZwCreateTransaction.c)
 *     VfZwCreateTransactionManager @ 0x1409EC3F0 (VfZwCreateTransactionManager.c)
 *     VfZwDeleteValueKey @ 0x1409EC4F0 (VfZwDeleteValueKey.c)
 *     VfZwDisplayString @ 0x1409EC640 (VfZwDisplayString.c)
 *     VfZwLoadDriver @ 0x1409ECC50 (VfZwLoadDriver.c)
 *     VfZwOpenTransactionManager @ 0x1409ED740 (VfZwOpenTransactionManager.c)
 *     VfZwQueryDirectoryFile @ 0x1409EDBD0 (VfZwQueryDirectoryFile.c)
 *     VfZwQueryLicenseValue @ 0x1409EE4B0 (VfZwQueryLicenseValue.c)
 *     VfZwQuerySymbolicLinkObject @ 0x1409EE700 (VfZwQuerySymbolicLinkObject.c)
 *     VfZwQueryValueKey @ 0x1409EE810 (VfZwQueryValueKey.c)
 *     VfZwSetValueKey @ 0x1409EF3C0 (VfZwSetValueKey.c)
 *     VfZwUnloadDriver @ 0x1409EF580 (VfZwUnloadDriver.c)
 *     ViZwCheckObjectAttributes @ 0x1409EF85C (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x1409D3D64 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x1409EF944 (ViZwCheckVirtualAddress.c)
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
