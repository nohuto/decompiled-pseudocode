/*
 * XREFs of RtlDosPathNameToRelativeNtPathName @ 0x1800608E4
 * Callers:
 *     RtlpCreateNewDirectoryReference @ 0x18005FD2C (RtlpCreateNewDirectoryReference.c)
 *     LdrpGetNtPathFromDosPath @ 0x18006080C (LdrpGetNtPathFromDosPath.c)
 *     LdrpCheckAppDirType @ 0x1800D06BC (LdrpCheckAppDirType.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18001AF50 (RtlpDosPathNameToRelativeNtPathName.c)
 */

__int64 __fastcall RtlDosPathNameToRelativeNtPathName(
        char a1,
        __int64 a2,
        __m128i *a3,
        unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned __int16 **a6)
{
  return RtlpDosPathNameToRelativeNtPathName(a1 != 0, a3, a4, a5, a6, 0LL, 0LL);
}
