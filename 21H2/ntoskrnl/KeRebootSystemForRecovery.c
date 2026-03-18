/*
 * XREFs of KeRebootSystemForRecovery @ 0x140578830
 * Callers:
 *     ExRebootSystemForRecovery @ 0x1406396B8 (ExRebootSystemForRecovery.c)
 * Callees:
 *     KiSendThawExecution @ 0x1402DA5B0 (KiSendThawExecution.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalReturnToFirmware @ 0x14050A7E0 (HalReturnToFirmware.c)
 *     KiBugcheckUnloadDebugSymbols @ 0x1405675F4 (KiBugcheckUnloadDebugSymbols.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 */

void __noreturn KeRebootSystemForRecovery()
{
  _BYTE v0[112]; // [rsp+20h] [rbp-88h] BYREF

  MiDeleteAllHardwareEnclaves();
  memset(v0, 0, 0x68uLL);
  VslpEnterIumSecureMode(2u, 262, 0, (__int64)v0);
  KiBugcheckUnloadDebugSymbols();
  KiResumeForReboot = 1;
  KiSendThawExecution(0);
  HalReturnToFirmware(3);
}
