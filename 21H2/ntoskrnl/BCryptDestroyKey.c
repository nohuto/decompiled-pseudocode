/*
 * XREFs of BCryptDestroyKey @ 0x1405F3CD0
 * Callers:
 *     SecureDump_Init @ 0x1403B839C (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055E2F4 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ReInitialize @ 0x14055EBF8 (SecureDump_ReInitialize.c)
 *     SmCrEncCleanup @ 0x1406AFCA8 (SmCrEncCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptDestroyKey(BCRYPT_KEY_HANDLE hKey)
{
  NTSTATUS v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE))(ExtensionTable + 64))(hKey);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v2;
}
