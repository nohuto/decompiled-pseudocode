/*
 * XREFs of _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0
 * Callers:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0 (_RtlCreateVirtualAccountSid@16.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NLS_UPCASE@4 @ 0x4B2BFDC8 (_NLS_UPCASE@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlUpcaseUnicodeString@12 @ 0x4B2D2BD0 (_RtlUpcaseUnicodeString@12.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

unsigned int __stdcall RtlUpcaseUnicodeString(int a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v3; // ax
  int v4; // ecx
  unsigned int result; // eax
  unsigned int i; // edi
  int StringRoutine; // eax
  unsigned int v8; // [esp+14h] [ebp-20h]

  v3 = *a2;
  v4 = *a2;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v3;
    StringRoutine = NtdllpAllocateStringRoutine(v4);
    *(_DWORD *)(a1 + 4) = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(v4) = *a2;
  }
  else if ( v3 > *(_WORD *)(a1 + 2) )
  {
    return -2147483643;
  }
  result = (unsigned __int16)v4 >> 1;
  v8 = result;
  for ( i = 0; i < result; ++i )
  {
    *(_WORD *)(*(_DWORD *)(a1 + 4) + 2 * i) = NLS_UPCASE(*(_WORD *)(*((_DWORD *)a2 + 1) + 2 * i));
    result = v8;
  }
  return result;
}
