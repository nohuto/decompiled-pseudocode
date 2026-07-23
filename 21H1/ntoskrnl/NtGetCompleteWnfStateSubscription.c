/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x140667120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140667274 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14066753C (ExpWnfCompleteThreadSubscriptions.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // ebx
  unsigned __int64 v10; // r14
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = (__int64)OldDescriptorStateName;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  v10 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[7];
  if ( v10 )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_11;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      if ( (unsigned __int64)OldDescriptorStateName >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      v12 = *(_QWORD *)v7;
      if ( (unsigned __int64)OldSubscriptionId >= 0x7FFFFFFF0000LL )
        OldSubscriptionId = (ULONG64 *)0x7FFFFFFF0000LL;
      v9 = ExpWnfCompleteThreadSubscriptions(
             v10,
             (unsigned int)&v12,
             *OldSubscriptionId,
             OldDescriptorEventMask,
             OldDescriptorStatus);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(NewDeliveryDescriptor, DescriptorSize, 8u);
            v9 = ExpWnfDeliverThreadNotifications(v10, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread(
    (__int64)KeGetCurrentThread(),
    v7,
    *(__int64 *)&OldDescriptorEventMask,
    *(__int64 *)&OldDescriptorStatus);
  return v9;
}
