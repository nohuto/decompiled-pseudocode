/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x140621A00
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140621B54 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140621E1C (ExpWnfCompleteThreadSubscriptions.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 */

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v9;
}
