/*
 * XREFs of _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60
 * Callers:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 * Callees:
 *     _RtlMultiByteToUnicodeSize@12 @ 0x4B2CE970 (_RtlMultiByteToUnicodeSize@12.c)
 */

char *__thiscall RtlxOemStringToUnicodeSize(char *this, unsigned __int16 *a2)
{
  char *v3; // [esp+0h] [ebp-4h] BYREF

  v3 = this;
  RtlMultiByteToUnicodeSize(&v3, *((_DWORD *)a2 + 1), *a2);
  return v3 + 2;
}
