/*
 * XREFs of HalpNmiReboot @ 0x1404D12B8
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x1404D121C (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140288CF0 (KeStallExecutionProcessor.c)
 *     KeCopyAffinityEx @ 0x1402BF8E0 (KeCopyAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402BF930 (KeRemoveProcessorAffinityEx.c)
 *     HalpIsHvPresent @ 0x1403A1718 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     HalSendNMI @ 0x1404BC3B0 (HalSendNMI.c)
 *     HalpInterruptRebootService @ 0x1404D0C80 (HalpInterruptRebootService.c)
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
