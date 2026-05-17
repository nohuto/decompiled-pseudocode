/*
 * XREFs of _RtlpEnsureBufferSize@12 @ 0x4B2E1480
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0 (_RtlMultiAppendUnicodeStringBuffer@12.c)
 *     _RtlNtPathNameToDosPathName@16 @ 0x4B32D370 (_RtlNtPathNameToDosPathName@16.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpEnsureBufferSize(int a1, int a2, unsigned int a3)
{
  void *StringRoutine; // eax
  void *v4; // ebx

  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    return -1073741811;
  if ( a3 <= *(_DWORD *)(a2 + 8) )
    return 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)(a2 + 4) && a3 <= *(_DWORD *)(a2 + 12) )
  {
LABEL_12:
    *(_DWORD *)(a2 + 8) = a3;
    return 0;
  }
  StringRoutine = (void *)NtdllpAllocateStringRoutine(a3);
  v4 = StringRoutine;
  if ( StringRoutine )
  {
    if ( (a1 & 1) == 0 )
      memcpy(StringRoutine, *(const void **)a2, *(_DWORD *)(a2 + 8));
    if ( *(_DWORD *)a2 != *(_DWORD *)(a2 + 4) )
      RtlDeleteBoundaryDescriptor(*(_DWORD *)a2);
    *(_DWORD *)a2 = v4;
    goto LABEL_12;
  }
  return -1073741801;
}
