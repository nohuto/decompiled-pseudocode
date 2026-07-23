/*
 * XREFs of HalpSetShutdownResetHandler @ 0x1404BE66C
 * Callers:
 *     HalpKsrCallbackRoutine @ 0x140866880 (HalpKsrCallbackRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwPowerInformation @ 0x1403FB160 (ZwPowerInformation.c)
 */

NTSTATUS __fastcall HalpSetShutdownResetHandler(__int64 a1)
{
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-28h] BYREF

  InputBuffer[1] = a1;
  InputBuffer[2] = 0LL;
  InputBuffer[0] = 5LL;
  return ZwPowerInformation(SystemPowerStateHandler, InputBuffer, 0x18u, 0LL, 0);
}
