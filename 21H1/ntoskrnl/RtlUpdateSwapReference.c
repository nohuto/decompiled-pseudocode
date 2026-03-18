/*
 * XREFs of RtlUpdateSwapReference @ 0x1407B505C
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407B4E34 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B4F90 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1402791F0 (KeSubtractAffinityEx.c)
 *     ExBlockOnAddressPushLock @ 0x1402EBC50 (ExBlockOnAddressPushLock.c)
 *     PoCopyDeepIdleMask @ 0x140326950 (PoCopyDeepIdleMask.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

char __fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 v8[88]; // [rsp+40h] [rbp-C8h] BYREF

  LOBYTE(v4) = (unsigned __int8)memset(v8, 0, 0xA8uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    PoCopyDeepIdleMask(v8);
    KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v8, v8);
    KeRemoveProcessorAffinityEx(v8, KeGetPcr()->Prcb.Number);
    LOBYTE(v4) = KeGenericProcessorCallback(
                   v8,
                   (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop,
                   0LL,
                   0);
    v7 = v5 + _InterlockedExchangeAdd64(a1 + 1, v5);
    if ( v7 )
    {
      do
      {
        ExBlockOnAddressPushLock((__int64)(a1 + 2), (_QWORD *)a1 + 1, &v7, 8uLL, 0LL);
        v4 = *((_QWORD *)a1 + 1);
        v7 = v4;
      }
      while ( v4 );
    }
  }
  return v4;
}
