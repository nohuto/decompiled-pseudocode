/*
 * XREFs of RtlDosPathNameToNtPathName_U @ 0x180017310
 * Callers:
 *     LdrpResValidateFilePath @ 0x1800E4C18 (LdrpResValidateFilePath.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

bool __fastcall RtlDosPathNameToNtPathName_U(int a1, int a2, int a3, __int64 a4)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(0, a1, a2, a3, a4) >= 0;
}
