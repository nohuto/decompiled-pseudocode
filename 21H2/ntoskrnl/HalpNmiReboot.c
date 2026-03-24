/*
 * XREFs of HalpNmiReboot @ 0x1404D2C88
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x1404D2BEC (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x14022A880 (KeStallExecutionProcessor.c)
 *     KeCopyAffinityEx @ 0x14033B450 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x14033B4A0 (KeRemoveProcessorAffinityEx.c)
 *     HalpIsHvPresent @ 0x1403A1FD8 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     HalSendNMI @ 0x1404BDD70 (HalSendNMI.c)
 *     HalpInterruptRebootService @ 0x1404D2650 (HalpInterruptRebootService.c)
 */

__int64 HalpNmiReboot()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi
  unsigned __int16 v3[88]; // [rsp+20h] [rbp-C8h] BYREF

  memset(v3, 0, 0xA8uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CpuStep & 0xFF00;
  if ( ((unsigned int)result | ((unsigned __int8)CurrentPrcb->CpuType << 16)) > 0x50100 )
  {
    v2 = HalpInterruptProcessorsStarted;
    HalpInterruptNmiRebootInProgress = 1;
    KeCopyAffinityEx((__int64)v3, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx(v3, CurrentPrcb->Number);
    HalSendNMI((__int64)v3);
    KeStallExecutionProcessor(0x1F4u);
    if ( HalpIsHvPresent() )
    {
      while ( HalpInterruptProcessorsStarted > 1 )
        _mm_pause();
    }
    result = (unsigned int)HalpInterruptProcessorsStarted;
    if ( HalpInterruptProcessorsStarted != v2 )
      HalpInterruptRebootService();
  }
  return result;
}
