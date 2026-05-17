/*
 * XREFs of _RtlxUnicodeStringToOemSize@4 @ 0x4B2E0C60
 * Callers:
 *     _RtlUnicodeStringToOemString@12 @ 0x4B2E09B0 (_RtlUnicodeStringToOemString@12.c)
 *     _RtlUnicodeStringToAnsiString@12 @ 0x4B2E0C90 (_RtlUnicodeStringToAnsiString@12.c)
 *     _RtlUnicodeStringToCountedOemString@12 @ 0x4B34DC20 (_RtlUnicodeStringToCountedOemString@12.c)
 *     _RtlUpcaseUnicodeStringToAnsiString@12 @ 0x4B34DD30 (_RtlUpcaseUnicodeStringToAnsiString@12.c)
 *     _RtlUpcaseUnicodeStringToCountedOemString@12 @ 0x4B34DE20 (_RtlUpcaseUnicodeStringToCountedOemString@12.c)
 *     _RtlUpcaseUnicodeStringToOemString@12 @ 0x4B34DF30 (_RtlUpcaseUnicodeStringToOemString@12.c)
 * Callees:
 *     _RtlUnicodeToMultiByteSize@12 @ 0x4B2E0DE0 (_RtlUnicodeToMultiByteSize@12.c)
 */

ULONG __thiscall RtlxUnicodeStringToOemSize(void *this, PWCH *a2)
{
  ULONG BytesInMultiByteString; // [esp+0h] [ebp-4h] BYREF

  BytesInMultiByteString = (ULONG)this;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, a2[1], *(unsigned __int16 *)a2);
  return BytesInMultiByteString + 1;
}
