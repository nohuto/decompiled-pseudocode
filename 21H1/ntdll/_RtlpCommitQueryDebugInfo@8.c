/*
 * XREFs of _RtlpCommitQueryDebugInfo@8 @ 0x4B3378A8
 * Callers:
 *     _RtlCommitDebugInfo@8 @ 0x4B3367F0 (_RtlCommitDebugInfo@8.c)
 *     _RtlQueryProcessBackTraceInformation@4 @ 0x4B336A00 (_RtlQueryProcessBackTraceInformation@4.c)
 *     _RtlQueryProcessHeapInformation@4 @ 0x4B336F80 (_RtlQueryProcessHeapInformation@4.c)
 *     _RtlQueryProcessLockInformation@4 @ 0x4B337290 (_RtlQueryProcessLockInformation@4.c)
 *     _RtlQueryProcessModuleInformation@12 @ 0x4B337478 (_RtlQueryProcessModuleInformation@12.c)
 *     _RtlpCopyRemoteDebugInformation@4 @ 0x4B33790E (_RtlpCopyRemoteDebugInformation@4.c)
 *     _RtlpQueryProcessEnumHeapsRoutine@8 @ 0x4B337B10 (_RtlpQueryProcessEnumHeapsRoutine@8.c)
 *     _RtlpWalkCallbackRoutine@8 @ 0x4B338140 (_RtlpWalkCallbackRoutine@8.c)
 *     _AVrfpQueryProcessVerifierOptions@4 @ 0x4B339457 (_AVrfpQueryProcessVerifierOptions@4.c)
 * Callees:
 *     _NtAllocateVirtualMemory@24 @ 0x4B2F2AE0 (_NtAllocateVirtualMemory@24.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_DWORD *a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi
  char *v7; // [esp+8h] [ebp-8h] BYREF
  unsigned int v8; // [esp+Ch] [ebp-4h] BYREF

  if ( a2 <= 0xFFFFFFFC )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 3) & 0xFFFFFFFC);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v7 = (char *)a1 + v4;
      v8 = v5 - v4;
      if ( NtAllocateVirtualMemory(-1, (int)&v7, 0, (int)&v8, 4096, 4) >= 0 )
      {
        a1[10] += v8;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0;
}
