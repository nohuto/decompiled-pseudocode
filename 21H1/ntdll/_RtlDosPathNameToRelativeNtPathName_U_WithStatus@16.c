/*
 * XREFs of _RtlDosPathNameToRelativeNtPathName_U_WithStatus@16 @ 0x4B2C1E00
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 */

int __stdcall RtlDosPathNameToRelativeNtPathName_U_WithStatus(_WORD *a1, int a2, int a3, int a4)
{
  _WORD *v4; // ecx

  v4 = a1;
  if ( !a1 )
    return RtlpDosPathNameToRelativeNtPathName(0, a2, 0, a3, a4);
  while ( *v4++ )
    ;
  if ( (unsigned int)(v4 - (a1 + 1)) > 0x7FFE )
    return -1073741562;
  else
    return RtlpDosPathNameToRelativeNtPathName(0, a2, 0, a3, a4);
}
