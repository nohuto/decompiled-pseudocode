/*
 * XREFs of MiFillActivePatchesQueryBuffer @ 0x1408C9DB8
 * Callers:
 *     MiQueryProcessActivePatches @ 0x1408CE048 (MiQueryProcessActivePatches.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 */

unsigned __int16 *__fastcall MiFillActivePatchesQueryBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5,
        UNICODE_STRING **a6,
        wchar_t **a7,
        _QWORD *a8,
        PCUNICODE_STRING SourceString)
{
  UNICODE_STRING *v11; // rcx
  unsigned __int16 Length; // ax
  UNICODE_STRING *v13; // rcx
  unsigned __int16 *result; // rax

  v11 = *a6;
  **a5 = *a8;
  Length = SourceString->Length;
  v11->Length = SourceString->Length;
  v11->MaximumLength = Length;
  v11->Buffer = *a7;
  RtlCopyUnicodeString(v11, SourceString);
  v13 = *a6;
  ++*a5;
  v13->Buffer = (wchar_t *)((char *)v13->Buffer - a4);
  *a7 = (wchar_t *)((char *)*a7 + v13->Length);
  result = &v13[1].Length;
  ++*(_DWORD *)(a1 + 16);
  *a6 = v13 + 1;
  return result;
}
