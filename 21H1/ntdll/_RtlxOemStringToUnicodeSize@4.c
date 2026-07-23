/*
 * XREFs of _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60
 * Callers:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 * Callees:
 *     _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970 (_RtlMultiByteToUnicodeSize@12.c)
 */

ULONG __thiscall RtlxOemStringToUnicodeSize(void *this, PCSTR *a2)
{
  ULONG BytesInUnicodeString; // [esp+0h] [ebp-4h] BYREF

  BytesInUnicodeString = (ULONG)this;
  RtlMultiByteToUnicodeSize(&BytesInUnicodeString, a2[1], *(unsigned __int16 *)a2);
  return BytesInUnicodeString + 2;
}
