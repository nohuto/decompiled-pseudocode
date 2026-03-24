/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x1408C8D58
 * Callers:
 *     MiLoadHotPatch @ 0x1408CABD0 (MiLoadHotPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     RtlCopyUnicodeString @ 0x1403534C0 (RtlCopyUnicodeString.c)
 */

UNICODE_STRING *__fastcall MiAllocateSecureImageActivePatch(PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v3; // rbx

  Pool = (UNICODE_STRING *)MiAllocatePool(256, SourceString->Length + 64LL, 0x73486D4Du);
  v3 = Pool;
  if ( Pool )
  {
    Pool[3].Buffer = &Pool[4].Length;
    Pool[3].MaximumLength = SourceString->Length;
    RtlCopyUnicodeString(Pool + 3, SourceString);
  }
  return v3;
}
