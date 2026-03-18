/*
 * XREFs of PoFxActivateComponent @ 0x1402CA2F0
 * Callers:
 *     PopFxActivateDevice @ 0x14036B720 (PopFxActivateDevice.c)
 *     HalpDmaInitPowerManagement @ 0x1403B7C40 (HalpDmaInitPowerManagement.c)
 *     HalpInterruptInitPowerManagement @ 0x1403BAE40 (HalpInterruptInitPowerManagement.c)
 *     HalpTimerInitPowerManagement @ 0x1403BAF5C (HalpTimerInitPowerManagement.c)
 *     PoFxStartDevicePowerManagement @ 0x1403BB090 (PoFxStartDevicePowerManagement.c)
 *     PopFxUnregisterDevice @ 0x1407A01FC (PopFxUnregisterDevice.c)
 *     PoFxRegisterDebugger @ 0x140A706B0 (PoFxRegisterDebugger.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     PopFxActivateComponentWorker @ 0x1402CA494 (PopFxActivateComponentWorker.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PopFxBugCheck @ 0x140563F3C (PopFxBugCheck.c)
 */

char __fastcall PoFxActivateComponent(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, char a3)
{
  int v5; // ebp
  __int64 v6; // r14
  $C774EFD68449142D8271B1EC1EB7FB26 *v7; // rax
  char v8; // si
  _BYTE *v9; // r9
  struct _KTHREAD *v10; // rcx
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v13; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  _BYTE v17[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = a3 & 1;
  if ( (a3 & 1) != 0 && KeGetCurrentIrql() >= 2u )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  if ( (a3 & 3) == 3 )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 1uLL);
  if ( (unsigned int)BugCheckParameter3 >= *(_DWORD *)(BugCheckParameter2 + 828) )
    PopFxBugCheck(0x614uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 2uLL);
  v6 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 832) + 8LL * (unsigned int)BugCheckParameter3);
  memset(v17, 0, 0x40uLL);
  LODWORD(v7) = *(_DWORD *)(BugCheckParameter2 + 824);
  if ( ((unsigned __int8)v7 & 1) == 0 )
  {
    if ( (a3 & 6) == 4 )
    {
      CurrentThread = KeGetCurrentThread();
      v8 = 1;
      --CurrentThread->SpecialApcDisable;
    }
    else
    {
      v8 = 0;
    }
    v9 = v17;
    if ( (a3 & 2) != 0 )
      v9 = 0LL;
    LODWORD(v7) = _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
    if ( (_DWORD)v7 == 1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 88));
      LOBYTE(v7) = PopFxActivateComponentWorker(BugCheckParameter2, v6, 0LL, v9);
    }
    else
    {
      if ( (int)v7 < 0 )
      {
LABEL_12:
        if ( v8 )
        {
          v10 = KeGetCurrentThread();
          v11 = v10->SpecialApcDisable++ == -1;
          if ( v11 )
          {
            v7 = &v10->152;
            if ( ($C774EFD68449142D8271B1EC1EB7FB26 *)v7->ApcState.ApcListHead[0].Flink != v7 )
              LOBYTE(v7) = KiCheckForKernelApcDelivery((__int64)v10);
          }
        }
        return (char)v7;
      }
      if ( ((unsigned int)v7 & 0x40000000) != 0 )
      {
        v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 128));
        KxReleaseSpinLock((PKSPIN_LOCK)(v6 + 128));
        LOBYTE(v7) = KiIrqlFlags;
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            LOBYTE(v7) = KeGetCurrentIrql();
            if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)v7 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              LODWORD(v7) = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v11 = ((unsigned int)v7 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= (unsigned int)v7;
              if ( v11 )
                LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v13);
      }
    }
    if ( v5 )
      LOBYTE(v7) = KeWaitForSingleObject((PVOID)(v6 + 104), Executive, 0, 0, 0LL);
    goto LABEL_12;
  }
  return (char)v7;
}
