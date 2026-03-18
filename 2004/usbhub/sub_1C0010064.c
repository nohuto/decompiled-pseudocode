/*
 * XREFs of sub_1C0010064 @ 0x1C0010064
 * Callers:
 *     sub_1C000D970 @ 0x1C000D970 (sub_1C000D970.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C003BA78 @ 0x1C003BA78 (sub_1C003BA78.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 */

void __fastcall sub_1C0010064(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  int v3; // r9d
  __int64 v4; // r9
  int v5; // r10d
  NTSTATUS v6; // eax
  int Timeouta; // [rsp+20h] [rbp-18h]
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-18h]
  int v9; // [rsp+28h] [rbp-10h]

  v2 = sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((__int64)DeviceObject, 16, 1750554411, 0LL, 0LL);
  sub_1C0012400(DeviceObject, 0LL, 0LL, &unk_1C0061F18, v3 & Timeouta, v3 & v9);
  while ( 1 )
  {
    sub_1C000FD80((__int64)DeviceObject, 16, 1750554488, 0LL, _InterlockedCompareExchange(v2 + 1221, 2, 1));
    if ( v5 == 1 )
      break;
    if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
      return;
    sub_1C001B180(DeviceObject);
  }
  KeWaitForSingleObject(v2 + 1224, Executive, 0, v4, (PLARGE_INTEGER)(v4 & (unsigned __int64)Timeout));
  sub_1C000FD80((__int64)DeviceObject, 16, 1750554480, 0LL, 0LL);
  KeResetEvent((PRKEVENT)v2 + 204);
  v6 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v2[1259], (PREQUEST_POWER_COMPLETE)sub_1C000CA20, 0LL, 0LL);
  if ( v6 == 259 )
  {
    sub_1C000FD80((__int64)DeviceObject, 16, 1749111373, 0LL, 0LL);
  }
  else
  {
    sub_1C000FD80((__int64)DeviceObject, 16, 1463896944, v6, 0LL);
    v2[1221] = 1;
    KeSetEvent((PRKEVENT)v2 + 204, 0, 0);
  }
}
