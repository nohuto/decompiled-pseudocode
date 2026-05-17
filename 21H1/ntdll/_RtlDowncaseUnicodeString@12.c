/*
 * XREFs of _RtlDowncaseUnicodeString@12 @ 0x4B2AAB30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDowncaseUnicodeString@12 @ 0x4B2AAB30 (_RtlDowncaseUnicodeString@12.c)
 *     _NLS_DOWNCASE@4 @ 0x4B2AABCB (_NLS_DOWNCASE@4.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

unsigned int __stdcall RtlDowncaseUnicodeString(int a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v3; // ax
  int v4; // ecx
  unsigned int result; // eax
  unsigned int i; // edi
  __int16 v7; // ax
  int StringRoutine; // eax
  unsigned int v9; // [esp+14h] [ebp-20h]

  v3 = *a2;
  v4 = *a2;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v3;
    StringRoutine = NtdllpAllocateStringRoutine(v4);
    *(_DWORD *)(a1 + 4) = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    v4 = *a2;
  }
  else if ( v3 > *(_WORD *)(a1 + 2) )
  {
    return -2147483643;
  }
  result = (unsigned __int16)v4 >> 1;
  v9 = result;
  for ( i = 0; i < result; ++i )
  {
    LOWORD(v4) = *(_WORD *)(*((_DWORD *)a2 + 1) + 2 * i);
    v7 = NLS_DOWNCASE(v4);
    v4 = *(_DWORD *)(a1 + 4);
    *(_WORD *)(v4 + 2 * i) = v7;
    result = v9;
  }
  return result;
}
