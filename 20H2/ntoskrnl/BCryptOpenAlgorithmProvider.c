/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x1407A1FD0
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405089A4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140508F54 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_1407A1D4C @ 0x1407A1D4C (sub_1407A1D4C.c)
 *     RtlGenerateClass5Guid @ 0x1407A1DD0 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x14092F960 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptOpenAlgorithmProvider(
        BCRYPT_ALG_HANDLE *phAlgorithm,
        LPCWSTR pszAlgId,
        LPCWSTR pszImplementation,
        ULONG dwFlags)
{
  NTSTATUS v8; // ebx
  unsigned __int64 ExtensionTable; // rax

  v8 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v8 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE *, LPCWSTR, LPCWSTR, _QWORD))(ExtensionTable + 200))(
           phAlgorithm,
           pszAlgId,
           pszImplementation,
           dwFlags);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v8;
}
