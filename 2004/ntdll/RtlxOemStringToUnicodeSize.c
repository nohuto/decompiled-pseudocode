/*
 * XREFs of RtlxOemStringToUnicodeSize @ 0x180016DE0
 * Callers:
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     RtlOemStringToUnicodeString @ 0x180060C80 (RtlOemStringToUnicodeString.c)
 * Callees:
 *     RtlMultiByteToUnicodeSize @ 0x180016E10 (RtlMultiByteToUnicodeSize.c)
 */

__int64 __fastcall RtlxOemStringToUnicodeSize(unsigned __int16 *a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  RtlMultiByteToUnicodeSize(&v2, *((_QWORD *)a1 + 1), *a1);
  return (unsigned int)(v2 + 2);
}
