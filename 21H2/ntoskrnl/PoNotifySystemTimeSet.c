/*
 * XREFs of PoNotifySystemTimeSet @ 0x1403B65EC
 * Callers:
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     ExpSetSystemTime @ 0x140A52E00 (ExpSetSystemTime.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x140232788 (ExNotifyWithProcessing.c)
 *     PpmConvertTime @ 0x14029394C (PpmConvertTime.c)
 *     PopGetPolicyWorker @ 0x1402D6254 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402D62A8 (PopCheckForWork.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     PopSstDiagAddResumeTimestampAdjustment @ 0x140A47CE8 (PopSstDiagAddResumeTimestampAdjustment.c)
 *     EtwTraceSystemTimeChange @ 0x140A526FC (EtwTraceSystemTimeChange.c)
 */

void __fastcall PoNotifySystemTimeSet(__int64 *a1, __int64 *a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  int v7; // r14d
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf

  v7 = ExpRealTimeIsUniversal;
  if ( a3 == 2 )
  {
    v12 = *a1;
    if ( v12 > *a2 )
    {
      v13 = PpmConvertTime(v12 - *a2, 0x989680uLL, PopQpcFrequency);
      PopSstDiagAddResumeTimestampAdjustment(v13);
    }
  }
  if ( PsWin32CalloutsEstablished )
  {
    PopTimeChangeInfo = *a1;
    qword_140C245D8 = *a2;
    EtwTraceSystemTimeChange((_DWORD)a1, (_DWORD)a2, a3, a4, a5, v7, a7);
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
        v16 = KeGetCurrentIrql();
        if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
