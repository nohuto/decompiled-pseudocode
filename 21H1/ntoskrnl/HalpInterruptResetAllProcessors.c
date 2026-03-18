/*
 * XREFs of HalpInterruptResetAllProcessors @ 0x1404CD7CC
 * Callers:
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x14026B1E0 (HalRequestIpiSpecifyVector.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpPowerWriteResetCommand @ 0x1404B8D4C (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 */

void __noreturn HalpInterruptResetAllProcessors()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v2; // zf

  if ( HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140C50898 )
  {
    HalpNmiReboot();
    HalpRebootNow = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpInterruptResetThisProcessor;
    HalRequestIpiSpecifyVector(2, 0LL, 0xD7u);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v2 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
        SchedulerAssist[5] &= 0xFFFF0001;
        if ( v2 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(0LL);
    _enable();
    while ( 1 )
      ;
  }
  HalpPowerWriteResetCommand(0, 0LL);
}
