/*
 * XREFs of HalpNmiReboot @ 0x14051FA44
 * Callers:
 *     HalpInterruptResetAllProcessors @ 0x14051F9A8 (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     HalpIsHvPresent @ 0x1403B37F0 (HalpIsHvPresent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpInterruptRebootService @ 0x14051F5B0 (HalpInterruptRebootService.c)
 */

__int64 HalpNmiReboot()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi
  _DWORD v3[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(&v3[2], 0, 0x100uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  result = CurrentPrcb->CpuStep & 0xFF00;
  if ( ((unsigned int)result | ((unsigned __int8)CurrentPrcb->CpuType << 16)) > 0x50100 )
  {
    v2 = HalpInterruptProcessorsStarted;
    v3[0] = 2097153;
    HalpInterruptNmiRebootInProgress = 1;
    memset(&v3[1], 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v3, 0x20u, (unsigned __int16 *)KeActiveProcessors);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v3, CurrentPrcb->Number);
    HalSendNMI((unsigned __int16 *)v3);
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
