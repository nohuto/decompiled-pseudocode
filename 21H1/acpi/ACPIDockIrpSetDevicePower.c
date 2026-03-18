/*
 * XREFs of ACPIDockIrpSetDevicePower @ 0x1C002D6C4
 * Callers:
 *     ACPIBusIrpSetPower @ 0x1C002D690 (ACPIBusIrpSetPower.c)
 *     ACPIDockIrpSetPower @ 0x1C004A880 (ACPIDockIrpSetPower.c)
 *     ACPICMLidSetPower @ 0x1C004EE40 (ACPICMLidSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceIrpDeviceRequest @ 0x1C002D724 (ACPIDeviceIrpDeviceRequest.c)
 */

__int64 __fastcall ACPIDockIrpSetDevicePower(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r8
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  *(_BYTE *)(v5 + 3) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(DeviceExtension + 688));
  result = ACPIDeviceIrpDeviceRequest(a1, a2, ACPIDeviceIrpCompleteRequest);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
