/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x1800D8A38
 * Callers:
 *     RtlCommitDebugInfo @ 0x1800D7420 (RtlCommitDebugInfo.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D7720 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7D90 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8170 (RtlQueryProcessLockInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D8410 (RtlQueryProcessModuleInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8AD0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D8EA0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800D9580 (RtlpWalkCallbackRoutine.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB264 (AVrfpQueryProcessVerifierOptions.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D940 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // [rsp+50h] [rbp+18h]

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9];
    v4 = a1[10];
    v5 = v3 + ((a2 + 7) & 0xFFFFFFF8);
    if ( v5 <= v4 )
    {
LABEL_6:
      a1[9] = v5;
      return (char *)a1 + v3;
    }
    if ( v5 < a1[11] )
    {
      v7 = v5 - v4;
      if ( (int)ZwAllocateVirtualMemory() >= 0 )
      {
        a1[10] += v7;
        v3 = a1[9];
        goto LABEL_6;
      }
    }
  }
  return 0LL;
}
