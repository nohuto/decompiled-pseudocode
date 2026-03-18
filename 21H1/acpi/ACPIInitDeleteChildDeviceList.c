/*
 * XREFs of ACPIInitDeleteChildDeviceList @ 0x1C002CFA4
 * Callers:
 *     ACPIFilterIrpRemoveDevice @ 0x1C002CA30 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterFastIoDetachCallback @ 0x1C002CC50 (ACPIFilterFastIoDetachCallback.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004D460 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     ACPIExtListTestElement @ 0x1C001A6A4 (ACPIExtListTestElement.c)
 *     ACPIExtListStartEnum @ 0x1C001AB38 (ACPIExtListStartEnum.c)
 *     ACPIExtListEnumNext @ 0x1C001AE90 (ACPIExtListEnumNext.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002CD00 (ACPIInitResetDeviceExtension.c)
 */

char __fastcall ACPIInitDeleteChildDeviceList(__int64 a1)
{
  char *i; // rax
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
  v4[0] = a1 + 760;
  v4[2] = &AcpiDeviceTreeLock;
  v6 = 776LL;
  v7 = 1;
  for ( i = ACPIExtListStartEnum((__int64)v4); ; i = ACPIExtListEnumNext((__int64)v4) )
  {
    v2 = (ULONG_PTR)i;
    result = ACPIExtListTestElement((__int64)v4, 1);
    if ( !result )
      break;
    ACPIInitResetDeviceExtension(v2);
  }
  return result;
}
