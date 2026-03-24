/*
 * XREFs of KxFlushEntireTb @ 0x14022F980
 * Callers:
 *     KeFlushTb @ 0x140230120 (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403B70F0 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x14024A678 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     KiFlushCurrentTbWorker @ 0x1402A7E60 (KiFlushCurrentTbWorker.c)
 *     KeCopyAffinityEx @ 0x14033B450 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14033B4A0 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x14033B9A0 (KiIpiSendRequestEx.c)
 *     HvlNotifyLongSpinWait @ 0x140390140 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390F20 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  __int64 v1; // r14
  bool v2; // r10
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _KSTATIC_AFFINITY_BLOCK *p_StaticAffinity; // rbx
  unsigned int v6; // edi
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // rdx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  signed __int32 v20[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v21; // [rsp+20h] [rbp-38h]

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
    _InterlockedOr(v20, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    p_StaticAffinity = &CurrentPrcb->StaticAffinity;
    KeCopyAffinityEx(&CurrentPrcb->StaticAffinity, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v6 = 0;
    v7 = 0;
    if ( CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count )
    {
      while ( 1 )
      {
        v8 = p_StaticAffinity->KeFlushTbAffinity.Bitmap[v7];
        if ( v8 )
        {
          if ( v7 != CurrentPrcb->Group || v8 != CurrentPrcb->GroupSetMember )
            break;
        }
        if ( ++v7 >= p_StaticAffinity->KeFlushTbAffinity.Count )
          goto LABEL_9;
      }
      KiIpiSendRequest((_DWORD)CurrentPrcb, 0, (_DWORD)CurrentPrcb + 11704, 0, v1);
      KiFlushCurrentTbWorker(0LL);
      while ( CurrentPrcb->PacketBarrier )
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v12, v11, v13, v14, v21) )
        {
          HvlNotifyLongSpinWait(v6);
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
      KiFlushCurrentTbWorker(0LL);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
