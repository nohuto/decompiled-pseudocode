/*
 * XREFs of KxFlushNonGlobalTb @ 0x14023F108
 * Callers:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x140240404 (KxSetTimeStampBusy.c)
 *     KiIpiSendRequestEx @ 0x1402F42D4 (KiIpiSendRequestEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v3; // esi
  int v4; // edx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  _KPROCESS *Process; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !a1 )
  {
    _InterlockedOr(v13, 0);
    v3 = (_DWORD)CurrentPrcb + 11704;
    Process = CurrentPrcb->CurrentThread->ApcState.Process;
    CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Reserved = 0;
    *(_DWORD *)&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count = 2097153;
    memset(
      &CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8,
      0,
      sizeof(CurrentPrcb->StaticAffinity.KeSyncContextAffinity.8));
    KiCopyAffinityEx(
      &CurrentPrcb->StaticAffinity,
      CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Size,
      &Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v4 = 0;
    goto LABEL_11;
  }
  v3 = 0;
  v4 = 1;
  if ( !KiKvaShadow )
  {
LABEL_11:
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, v4, v3, 0, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    goto LABEL_6;
  }
  if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp, 1LL) )
  {
    KiIpiSendRequestEx((_DWORD)CurrentPrcb, 1, 0, 0, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
    _InterlockedAdd(&KiTbFlushTimeStamp, 1u);
  }
LABEL_6:
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
