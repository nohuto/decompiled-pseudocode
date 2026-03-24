/*
 * XREFs of ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017CE24
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C018071C (DpiFdoStartAdapter.c)
 * Callees:
 *     Feature_Brightness3dxgkrnl__private_ReportDeviceUsage @ 0x1C00285D8 (Feature_Brightness3dxgkrnl__private_ReportDeviceUsage.c)
 *     ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C017CCD0 (-DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiQueryMiniportInterface @ 0x1C017FA18 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessStartDevice(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = (char *)a1->DeviceExtension;
  KeInitializeMutex((PRKMUTEX)(DeviceExtension + 4464), 0);
  Feature_Brightness3dxgkrnl__private_ReportDeviceUsage();
  if ( *(_DWORD *)(*((_QWORD *)DeviceExtension + 5) + 28LL) < 0x700Au
    || (result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_3, 72, 3),
        (int)result < 0) )
  {
    result = DpiBrightnessSetupInterfaceV2(a1);
    if ( (int)result < 0 )
    {
      result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS, 56, 1);
      if ( (int)result >= 0 )
      {
        *((_QWORD *)DeviceExtension + 586) = a1;
        *((_QWORD *)DeviceExtension + 587) = DpiDoInterfaceReference;
        *((_QWORD *)DeviceExtension + 588) = DXGGLOBAL::DereferenceObjectWork;
        *((_QWORD *)DeviceExtension + 589) = DpiBrightnessIfGetPossible;
        *((_QWORD *)DeviceExtension + 590) = DpiBrightnessIfSet;
        *((_QWORD *)DeviceExtension + 591) = DpiBrightnessIfGet;
        *((_DWORD *)DeviceExtension + 1170) = 65592;
      }
    }
  }
  else
  {
    *((_DWORD *)DeviceExtension + 1130) = 196680;
    *((_QWORD *)DeviceExtension + 567) = DpiDoInterfaceReference;
    *((_QWORD *)DeviceExtension + 568) = DXGGLOBAL::DereferenceObjectWork;
    *((_QWORD *)DeviceExtension + 569) = DpiBrightness3Set;
    *((_QWORD *)DeviceExtension + 570) = DpiBrightness3Get;
    *((_QWORD *)DeviceExtension + 571) = DpiBrightness3GetCaps;
    *((_QWORD *)DeviceExtension + 572) = DpiBrightness3GetNitRanges;
    *((_QWORD *)DeviceExtension + 573) = DpiBrightness3SetBacklightOptimization;
    *((_QWORD *)DeviceExtension + 566) = a1;
  }
  return result;
}
