/*
 * XREFs of KxFlushEntireTb @ 0x1402F411C
 * Callers:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushEntireTb @ 0x1403C39C0 (KeFlushEntireTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140240404 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v1; // r10
  __int64 v2; // r15
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _KPROCESS *Process; // rbx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF

  v1 = 1;
  v2 = 3LL;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v1 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  if ( v1 )
  {
    if ( KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
    }
  }
  else
  {
    _InterlockedOr(v13, 0);
    CurrentPrcb = KeGetCurrentPrcb();
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    *(_QWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153LL;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, 0, (_DWORD)CurrentPrcb + 11704, 0, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
