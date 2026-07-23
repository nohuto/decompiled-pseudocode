/*
 * XREFs of KeSetTimerEx @ 0x1402816A0
 * Callers:
 *     <none>
 * Callees:
 *     KiComputeDueTime @ 0x140281820 (KiComputeDueTime.c)
 *     PsTimerResolutionActive @ 0x1402818E4 (PsTimerResolutionActive.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140352D50 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140353020 (KiCancelTimer.c)
 *     KiTraceSetTimer @ 0x140523D9C (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  char CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v11; // r15
  __int16 v12; // dx
  unsigned __int16 v13; // ax
  __int64 v14; // r11
  int v15; // r9d
  _DWORD *SchedulerAssist; // r9
  int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0;
  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = KiCancelTimer(Timer, 0LL);
  v12 = 1;
  if ( (KiVelocityFlags & 0x2000) != 0
    && (CurrentPrcb->NestingLevel
     || !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL)) )
  {
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  Timer->TimerType = v13;
  Timer->Dpc = v8;
  Timer->Period = Period;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v18)
    && (v15 = v18,
        Timer->Header.SignalState = v14,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v15, v14)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
  }
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v11;
}
