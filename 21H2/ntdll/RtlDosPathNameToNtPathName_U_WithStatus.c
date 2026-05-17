/*
 * XREFs of RtlDosPathNameToNtPathName_U_WithStatus @ 0x180016BE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

__int64 __fastcall RtlDosPathNameToNtPathName_U_WithStatus(int a1, int a2, int a3, __int64 a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(0, a1, a2, a3, a4);
}
