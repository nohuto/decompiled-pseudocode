/*
 * XREFs of RtlxUnicodeStringToOemSize @ 0x1800611D0
 * Callers:
 *     RtlUnicodeStringToOemString @ 0x180060BA0 (RtlUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x180060D70 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUnicodeStringToCountedOemString @ 0x1800EB010 (RtlUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToAnsiString @ 0x1800EB140 (RtlUpcaseUnicodeStringToAnsiString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EB250 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1800612E0 (RtlUnicodeToMultiByteSize.c)
 */

__int64 __fastcall RtlxUnicodeStringToOemSize(PWCH *a1)
{
  ULONG BytesInMultiByteString; // [rsp+30h] [rbp+8h] BYREF

  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a1[1], *(unsigned __int16 *)a1);
  return BytesInMultiByteString + 1;
}
