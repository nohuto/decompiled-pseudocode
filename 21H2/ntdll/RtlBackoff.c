/*
 * XREFs of RtlBackoff @ 0x18005E2E8
 * Callers:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlpFreeHeap @ 0x180025C00 (RtlpFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004F1F8 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18005E074 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x18005E26C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlTryAcquireSRWLockShared @ 0x180077DC0 (RtlTryAcquireSRWLockShared.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  struct _TEB *result; // rax
  unsigned __int64 v3; // rax
  unsigned int v4; // [rsp+8h] [rbp+8h]

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( result->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v4 = 0;
  result = (struct _TEB *)(10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0x7FFE02D6]);
  if ( (_DWORD)result )
  {
    do
    {
      _mm_pause();
      ++v4;
    }
    while ( v4 < (unsigned int)result );
  }
  return result;
}
