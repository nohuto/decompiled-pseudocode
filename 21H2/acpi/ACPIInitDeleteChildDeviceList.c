/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C002D08C
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CDC0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004C350 (ACPIBusIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C0055B50 (ACPIFilterFastIoDetachCallback.c)
 * Callees:
 *     ACPIExtListStartEnum @ 0x1C000990C (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C000A7D4 (ACPIExtListTestElement.c)
 *     ACPIExtListEnumNext @ 0x1C000C1AC (ACPIExtListEnumNext.c)
 *     ACPIInitResetDeviceExtension @ 0x1C0056F0C (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  __int64 i; // rax
  ULONG_PTR v2; // rbx
  char result; // al
  _QWORD v4[3]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v8 = 0;
  v5 = 0LL;
  v4[1] = 0LL;
  v4[0] = a1 + 800;
  v4[2] = &AcpiDeviceTreeLock;
  v6 = 816LL;
  v7 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = (__int64)ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
