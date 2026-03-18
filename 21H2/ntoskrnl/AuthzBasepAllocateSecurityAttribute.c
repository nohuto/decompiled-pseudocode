/*
 * XREFs of AuthzBasepAllocateSecurityAttribute @ 0x140204DA0
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1402047C4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

UNICODE_STRING *__fastcall AuthzBasepAllocateSecurityAttribute(
        PCUNICODE_STRING SourceString,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  UNICODE_STRING *result; // rax
  UNICODE_STRING *v8; // rbx

  v5 = SourceString->Length + 112LL;
  v6 = 256LL;
  if ( KeGetCurrentIrql() >= 2u )
    v6 = 64LL;
  result = (UNICODE_STRING *)ExAllocatePool2(v6, v5, 1950442835LL, a4);
  v8 = result;
  if ( result )
  {
    memset(result, 0, 0x70uLL);
    v8[2].MaximumLength = SourceString->Length;
    v8[2].Buffer = &v8[7].Length;
    RtlCopyUnicodeString(v8 + 2, SourceString);
    *(_QWORD *)&v8[5].Length = (char *)v8 + 72;
    v8[4].Buffer = (wchar_t *)&v8[4].Buffer;
    v8[6].Buffer = &v8[6].Length;
    *(_QWORD *)&v8[6].Length = v8 + 6;
    return v8;
  }
  return result;
}
