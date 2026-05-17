/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToNtPathName_U_WithStatus @ 0x180016BE0 (RtlDosPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToNtPathName_U @ 0x180017310 (RtlDosPathNameToNtPathName_U.c)
 *     LdrpMapResourceFile @ 0x18004BA08 (LdrpMapResourceFile.c)
 *     EtwpCreateFile @ 0x180056BD4 (EtwpCreateFile.c)
 *     RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CC2C0 (RtlDosLongPathNameToNtPathName_U_WithStatus.c)
 *     RtlDosLongPathNameToRelativeNtPathName_U_WithStatus @ 0x1800CC2F0 (RtlDosLongPathNameToRelativeNtPathName_U_WithStatus.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0EBC (LdrpCnvrtShortToLongFileName.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlInitUnicodeStringEx(v9, a2);
  if ( (int)result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, (unsigned int)v9, 0, a3, 0LL, a4, a5);
  return result;
}
