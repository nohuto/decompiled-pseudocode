/*
 * XREFs of _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480
 * Callers:
 *     _LdrpGetDllPath@28 @ 0x4B2B27D0 (_LdrpGetDllPath@28.c)
 *     _RtlDosSearchPath_U@24 @ 0x4B32D140 (_RtlDosSearchPath_U@24.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _LdrpResValidateFilePath@4 @ 0x4B343BC4 (_LdrpResValidateFilePath@4.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlDetermineDosPathNameType_U(__int16 *a1)
{
  __int16 v1; // cx
  __int16 v2; // ax
  __int16 v4; // cx
  int v5; // ecx
  __int16 v6; // cx

  v1 = *a1;
  if ( *a1 != 92 && v1 != 47 )
  {
    if ( !v1 || a1[1] != 58 )
      return 5;
    v2 = a1[2];
    if ( v2 == 92 || v2 == 47 )
      return 2;
    else
      return 3;
  }
  v4 = a1[1];
  if ( v4 != 92 && v4 != 47 )
    return 4;
  v5 = (unsigned __int16)a1[2];
  if ( v5 != 46 && v5 != 63 )
    return 1;
  v6 = a1[3];
  if ( v6 == 92 || v6 == 47 )
    return 6;
  return v6 != 0 ? 1 : 7;
}
