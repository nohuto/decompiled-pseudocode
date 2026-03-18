/*
 * XREFs of BCryptCloseAlgorithmProvider @ 0x1403B3494
 * Callers:
 *     SecureDump_Init @ 0x1403C59B0 (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140504944 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SmCrEncCleanup @ 0x140656474 (SmCrEncCleanup.c)
 *     RtlGenerateClass5Guid @ 0x140792CF0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402D3FE8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptCloseAlgorithmProvider(BCRYPT_ALG_HANDLE hAlgorithm, ULONG dwFlags)
{
  NTSTATUS v3; // ebx
  unsigned __int64 ExtensionTable; // rax

  v3 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*(__int64 (__fastcall **)(BCRYPT_ALG_HANDLE, _QWORD))(ExtensionTable + 32))(hAlgorithm, 0LL);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v3;
}
