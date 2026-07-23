/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x140911100
 * Callers:
 *     <none>
 * Callees:
 *     ZwPowerInformation @ 0x1403F2F10 (ZwPowerInformation.c)
 */

NTSTATUS RtlRestoreSystemBootStatusDefaults(void)
{
  _QWORD v1[5]; // [rsp+30h] [rbp-28h] BYREF

  v1[0] = 35LL;
  v1[1] = 0LL;
  v1[2] = 0LL;
  return ZwPowerInformation(PowerInformationInternal, v1, 0x18u, 0LL, 0);
}
