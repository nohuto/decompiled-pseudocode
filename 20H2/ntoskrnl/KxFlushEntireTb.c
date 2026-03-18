/*
 * XREFs of KxFlushEntireTb @ 0x1402EA300
 * Callers:
 *     KeFlushTb @ 0x1402EA180 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B5AB0 (KeFlushEntireTb.c)
 * Callees:
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x14021F0D0 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KeCopyAffinityEx @ 0x1402BF8E0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BF930 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x1402BF9B0 (KiIpiSendRequestEx.c)
 *     KxSetTimeStampBusy @ 0x1402DD9D8 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     KiFlushCurrentTbWorker @ 0x14030AE10 (KiFlushCurrentTbWorker.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx((__int64)KeGetCurrentPrcb(), 1, 0LL, 0, v1, KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v17, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    KeCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                         (__int64)CurrentPrcb,
                         &CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count) )
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
