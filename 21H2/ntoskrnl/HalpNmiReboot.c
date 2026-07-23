/*
 * XREFs of HalpNmiReboot @ 0x1404D2EC8
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x1404D2E2C (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1403461F0 (KeRemoveProcessorAffinityEx.c)
 *     HalpIsHvPresent @ 0x1403A2128 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalSendNMI @ 0x1404BDFB0 (HalSendNMI.c)
 *     HalpInterruptRebootService @ 0x1404D2890 (HalpInterruptRebootService.c)
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
