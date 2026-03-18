/*
 * XREFs of BCryptHashData @ 0x1406D9ED8
 * Callers:
 *     WbHashData @ 0x1406D9BD4 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x14078BB20 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x14032FE4C (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x14032FE68 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptHashData(BCRYPT_HASH_HANDLE hHash, PUCHAR pbInput, ULONG cbInput, ULONG dwFlags)
{
  NTSTATUS v7; // ebx
  unsigned __int64 ExtensionTable; // rax

  v7 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v7 = (*(__int64 (__fastcall **)(BCRYPT_HASH_HANDLE, PUCHAR, _QWORD, _QWORD))(ExtensionTable + 176))(
           hHash,
           pbInput,
           cbInput,
           0LL);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
