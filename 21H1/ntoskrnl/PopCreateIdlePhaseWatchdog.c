/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140A7000C
 * Callers:
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 * Callees:
 *     PopRwLockInitialize @ 0x1403A9E60 (PopRwLockInitialize.c)
 *     ZwPowerInformation @ 0x1403F2F10 (ZwPowerInformation.c)
 *     memset @ 0x140408F80 (memset.c)
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
  PopRwLockInitialize(qword_140C21348);
}
