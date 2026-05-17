/*
 * XREFs of _RtlDosPathNameToNtPathName_U@16 @ 0x4B2D1B70
 * Callers:
 *     _LdrpCheckForSecuROMImage@4 @ 0x4B33163B (_LdrpCheckForSecuROMImage@4.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 */

bool __stdcall RtlDosPathNameToNtPathName_U(int a1, unsigned __int16 *a2, int a3, _DWORD *a4)
{
  int inited; // eax
  bool v5; // sf
  int v7[2]; // [esp+0h] [ebp-8h] BYREF

  inited = RtlInitUnicodeStringEx(v7, a1);
  v5 = inited < 0;
  if ( inited >= 0 )
    v5 = RtlpDosPathNameToRelativeNtPathName(0, v7, 0, a2, 0, a3, a4) < 0;
  return !v5;
}
