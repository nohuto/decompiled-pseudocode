/*
 * XREFs of ExRebootSystemForRecovery @ 0x1405AC988
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x14051F284 (KiAttemptBugcheckRecovery.c)
 *     NtShutdownSystem @ 0x1405ACC40 (NtShutdownSystem.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1403005E8 (ExNotifyWithProcessing.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405125C4 (KiBugcheckUnloadDebugSymbols.c)
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
