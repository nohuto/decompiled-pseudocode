/*
 * XREFs of KiCheckWaitNext @ 0x140217E70
 * Callers:
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 *     KeWaitForAlertByThreadId @ 0x140217B04 (KeWaitForAlertByThreadId.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 */

__int64 __fastcall KiCheckWaitNext(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int8 v6; // cf
  unsigned __int8 v7; // si
  unsigned __int8 CurrentIrql; // r10
  __int64 UnbiasedInterruptTime; // rcx
  _DWORD *v12; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v6 = _bittestandreset((signed __int32 *)(a1 + 116), 2u);
  v15 = 0LL;
  v7 = v6;
  if ( !v6 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    *(_BYTE *)(a1 + 390) = CurrentIrql;
  }
  if ( a2 )
  {
    if ( *(int *)(a2 + 4) >= 0 )
    {
      *a4 = *(_QWORD *)a2;
      *a5 = 1;
    }
    else
    {
      if ( a3 )
        UnbiasedInterruptTime = RtlGetInterruptTimePrecise(&v15) - MEMORY[0xFFFFF780000003B0];
      else
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(0LL);
      v12 = a5;
      *a4 = UnbiasedInterruptTime - *(_QWORD *)(a1 + 248) - *(_QWORD *)a2;
      *v12 = 2;
    }
  }
  else
  {
    *a5 = 0;
  }
  return v7;
}
