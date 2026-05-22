/*
 * XREFs of ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009F82C
 * Callers:
 *     ?StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z @ 0x18009F2F8 (-StartDeviceObject@PnpDeviceWatcher@@AEAAJAEAUDeviceListEntry@1@@Z.c)
 *     ?QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z @ 0x18009FE3C (-QueueAddRemoveDevice@ConsumerControlManager@@AEAAJPEAVPnpDevice@@_N@Z.c)
 *     ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A101C (-Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A2DB0 (-Initialize@ConsumerControlNexusDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A404C (-Initialize@ConsumerControlGenericDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A6D0C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ?CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z @ 0x1800A9080 (-CreateAndInitialize@HidLampRangeUpdateReportBuilder@@SAJPEAVHidLampArrayDevice@@PEAPEAV1@@Z.c)
 *     ?Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z @ 0x1800A9494 (-Initialize@HidLampMultiUpdateReportBuilder@@AEAAJPEAVHidLampArrayDevice@@H@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180037600 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

RefCountedObject **__fastcall Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=(
        RefCountedObject **a1,
        volatile signed __int32 *a2)
{
  RefCountedObject *v3; // rcx

  v3 = *a1;
  if ( v3 != (RefCountedObject *)a2 )
  {
    if ( a2 )
    {
      _InterlockedIncrement(a2 + 2);
      v3 = *a1;
    }
    *a1 = (RefCountedObject *)a2;
    if ( v3 )
      RefCountedObject::Release(v3);
  }
  return a1;
}
