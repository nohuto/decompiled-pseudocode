/*
 * XREFs of _RtlRestoreSystemBootStatusDefaults@0 @ 0x4B350CB0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 */

NTSTATUS RtlRestoreSystemBootStatusDefaults(void)
{
  _DWORD InputBuffer[4]; // [esp+0h] [ebp-10h] BYREF

  InputBuffer[0] = 35;
  memset(&InputBuffer[1], 0, 12);
  return ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x10u, 0, 0);
}
