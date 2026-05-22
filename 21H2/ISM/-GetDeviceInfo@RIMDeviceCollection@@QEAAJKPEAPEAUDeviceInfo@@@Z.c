/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180090664
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18008ED90 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x180095400 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180098680 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099CC0 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A6E0 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033C70 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 */

__int64 __fastcall RIMDeviceCollection::GetDeviceInfo(RIMDeviceCollection *this, int a2, struct DeviceInfo **a3)
{
  __int64 result; // rax
  struct RIMDevice *v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  result = RIMDeviceCollection::FindDevice(this, a2, 0LL, &v5, 0LL);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *a3 = (struct DeviceInfo *)*((_QWORD *)v5 + 4);
  }
  return result;
}
