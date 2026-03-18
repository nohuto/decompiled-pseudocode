/*
 * XREFs of PoNotifySystemTimeSet @ 0x1403A6F44
 * Callers:
 *     ExpRefreshSystemTime @ 0x14079EFDC (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x14099BDD8 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140A3DB24 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x14030FBC8 (ExNotifyWithProcessing.c)
 *     PopCheckForWork @ 0x1403633A0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140363800 (PopGetPolicyWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceSystemTimeChange @ 0x14099BAF8 (EtwTraceSystemTimeChange.c)
 */

void __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf

  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140C24FC8 = *a2;
    EtwTraceSystemTimeChange();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExNotifyWithProcessing(ExCbSetSystemTime, 0LL, 0LL, 0LL);
    PopGetPolicyWorker(16);
    PopCheckForWork();
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v4 = KeGetCurrentIrql();
        if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v7 & v6[5]) == 0;
          v6[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
