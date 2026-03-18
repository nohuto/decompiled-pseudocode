/*
 * XREFs of KxFlushEntireTb @ 0x14021E6D0
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B3140 (KeFlushEntireTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14021E8A0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x14023A250 (KiIpiSendRequestEx.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14023A330 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KxSetTimeStampBusy @ 0x140280BB4 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     KiFlushCurrentTbWorker @ 0x140338630 (KiFlushCurrentTbWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  __int64 v1; // rbp
  bool v2; // r10
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  signed __int32 v17[8]; // [rsp+0h] [rbp-48h] BYREF

  v1 = 3LL;
  v2 = 1;
  if ( a1 == 1 )
  {
    v1 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v2 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  if ( v2 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, v1, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v17, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx(&CurrentPrcb->StaticAffinity, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(CurrentPrcb, &CurrentPrcb->StaticAffinity) )
    {
      KiIpiSendRequest((_DWORD)CurrentPrcb, 0, (_DWORD)CurrentPrcb + 11704, 0, v1);
      KiFlushCurrentTbWorker(0LL);
      v9 = 0;
      while ( CurrentPrcb->PacketBarrier )
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v6, v5, v7, v8) )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
      KiFlushCurrentTbWorker(0LL);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
