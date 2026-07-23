/*
 * XREFs of HalpSetSystemInformation @ 0x1407335A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PsGetCurrentThreadProcessId @ 0x14029E930 (PsGetCurrentThreadProcessId.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpSetProfileSourceInterval @ 0x14036CF4C (HalpSetProfileSourceInterval.c)
 *     HalpGetCpuInfo @ 0x1403A10C0 (HalpGetCpuInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpTimerGetProfilingHandler @ 0x1404C1A78 (HalpTimerGetProfilingHandler.c)
 *     HalpTimerSetProfilingHandler @ 0x1404C1BE4 (HalpTimerSetProfilingHandler.c)
 *     HaliSetSystemInformation @ 0x140866584 (HaliSetSystemInformation.c)
 */

__int64 __fastcall HalpSetSystemInformation(int a1, int a2, __int64 (**a3)(void))
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  unsigned __int8 v18; // [rsp+30h] [rbp+8h] BYREF

  v18 = 0;
  switch ( a1 )
  {
    case 0:
      if ( a2 == 8 )
        return HalpSetProfileSourceInterval();
      return 3221225476LL;
    case 1:
      if ( a2 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 1) == 0 )
        return 3221225473LL;
      v6 = 0;
      v7 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
      if ( qword_140CF5600 )
      {
        if ( qword_140CF5600 == PsGetCurrentThreadProcessId() )
        {
          HalpPerfInterruptHandler = (__int64 (__fastcall *)(_QWORD))*a3;
          if ( !HalpPerfInterruptHandler )
            qword_140CF5600 = 0LL;
        }
        else
        {
          v6 = -1073741823;
        }
      }
      else
      {
        HalpPerfInterruptHandler = (__int64 (__fastcall *)(_QWORD))*a3;
        if ( HalpPerfInterruptHandler )
          qword_140CF5600 = PsGetCurrentThreadProcessId();
      }
      KxReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock);
      if ( !KiIrqlFlags )
        goto LABEL_59;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_59;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu )
        goto LABEL_59;
      if ( (unsigned __int8)v7 > 0xFu )
        goto LABEL_59;
      if ( CurrentIrql < 2u )
        goto LABEL_59;
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( !v12 )
        goto LABEL_59;
      v13 = (__int64)CurrentPrcb;
      goto LABEL_58;
    case 10:
      if ( a2 != 8 )
        return 3221225476LL;
      v6 = 0;
      v7 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
      if ( !qword_140CF55F0 )
      {
        HalpTimerSetProfilingHandler(*a3);
        if ( HalpTimerGetProfilingHandler() )
          qword_140CF55F0 = PsGetCurrentThreadProcessId();
        goto LABEL_34;
      }
      if ( qword_140CF55F0 == PsGetCurrentThreadProcessId() )
      {
        HalpTimerSetProfilingHandler(*a3);
        if ( !HalpTimerGetProfilingHandler() )
          qword_140CF55F0 = 0LL;
        goto LABEL_34;
      }
      goto LABEL_33;
    case 19:
      if ( !HalpGetCpuInfo(0LL, 0LL, 0LL, &v18) || v18 != 2 )
        return 3221225659LL;
      if ( a2 != 8 )
        return 3221225476LL;
      if ( (HalpFeatureBits & 0x41) != 0x41 )
        return 3221225659LL;
      v6 = 0;
      v7 = KeAcquireSpinLockRaiseToDpc(&HalpPerfInterruptHandlerRegistrationLock);
      if ( !qword_140CF55F8 )
      {
        HalpProcessorTraceInterruptHandler = (__int64 (__fastcall *)(_QWORD))*a3;
        if ( HalpProcessorTraceInterruptHandler )
          qword_140CF55F8 = PsGetCurrentThreadProcessId();
        goto LABEL_34;
      }
      if ( qword_140CF55F8 == PsGetCurrentThreadProcessId() )
      {
        HalpProcessorTraceInterruptHandler = (__int64 (__fastcall *)(_QWORD))*a3;
        if ( !HalpProcessorTraceInterruptHandler )
          qword_140CF55F8 = 0LL;
        goto LABEL_34;
      }
LABEL_33:
      v6 = -1073741823;
LABEL_34:
      KxReleaseSpinLock(&HalpPerfInterruptHandlerRegistrationLock);
      if ( !KiIrqlFlags )
        goto LABEL_59;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_59;
      v8 = KeGetCurrentIrql();
      if ( v8 > 0xFu )
        goto LABEL_59;
      if ( (unsigned __int8)v7 > 0xFu )
        goto LABEL_59;
      if ( v8 < 2u )
        goto LABEL_59;
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( !v12 )
        goto LABEL_59;
      v13 = (__int64)v9;
LABEL_58:
      KiRemoveSystemWorkPriorityKick(v13);
LABEL_59:
      __writecr8(v7);
      return v6;
  }
  if ( a1 != 20 )
  {
    if ( a1 != 21 )
      return HaliSetSystemInformation();
    if ( a2 == 176 )
      return (*((__int64 (__fastcall **)(__int64 (**)(void)))HalpProfileInterface[0] + 11))(a3);
    return 3221225476LL;
  }
  if ( (unsigned int)(a2 - 192) > 0x1F6 )
    return 3221225476LL;
  return (*((__int64 (__fastcall **)(__int64 (**)(void), _QWORD))HalpProfileInterface[0] + 10))(a3, 0LL);
}
