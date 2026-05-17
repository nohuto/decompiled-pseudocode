/*
 * XREFs of _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0
 * Callers:
 *     _RtlDnsHostNameToComputerName@12 @ 0x4B34DAA0 (_RtlDnsHostNameToComputerName@12.c)
 * Callees:
 *     _RtlOemStringToUnicodeString@12 @ 0x4B2AABF0 (_RtlOemStringToUnicodeString@12.c)
 *     _RtlOemToUnicodeN@20 @ 0x4B2AACD0 (_RtlOemToUnicodeN@20.c)
 *     _RtlxOemStringToUnicodeSize@4 @ 0x4B2AAD60 (_RtlxOemStringToUnicodeSize@4.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlOemStringToUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ecx
  int result; // eax
  int v6; // edi
  int StringRoutine; // eax
  unsigned int v8; // [esp+14h] [ebp-20h] BYREF
  int v9; // [esp+18h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  v3 = RtlxOemStringToUnicodeSize(a2);
  if ( v3 > 0xFFFE )
    return -1073741584;
  *a1 = v3 - 2;
  if ( a3 )
  {
    a1[1] = v3;
    StringRoutine = NtdllpAllocateStringRoutine(v3);
    *((_DWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    v4 = (unsigned __int16)(v3 - 2) + 2;
    if ( v4 > a1[1] || v4 < 2 )
      return -2147483643;
  }
  v9 = 0;
  ms_exc.registration.TryLevel = 0;
  result = RtlOemToUnicodeN(*((_DWORD *)a1 + 1), *a1, &v8, *((_DWORD *)a2 + 1), *a2);
  v6 = result;
  v9 = result;
  if ( result >= 0 )
  {
    result = *((_DWORD *)a1 + 1);
    *(_WORD *)(result + 2 * (v8 >> 1)) = 0;
    v6 = 0;
    v9 = 0;
  }
  ms_exc.registration.TryLevel = -2;
  if ( v6 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor(*((_DWORD *)a1 + 1));
      *((_DWORD *)a1 + 1) = 0;
      return v6;
    }
  }
  return result;
}
