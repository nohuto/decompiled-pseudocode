/*
 * XREFs of PoFxActivateComponent @ 0x140245E90
 * Callers:
 *     PopFxActivateDevice @ 0x14036D700 (PopFxActivateDevice.c)
 *     HalpDmaInitPowerManagement @ 0x1403BA6E0 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1403BD2C0 (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403BD3DC (HalpTimerInitPowerManagement.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BD510 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x1407AF52C (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140A76AE8 (PoFxRegisterDebugger.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     PopFxActivateComponentWorker @ 0x140246130 (PopFxActivateComponentWorker.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopFxBugCheck @ 0x14056791C (PopFxBugCheck.c)
 */

int __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  int v5; // ebp
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // r8
  $C774EFD68449142D8271B1EC1EB7FB26 *v9; // rax
  char v10; // si
  _BYTE *SchedulerAssist; // r9
  struct _KTHREAD *v12; // rcx
  bool v13; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _BYTE v18[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a3 & 1;
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  memset(v18, 0, 0x40uLL);
  LODWORD(v9) = *(_DWORD *)(BugCheckParameter2 + 824);
  if ( ((unsigned __int8)v9 & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v10 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v10 = 0;
    }
    SchedulerAssist = v18;
    if ( (a3 & 2) != 0 )
      SchedulerAssist = 0LL;
    LODWORD(v9) = _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    if ( (_DWORD)v9 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      LODWORD(v9) = PopFxActivateComponentWorker(BugCheckParameter2, v6, 0LL, SchedulerAssist);
    }
    else
    {
      if ( (int)v9 < 0 )
      {
LABEL_12:
        if ( v10 )
        {
          v12 = KeGetCurrentThread();
          v13 = v12->SpecialApcDisable++ == -1;
          if ( v13 )
          {
            v9 = &v12->152;
            if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v9->ApcState.ApcListHead[0].Flink != v9 )
              LODWORD(v9) = KiCheckForKernelApcDelivery(v12, v7, v8, SchedulerAssist);
          }
        }
        return (int)v9;
      }
      if ( ((unsigned int)v9 & 0x40000000) != 0 )
      {
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 128));
        LODWORD(v9) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LODWORD(v9) = KeGetCurrentIrql();
            if ( (unsigned __int8)v9 <= 0xFu && (unsigned __int8)v15 <= 0xFu && (unsigned __int8)v9 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v7 = -1LL << ((unsigned __int8)v15 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              LODWORD(v9) = ~(unsigned __int16)v7;
              v13 = ((unsigned int)v9 & *((_DWORD *)SchedulerAssist + 5)) == 0;
              v8 = (unsigned int)v9 & *((_DWORD *)SchedulerAssist + 5);
              *((_DWORD *)SchedulerAssist + 5) = v8;
              if ( v13 )
                LODWORD(v9) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v15);
      }
    }
    if ( v5 )
      LODWORD(v9) = KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
    goto LABEL_12;
  }
  return (int)v9;
}
