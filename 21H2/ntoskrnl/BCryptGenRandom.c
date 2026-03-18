/*
 * XREFs of BCryptGenRandom @ 0x1405F3DFC
 * Callers:
 *     SecureDump_SymmetricEncryptionSetup @ 0x14055EDD4 (SecureDump_SymmetricEncryptionSetup.c)
 *     SmCrGenRandom @ 0x1405FD93C (SmCrGenRandom.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptGenRandom(BCRYPT_ALG_HANDLE hAlgorithm, PUCHAR pbBuffer, ULONG cbBuffer, ULONG dwFlags)
{
  NTSTATUS v6; // ebx
  unsigned __int64 ExtensionTable; // rax

  v6 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, PUCHAR, _QWORD, __int64))(ExtensionTable + 160))(
           0LL,
           pbBuffer,
           cbBuffer,
           2LL);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v6;
}
