/*
 * XREFs of PopPowerButtonWorkCallback @ 0x140576E40
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 *     KeSetTimer2 @ 0x1402E0AF0 (KeSetTimer2.c)
 *     KeDisableTimer2 @ 0x14033C330 (KeDisableTimer2.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     KeInitializeIRTimer @ 0x140380E80 (KeInitializeIRTimer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopRecordPhysicalPowerButton @ 0x1408E3CC0 (PopRecordPhysicalPowerButton.c)
 *     PopDiagTracePowerButtonBugcheck @ 0x1408ED5F8 (PopDiagTracePowerButtonBugcheck.c)
 *     PopPublishPowerButtonState @ 0x1408F49F8 (PopPublishPowerButtonState.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x1408F4A60 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopRecordPoBlackboxInformation @ 0x1408FD230 (PopRecordPoBlackboxInformation.c)
 */

__int64 PopPowerButtonWorkCallback()
{
  unsigned __int64 v0; // rdi
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  __int64 v8; // rsi
  __int64 result; // rax
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  ULONG ActiveConsoleId; // eax
  __int64 v13; // rdx
  ULONG_PTR SessionById; // rax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int128 v17; // [rsp+40h] [rbp-48h]
  __int128 v18; // [rsp+50h] [rbp-38h]
  __int128 v19; // [rsp+60h] [rbp-28h]

  v15 = 0;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  LOBYTE(v0) = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  do
  {
    v1 = qword_140C20778;
    v16 = qword_140C20778;
    KxReleaseSpinLock(&PopPowerButtonHold);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v2 = (unsigned int)(unsigned __int8)v0 + 1;
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8((unsigned __int8)v0);
    v8 = HIDWORD(v16);
    if ( (dword_140C20780 & 1) != 0 && ((v1 & 1) == 0 || HIDWORD(v16) != dword_140C20784) )
    {
      PopRecordPhysicalPowerButton(0LL);
      dword_140C20780 = 0;
      byte_140C207E8 = 0;
      PopPublishPowerButtonState(&dword_140C20780);
      KeDisableTimer2((__int64)&unk_140C206C8, 1, 1, 0LL);
    }
    if ( (v1 & 1) != 0 )
    {
      if ( (dword_140C20780 & 1) == 0 )
      {
        LOBYTE(v2) = 1;
        PopRecordPhysicalPowerButton(v2);
        dword_140C20784 = v8;
        dword_140C20788 = PopQueryPowerButtonBugcheckEnabled();
        v15 = 65544;
        KeInitializeIRTimer(
          (__int64)&unk_140C206C8,
          (__int64)PopPowerButtonTimerCallback,
          v8,
          (unsigned __int8 *)&v15,
          2);
        KeSetTimer2((__int64)&unk_140C206C8, -10000000LL, 10000000LL, 0LL);
      }
      dword_140C20780 = v1;
      PopPublishPowerButtonState(&dword_140C20780);
      if ( v1 >> 1 >= 0x1B58 )
      {
        if ( PopAcpiPdttSupportEnabled )
          ((void (__fastcall *)(_QWORD))qword_140C009F8)(0LL);
        PopDiagTracePowerButtonBugcheck(v1 >> 1);
        PopRecordPoBlackboxInformation();
        if ( dword_140C20788 )
        {
          ActiveConsoleId = RtlGetActiveConsoleId();
          SessionById = MmGetSessionById(ActiveConsoleId, v13);
          if ( SessionById && (int)MmAttachSession(SessionById) < 0 )
            DbgPrintEx(0x92u, 3u, "Unable to attach to active session\n");
          KeBugCheckEx(0x1C8u, (unsigned __int64)v1 >> 1, (ULONG_PTR)&PopPowerButtonTriageBlock, 0LL, 0LL);
        }
      }
    }
    v0 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  }
  while ( __PAIR64__(v8, v1) != qword_140C20778 );
  _InterlockedExchange(&dword_140C20770, 0);
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v0 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v10 = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
        v11 = v10->SchedulerAssist;
        v7 = ((unsigned int)result & v11[5]) == 0;
        v11[5] &= result;
        if ( v7 )
          result = KiRemoveSystemWorkPriorityKick((__int64)v10);
      }
    }
  }
  __writecr8(v0);
  return result;
}
