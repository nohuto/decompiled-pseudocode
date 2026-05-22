/*
 * XREFs of ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0
 * Callers:
 *     ?OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800347A0 (-OnDeviceAttach@SystemControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180034B30 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z @ 0x180038630 (-OnDeviceChangeCallbackStatic@RIMDeviceCollection@@SAXPEAX0KKKKGG0@Z.c)
 *     ?AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z @ 0x1800386B4 (-AttachDevice@RIMDeviceCollection@@AEAAJKPEAX0KPEAPEAVRIMDevice@@@Z.c)
 *     ?GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z @ 0x18008F3C4 (-GetDeviceProductInfo@AugmentedInputDeviceCollection@@IEAAJKPEAG00@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008F7E0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800902A4 (-GetDeviceInfo@RIMDeviceCollection@@QEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnReadEvent@RIMDeviceCollection@@AEAAJXZ @ 0x1800905D8 (-OnReadEvent@RIMDeviceCollection@@AEAAJXZ.c)
 *     ?RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z @ 0x180090780 (-RemoveDevice@RIMDeviceCollection@@AEAAJPEAVRIMDevice@@@Z.c)
 *     ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092DF8 (-DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180097F20 (-OnDeviceAttach@MobileButtonDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800982C0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800986E0 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 *     ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800995D0 (-OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099900 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009A320 (-OnInputReport@SystemControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009A8B0 (-OnDeviceAttach@HeatDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z @ 0x18009AB24 (-SendHeatDeviceCommand@HeatDeviceCollection@@QEAAJKPEAX@Z.c)
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009AF30 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B100 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009B26C (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B370 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x18009B500 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009B5F0 (-OnInputReport@PenDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009B9A0 (-OnDeviceAttach@DockDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z @ 0x18009BBC0 (-OnInputReport@DockDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009C1C0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x18009C360 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009C9D0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMDeviceCollection::FindDevice(
        RIMDeviceCollection *this,
        int a2,
        void *a3,
        struct RIMDevice **a4,
        unsigned int *a5)
{
  __int64 result; // rax
  __int64 *v6; // r11
  unsigned int v7; // r10d
  __int64 v8; // rcx

  result = 0LL;
  v6 = (__int64 *)((char *)this + 624);
  v7 = 0;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 )
    {
      if ( *(void **)(v8 + 16) == a3 || *(_DWORD *)(v8 + 40) == a2 )
        break;
    }
    ++v7;
    ++v6;
    if ( v7 >= 0x100 )
      return 2147943568LL;
  }
  if ( a4 )
    *a4 = (struct RIMDevice *)v8;
  if ( a5 )
    *a5 = v7;
  return result;
}
