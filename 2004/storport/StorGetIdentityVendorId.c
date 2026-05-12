/*
 * XREFs of StorGetIdentityVendorId @ 0x1C0019B88
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0019CC4 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0073D8C (RaUnitQueryDeviceTextIrp.c)
 * Callees:
 *     RaCopyPaddedString @ 0x1C0073D44 (RaCopyPaddedString.c)
 */

__int64 __fastcall StorGetIdentityVendorId(_QWORD *a1, __int64 a2)
{
  RaCopyPaddedString(a2, 9LL, *a1 + 8LL, 8LL);
  return 0LL;
}
