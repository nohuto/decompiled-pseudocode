/*
 * XREFs of KiSynchronizeStibpPairing @ 0x14045A748
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14020C9F0 (KiUpdateSpeculationControl.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KiIpiSendPacket @ 0x1402F38C4 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KiSynchronizeStibpPairing(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax
  _DWORD v11[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v11[2], 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0x1FFC;
  }
  v4 = *(_QWORD *)(a1 + 11696);
  v11[0] = 2097153;
  memset(&v11[1], 0, 0x104uLL);
  KeAddProcessorAffinityEx((unsigned __int16 *)v11, *(_DWORD *)(v4 + 36));
  KiIpiSendPacket(0, (int)v11, (__int64)KiSynchronizeStibpPairingTarget, 0LL, 0LL, 0LL);
  while ( *(_DWORD *)(a1 + 11648) )
    _mm_pause();
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v5 = KeGetCurrentIrql();
      if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v7 = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
