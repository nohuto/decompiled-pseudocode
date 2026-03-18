/*
 * XREFs of MiAllocateSecureImageActivePatch @ 0x1408CB598
 * Callers:
 *     MiLoadHotPatch @ 0x1408CD410 (MiLoadHotPatch.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14020D870 (RtlCopyUnicodeString.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
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
