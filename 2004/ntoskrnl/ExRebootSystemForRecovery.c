/*
 * XREFs of ExRebootSystemForRecovery @ 0x1405AD0B4
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14051F8D4 (KiAttemptBugcheckRecovery.c)
 *     NtShutdownSystem @ 0x1405AD360 (NtShutdownSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     ExNotifyWithProcessing @ 0x14033CEE8 (ExNotifyWithProcessing.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     HalReturnToFirmware @ 0x1404B92C0 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x140512C14 (KiBugcheckUnloadDebugSymbols.c)
 */

void __fastcall ExRebootSystemForRecovery(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // cl
  _DWORD *SchedulerAssist; // r10
  _BYTE v4[112]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  if ( PnpKsrCallbackObject )
  {
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 10LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 15LL, 0LL, 0LL);
    ExNotifyWithProcessing((__int64)PnpKsrCallbackObject, 20LL, 0LL, 0LL);
    if ( (_BYTE)v1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v1);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v1 - 2) <= 0xDu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= ((1LL << ((unsigned __int8)v1 + 1)) - 1) & ~((1LL << (CurrentIrql + 1)) - 1) & 0xFFFFFFFC;
        }
      }
    }
    memset(v4, 0, 0x68uLL);
    VslpEnterIumSecureMode(2u, 262, 0, (__int64)v4);
    KiBugcheckUnloadDebugSymbols();
    HalReturnToFirmware(3);
  }
}
