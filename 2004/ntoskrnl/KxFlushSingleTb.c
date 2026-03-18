/*
 * XREFs of KxFlushSingleTb @ 0x14031CF8C
 * Callers:
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 * Callees:
 *     KeRemoveProcessorAffinityEx @ 0x14021E8A0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     KiIpiSendRequestEx @ 0x14023A250 (KiIpiSendRequestEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KxFlushSingleTb(__int64 a1, int a2, int a3)
{
  __int64 v3; // r14
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 p_StaticAffinity; // rdi
  int v7; // edx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r9
  _DWORD *v12; // r8
  int v13; // eax
  bool v14; // zf
  signed __int32 v15[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  int v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+4Ch] [rbp-1Ch]

  v18 = 0;
  v3 = 2147483650LL;
  v17 = a2;
  v16 = a1;
  if ( a3 != 1 )
    v3 = 2LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( a3 )
  {
    p_StaticAffinity = 0LL;
    v7 = 1;
  }
  else
  {
    _InterlockedOr(v15, 0);
    p_StaticAffinity = (__int64)&CurrentPrcb->StaticAffinity;
    KeCopyAffinityEx(
      (__int64)&CurrentPrcb->StaticAffinity,
      &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors.Count);
    KeRemoveProcessorAffinityEx(&CurrentPrcb->StaticAffinity.KeFlushTbAffinity.Count, CurrentPrcb->Number);
    v7 = 0;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v7,
    p_StaticAffinity,
    (int)&v16,
    v3,
    (__int64 (__fastcall *)(__int64))KiFlushSingleTbWorker,
    (__int64)&v16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v14 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
