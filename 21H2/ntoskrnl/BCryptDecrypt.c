/*
 * XREFs of BCryptDecrypt @ 0x140595BC0
 * Callers:
 *     SmCrAuthDecrypt @ 0x1405A02A0 (SmCrAuthDecrypt.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptDecrypt(
        BCRYPT_KEY_HANDLE hKey,
        PUCHAR pbInput,
        ULONG cbInput,
        void *pPaddingInfo,
        PUCHAR pbIV,
        ULONG cbIV,
        PUCHAR pbOutput,
        ULONG cbOutput,
        ULONG *pcbResult,
        ULONG dwFlags)
{
  NTSTATUS v14; // ebx
  unsigned __int64 ExtensionTable; // rax

  v14 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v14 = (*(__int64 (__fastcall **)(BCRYPT_KEY_HANDLE, PUCHAR, _QWORD, void *, _QWORD, _DWORD, PUCHAR, ULONG, ULONG *, _DWORD))(ExtensionTable + 48))(
            hKey,
            pbInput,
            cbInput,
            pPaddingInfo,
            0LL,
            0,
            pbOutput,
            cbOutput,
            pcbResult,
            0);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(SepBCryptExtensionHost + 64));
  }
  return v14;
}
