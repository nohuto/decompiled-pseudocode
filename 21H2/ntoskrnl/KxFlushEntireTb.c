/*
 * XREFs of KxFlushEntireTb @ 0x1402D41D0
 * Callers:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B7260 (KeFlushEntireTb.c)
 * Callees:
 *     KiFlushCurrentTbWorker @ 0x140225FA0 (KiFlushCurrentTbWorker.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     KxSetTimeStampBusy @ 0x1402EEEC8 (KxSetTimeStampBusy.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x1403466F0 (KiIpiSendRequestEx.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1, __int64 a2)
{
  __int64 v2; // r14
  bool v3; // r10
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // edi
  unsigned __int16 v10; // ax
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  signed __int32 v24[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+20h] [rbp-38h]

  v2 = 3LL;
  v3 = 1;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v3 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= a2;
  }
  if ( v3 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp, a2) )
    {
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v24, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    p_StaticAffinity = &CurrentPrcb->StaticAffinity;
    KeCopyAffinityEx(&CurrentPrcb->StaticAffinity, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v9 = 0;
    v10 = 0;
    if ( CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count )
    {
      while ( 1 )
      {
        v7 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v10];
        if ( v7 )
        {
          if ( v10 != CurrentPrcb->Group || v7 != CurrentPrcb->GroupSetMember )
            break;
        }
        if ( ++v10 >= p_StaticAffinity->KeFlushTbAffinity.Count )
          goto LABEL_9;
      }
      KiIpiSendRequest((__int64)CurrentPrcb, 0, &CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, 0LL, v2);
      KiFlushCurrentTbWorker(0LL, v13, v14);
      while ( CurrentPrcb->PacketBarrier )
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v16, v15, v17, v18, v25) )
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
LABEL_9:
      KiFlushCurrentTbWorker(0LL, v7, v8);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v19 = KeGetCurrentIrql();
      if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
      {
        v20 = KeGetCurrentPrcb();
        v21 = v20->SchedulerAssist;
        v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v22 & v21[5]) == 0;
        v21[5] &= v22;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v20);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
