/*
 * XREFs of HalpInterruptResetAllProcessors @ 0x14051F9A8
 * Callers:
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     HalpPowerWriteResetCommand @ 0x14050A93C (HalpPowerWriteResetCommand.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 */

void __noreturn HalpInterruptResetAllProcessors()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v2; // zf

  if ( HalpInterruptController && HalpInterruptProcessorsStarted != 1 && !dword_140C54AE8 )
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
