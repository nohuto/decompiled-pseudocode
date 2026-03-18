/*
 * XREFs of BCryptDestroyKey @ 0x140590578
 * Callers:
 *     SecureDump_Init @ 0x1403C6920 (SecureDump_Init.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140504F94 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SmCrEncCleanup @ 0x1406CCC0C (SmCrEncCleanup.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v2;
}
