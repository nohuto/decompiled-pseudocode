/*
 * XREFs of ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180090204
 * Callers:
 *     ?SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18008E930 (-SendCommandToInputDevice@RIMRawInputProvider@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     ?SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z @ 0x180094FA0 (-SendDeviceUpdate@SpatialRimDeviceCollection@@UEAAJKAEBUMPCSourceDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x180098220 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099860 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A280 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033D10 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
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
