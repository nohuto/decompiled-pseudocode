/*
 * XREFs of _RtlDosLongPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B32D110
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18 (_RtlpDosPathNameToRelativeNtPathName_U@20.c)
 */

int __stdcall RtlDosLongPathNameToRelativeNtPathName_U_WithStatus(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)
{
  return RtlpDosPathNameToRelativeNtPathName_U(6, a1, a2, a3, a4);
}
