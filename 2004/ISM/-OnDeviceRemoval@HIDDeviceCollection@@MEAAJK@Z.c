/*
 * XREFs of ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009C9D0
 * Callers:
 *     ?OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z @ 0x180094930 (-OnDeviceRemoval@SpatialRimDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x180098020 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x1800996A0 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x18009A0F0 (-OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x18009AA00 (-OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z @ 0x18009B0C0 (-OnDeviceRemoval@GazeDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z @ 0x18009B500 (-OnDeviceRemoval@PenDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z @ 0x18009BB80 (-OnDeviceRemoval@DockDeviceCollection@@MEAAJK@Z.c)
 *     ?OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z @ 0x18009C360 (-OnDeviceRemoval@DockableDeviceCollection@@MEAAJK@Z.c)
 * Callees:
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x180033CE0 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x18009C910 (-LogRawInputDeviceRemoved@RawInputProvidersTelemetry@@SAXIGGG@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::OnDeviceRemoval(HIDDeviceCollection *this, int a2)
{
  struct RIMDevice *v3; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  if ( (int)RIMDeviceCollection::FindDevice(this, a2, 0LL, &v3, 0LL) >= 0 )
    RawInputProvidersTelemetry::LogRawInputDeviceRemoved(
      *(unsigned int *)(*((_QWORD *)v3 + 4) + 4LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 32LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 34LL),
      *(_WORD *)(*((_QWORD *)v3 + 4) + 36LL));
  return 0LL;
}
