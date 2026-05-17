/*
 * XREFs of _RtlGetNtProductType@4 @ 0x4B2B05F0
 * Callers:
 *     _RtlpQueryPhysicalMemoryPolicy@4 @ 0x4B2AFE9D (_RtlpQueryPhysicalMemoryPolicy@4.c)
 *     _RtlGetVersion@4 @ 0x4B2AFEF0 (_RtlGetVersion@4.c)
 *     _SwitchedRtlGetVersion@4 @ 0x4B2B0445 (_SwitchedRtlGetVersion@4.c)
 *     _RtlRestoreBootStatusDefaults@4 @ 0x4B350BF0 (_RtlRestoreBootStatusDefaults@4.c)
 *     _RtlpHpInitializePerfPolicies@0 @ 0x4B3584BA (_RtlpHpInitializePerfPolicies@0.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpGetNtProductTypeFromRegistry@4 @ 0x4B36374F (_RtlpGetNtProductTypeFromRegistry@4.c)
 */

char __stdcall RtlGetNtProductType(_DWORD *a1)
{
  int v1; // ecx
  char result; // al

  if ( RtlGetCurrentServiceSessionId() )
  {
    v1 = *((_DWORD *)NtCurrentPeb()->SharedData + 4);
    goto LABEL_4;
  }
  if ( MEMORY[0x7FFE0268] )
  {
    v1 = MEMORY[0x7FFE0264];
LABEL_4:
    *a1 = v1;
    return 1;
  }
  if ( RtlpGetNtProductTypeFromRegistry(a1) >= 0 )
    return 1;
  result = 0;
  *a1 = 1;
  return result;
}
