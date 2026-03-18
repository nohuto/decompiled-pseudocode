/*
 * XREFs of BCryptFinishHash @ 0x14065DE54
 * Callers:
 *     WbHashData @ 0x14065DC58 (WbHashData.c)
 *     RtlGenerateClass5Guid @ 0x1407A1DD0 (RtlGenerateClass5Guid.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall BCryptFinishHash(BCRYPT_HASH_HANDLE hHash, PUCHAR pbOutput, ULONG cbOutput, ULONG dwFlags)
{
  NTSTATUS v7; // ebx
  unsigned __int64 ExtensionTable; // rax

  v7 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  if ( ExtensionTable )
  {
    v7 = (*(__int64 (__fastcall **)(BCRYPT_HASH_HANDLE, PUCHAR, _QWORD, _QWORD))(ExtensionTable + 120))(
           hHash,
           pbOutput,
           cbOutput,
           0LL);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepBCryptExtensionHost);
  }
  return v7;
}
