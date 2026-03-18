/*
 * XREFs of HsaInvalidateDTE @ 0x1404DEBFC
 * Callers:
 *     HsaUpdateDeviceTableEntry @ 0x1404DF388 (HsaUpdateDeviceTableEntry.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x1404DECF8 (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateDTE(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = 0LL;
  v3 = a3;
  v6 = a2 | 0x2000000000000000LL;
  HsaIommuSendCommand(a1, &v6, a3);
  v7 = 0LL;
  v6 = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, &v6, v3);
}
