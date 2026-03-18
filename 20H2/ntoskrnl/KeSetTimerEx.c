/*
 * XREFs of KeSetTimerEx @ 0x1402476E0
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x14021DDF0 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x14021E0C0 (KiCancelTimer.c)
 *     KiComputeDueTime @ 0x140247860 (KiComputeDueTime.c)
 *     PsTimerResolutionActive @ 0x140247924 (PsTimerResolutionActive.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x14052207C (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v8; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  BOOLEAN v11; // r15
  __int16 v12; // dx
  unsigned __int16 v13; // ax
  char *v14; // r11
  unsigned int v15; // r9d
  _DWORD *SchedulerAssist; // r9
  unsigned int v18; // [rsp+70h] [rbp+18h] BYREF

  v18 = 0;
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
  v11 = KiCancelTimer((__int64)Timer, 0);
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
        Timer->Header.SignalState = (int)v14,
        KiInsertTimerTable((__int64)CurrentPrcb, (__int64)Timer, (__int64)Dpc, v15, v14)) )
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
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v11;
}
