/*
 * XREFs of BCryptOpenAlgorithmProvider @ 0x14078BD20
 * Callers:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140504F94 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140505544 (SecureDump_SymmetricEncryptionSetup.c)
 *     sub_14078BA9C @ 0x14078BA9C (sub_14078BA9C.c)
 *     RtlGenerateClass5Guid @ 0x14078BB20 (RtlGenerateClass5Guid.c)
 *     SmCrEncStart @ 0x140929B38 (SmCrEncStart.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14032FE4C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
