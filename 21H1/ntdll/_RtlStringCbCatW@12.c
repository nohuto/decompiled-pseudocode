/*
 * XREFs of _RtlStringCbCatW@12 @ 0x4B2EACE3
 * Callers:
 *     _RtlpGetDynamicTimeZoneInfoHandle@8 @ 0x4B2EAC1B (_RtlpGetDynamicTimeZoneInfoHandle@8.c)
 *     _LdrpAppxGetRemediationRegistryKey@12 @ 0x4B32C6BD (_LdrpAppxGetRemediationRegistryKey@12.c)
 * Callees:
 *     RtlStringLengthWorkerW @ 0x4B2D5B2E (RtlStringLengthWorkerW.c)
 *     RtlStringCopyWorkerW_0 @ 0x4B2D5C38 (RtlStringCopyWorkerW_0.c)
 */

int __fastcall RtlStringCbCatW(_WORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  int result; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  v3 = a2 >> 1;
  result = a2 >> 1 != 0 ? 0 : -1073741811;
  if ( a2 >> 1 )
  {
    result = RtlStringLengthWorkerW(a1, a2 >> 1, &v7);
    v6 = v7;
  }
  else
  {
    v6 = 0;
  }
  if ( result >= 0 )
    return RtlStringCopyWorkerW_0(&a1[v6], v3 - v6, v6, a3, v6);
  return result;
}
