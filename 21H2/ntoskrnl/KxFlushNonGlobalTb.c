/*
 * XREFs of KxFlushNonGlobalTb @ 0x140230244
 * Callers:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 * Callees:
 *     KxSetTimeStampBusy @ 0x1402EEEC8 (KxSetTimeStampBusy.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x1403466F0 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushNonGlobalTb(int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  int v3; // esi
  int v4; // edx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF

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
    _InterlockedOr(v12, 0);
    v3 = (_DWORD)CurrentPrcb + 11704;
    KeCopyAffinityEx(&CurrentPrcb->StaticAffinity, &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity, CurrentPrcb->Number);
    v4 = 0;
    goto LABEL_12;
  }
  v3 = 0;
  v4 = 1;
  if ( !KiKvaShadow )
  {
LABEL_12:
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
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v8);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
