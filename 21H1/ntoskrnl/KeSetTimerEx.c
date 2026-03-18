/*
 * XREFs of KeSetTimerEx @ 0x140269FA0
 * Callers:
 *     <none>
 * Callees:
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140266C80 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140266F50 (KiCancelTimer.c)
 *     KiComputeDueTime @ 0x14026A120 (KiComputeDueTime.c)
 *     PsTimerResolutionActive @ 0x1402FF9E0 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer @ 0x14051E05C (KiTraceSetTimer.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  PKDPC v5; // r14
  LONG v6; // r12d
  _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  BOOLEAN v12; // r15
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  char *v15; // r11
  unsigned int v16; // r9d
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v5 = Dpc;
  v18 = 0;
  v6 = Period;
  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64((unsigned __int64)Dpc ^ KiWaitAlways),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    Dpc = (PKDPC)KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Period = (-1 << (CurrentIrql + 1)) & 4u | HIDWORD(Dpc->ProcessorHistory);
    HIDWORD(Dpc->ProcessorHistory) = Period;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer((__int64)Timer, 0LL, *(__int64 *)&Period, (__int64)Dpc);
  v13 = 1;
  if ( (KiVelocityFlags & 0x2000) != 0
    && (CurrentPrcb->NestingLevel
     || !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL, v11)) )
  {
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  Timer->TimerType = v14;
  Timer->Dpc = v8;
  Timer->Period = v6;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v18)
    && (v16 = v18,
        Timer->Header.SignalState = (int)v15,
        KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (unsigned __int64)v5, v16, v15)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, v5, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, (__int64)Timer, 0LL);
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 0LL, CurrentIrql);
  return v12;
}
