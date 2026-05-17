/*
 * XREFs of _RtlpDosPathNameToRelativeNtPathName_U@20 @ 0x4B2D1C18
 * Callers:
 *     _LdrpMapResourceFile@24 @ 0x4B2B961A (_LdrpMapResourceFile@24.c)
 *     _RtlDosPathNameToNtPathName_U_WithStatus@16 @ 0x4B2D1D90 (_RtlDosPathNameToNtPathName_U_WithStatus@16.c)
 *     _EtwpCreateFile@24 @ 0x4B2F160C (_EtwpCreateFile@24.c)
 *     _RtlDosLongPathNameToNtPathName_U_WithStatus@16 @ 0x4B32D0E0 (_RtlDosLongPathNameToNtPathName_U_WithStatus@16.c)
 *     _RtlDosLongPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B32D110 (_RtlDosLongPathNameToRelativeNtPathName_U_WithStatus@16.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

int __fastcall RtlpDosPathNameToRelativeNtPathName_U(int a1, int a2, unsigned __int16 *a3, int a4, _DWORD *a5)
{
  int result; // eax
  int v7[3]; // [esp+8h] [ebp-Ch] BYREF

  result = RtlInitUnicodeStringEx(v7, a2);
  if ( result >= 0 )
    return RtlpDosPathNameToRelativeNtPathName(a1, v7, 0, a3, 0, a4, a5);
  return result;
}
