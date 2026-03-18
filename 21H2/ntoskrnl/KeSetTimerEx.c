/*
 * XREFs of KeSetTimerEx @ 0x1403575C0
 * Callers:
 *     ViPendingDelayCompletion @ 0x140A91368 (ViPendingDelayCompletion.c)
 * Callees:
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402B7800 (KiInsertTimerTable.c)
 *     KiComputeDueTime @ 0x140357790 (KiComputeDueTime.c)
 *     KiCancelTimer @ 0x140357840 (KiCancelTimer.c)
 *     PsTimerResolutionActive @ 0x140357CE4 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer @ 0x14057AAF8 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  BOOLEAN v12; // r15
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  char *v15; // r11
  unsigned int v16; // r9d
  _DWORD *SchedulerAssist; // r9
  unsigned int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0;
  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(Timer, 0LL);
  v13 = 1;
  if ( KiGlobalTimerResolutionRequests
    || !CurrentPrcb->NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL, v11) )
  {
    v14 = 0;
  }
  else
  {
    v14 = v13;
  }
  Timer->TimerType = v14;
  Timer->Dpc = v8;
  Timer->Period = Period;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v19)
    && (v16 = v19,
        Timer->Header.SignalState = (int)v15,
        KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, v16, v15)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, (unsigned __int64)Timer, 0LL);
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v12;
}
