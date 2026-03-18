/*
 * XREFs of RtlBackoff @ 0x140242080
 * Callers:
 *     ExfAcquirePushLockExclusiveEx @ 0x140241C10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140241E40 (ExfAcquirePushLockSharedEx.c)
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 *     KiCheckForTimerExpiration @ 0x140284000 (KiCheckForTimerExpiration.c)
 *     KiSetDpcRequestFlag @ 0x1402F7E24 (KiSetDpcRequestFlag.c)
 *     RtlAcquireSwapReference @ 0x1403A60F8 (RtlAcquireSwapReference.c)
 *     RtlReleaseSwapReference @ 0x1403A64C8 (RtlReleaseSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x14058D82C (RtlpFcAddDelayedUsageReportToBuffer.c)
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
