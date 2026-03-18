/*
 * XREFs of BCryptSetProperty @ 0x140917CCC
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x140504EF4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrEncStart @ 0x140928888 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x1402D3FCC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptSetProperty(
        BCRYPT_HANDLE hObject,
        LPCWSTR pszProperty,
        PUCHAR pbInput,
        ULONG cbInput,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  unsigned __int64 ExtensionTable; // rax

  v9 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v9 = (*(__int64 (__fastcall **)(BCRYPT_HANDLE, LPCWSTR, PUCHAR, _QWORD, _DWORD))(ExtensionTable + 232))(
           hObject,
           pszProperty,
           pbInput,
           cbInput,
           0);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v9;
}
