/*
 * XREFs of HsaIommuWaitCommand @ 0x1404E3F78
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x1404E43F8 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x1404E3D08 (HsaIommuSendCommand.c)
 */

unsigned __int64 __fastcall HsaIommuWaitCommand(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v3, a2);
}
