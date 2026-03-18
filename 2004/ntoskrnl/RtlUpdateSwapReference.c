/*
 * XREFs of RtlUpdateSwapReference @ 0x1407B81CC
 * Callers:
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407B7FA4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x1407B8100 (CmFcpManagerDrainUsageNotifications.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A357B8 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14021E8A0 (KeRemoveProcessorAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1402201A0 (KeSubtractAffinityEx.c)
 *     PoCopyDeepIdleMask @ 0x1402E1850 (PoCopyDeepIdleMask.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     ExBlockOnAddressPushLock @ 0x140325580 (ExBlockOnAddressPushLock.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall RtlUpdateSwapReference(volatile __int64 *a1, char a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int16 v7[88]; // [rsp+40h] [rbp-C8h] BYREF

  result = (__int64)memset(v7, 0, 0xA8uLL);
  v5 = (unsigned __int64)_InterlockedExchange64(a1, a2 & 1) >> 1;
  if ( v5 )
  {
    PoCopyDeepIdleMask(v7);
    KeSubtractAffinityEx((unsigned __int16 *)KeActiveProcessors, v7, v7);
    KeRemoveProcessorAffinityEx(v7, KeGetPcr()->Prcb.Number);
    result = KeGenericProcessorCallback(
               v7,
               (void (__fastcall *)(struct _KPRCB *, __int64))xHalTimerWatchdogStop,
               0LL,
               0);
    v6 = v5 + _InterlockedExchangeAdd64(a1 + 1, v5);
    if ( v6 )
    {
      do
      {
        ExBlockOnAddressPushLock((__int64)(a1 + 2), (_QWORD *)a1 + 1, &v6, 8uLL, 0LL);
        result = *((_QWORD *)a1 + 1);
        v6 = result;
      }
      while ( result );
    }
  }
  return result;
}
