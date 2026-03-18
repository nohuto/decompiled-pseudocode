/*
 * XREFs of _PnpObjectRaiseDevicesChangeEvent @ 0x14074EEC0
 * Callers:
 *     _CmRemoveDeviceFromContainer @ 0x1407281FC (_CmRemoveDeviceFromContainer.c)
 *     _CmAddDeviceToContainer @ 0x140752354 (_CmAddDeviceToContainer.c)
 *     _CmAddPanelDevice @ 0x14097A02C (_CmAddPanelDevice.c)
 *     _CmRemovePanelDevice @ 0x14097B378 (_CmRemovePanelDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     _PnpContainerRaiseDevicesChangeEvent @ 0x14074EF00 (_PnpContainerRaiseDevicesChangeEvent.c)
 */

void __fastcall PnpObjectRaiseDevicesChangeEvent(__int64 a1, __int64 a2, __int64 a3)
{
  void (__fastcall *v3)(__int64, __int64, __int64); // r11

  v3 = *(void (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
  if ( v3 )
  {
    if ( (_DWORD)a3 == 5 )
    {
      PnpContainerRaiseDevicesChangeEvent(a1, a2, v3);
    }
    else
    {
      if ( (_DWORD)a3 == 6 )
        a3 = 6LL;
      v3(a1, a2, a3);
    }
  }
}
