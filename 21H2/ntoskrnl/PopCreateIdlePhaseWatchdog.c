/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140A74F7C
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     PopRwLockInitialize @ 0x1403AE540 (PopRwLockInitialize.c)
 *     ZwPowerInformation @ 0x1403FB160 (ZwPowerInformation.c)
 *     memset @ 0x140414300 (memset.c)
 */

void PopCreateIdlePhaseWatchdog()
{
  _DWORD InputBuffer[26]; // [rsp+30h] [rbp-68h] BYREF
  __int64 OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u);
  PopPdcIdlePhaseWatchdogContext = OutputBuffer;
  PopRwLockInitialize(qword_140C213C8);
}
