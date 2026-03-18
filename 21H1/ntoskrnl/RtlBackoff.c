/*
 * XREFs of RtlBackoff @ 0x14035A2A0
 * Callers:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 *     KiCheckForTimerExpiration @ 0x1402725E0 (KiCheckForTimerExpiration.c)
 *     KiSetDpcRequestFlag @ 0x1403027F4 (KiSetDpcRequestFlag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14035A060 (ExfAcquirePushLockSharedEx.c)
 *     RtlAcquireSwapReference @ 0x1403A35C8 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A393C (RtlReleaseSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058970C (RtlpFcAddDelayedUsageReportToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
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
    result = (unsigned int)KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  v4 = 0;
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
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
