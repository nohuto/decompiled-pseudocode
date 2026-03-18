/*
 * XREFs of ?DpiBrightnessSetupInterfaceV2@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F843C
 * Callers:
 *     ?DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01F9868 (-DpiBrightnessStartDevice@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z @ 0x1C03902F4 (-DpiBrightnessSetUncalibratedBrightness3Fallback@@YAJPEAU_DEVICE_OBJECT@@K@Z.c)
 * Callees:
 *     DpiQueryMiniportInterface @ 0x1C01FA410 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiBrightnessSetupInterfaceV2(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  __int64 result; // rax
  __int64 v4; // xmm1_8

  DeviceExtension = (char *)a1->DeviceExtension;
  result = DpiQueryMiniportInterface((_DWORD)a1, (unsigned int)&GUID_DEVINTERFACE_BRIGHTNESS_2, 88, 2);
  if ( (int)result < 0 )
    return 3221225659LL;
  *((_DWORD *)DeviceExtension + 1166) = 131160;
  *((_QWORD *)DeviceExtension + 578) = DpiDoInterfaceReference;
  *((_QWORD *)DeviceExtension + 579) = DXGGLOBAL::DereferenceObjectWork;
  *((_QWORD *)DeviceExtension + 580) = DpiBrightnessIfGetPossible;
  *((_QWORD *)DeviceExtension + 581) = DpiBrightnessIfSet;
  *((_QWORD *)DeviceExtension + 582) = DpiBrightnessIfGet;
  *((_QWORD *)DeviceExtension + 577) = a1;
  *((_DWORD *)DeviceExtension + 1152) = 65592;
  *(_OWORD *)(DeviceExtension + 4520) = *((_OWORD *)DeviceExtension + 288);
  *(_OWORD *)(DeviceExtension + 4536) = *((_OWORD *)DeviceExtension + 289);
  *(_OWORD *)(DeviceExtension + 4552) = *((_OWORD *)DeviceExtension + 290);
  v4 = *((_QWORD *)DeviceExtension + 582);
  *((_QWORD *)DeviceExtension + 572) = DpiBrightnessIfGetCaps;
  *((_QWORD *)DeviceExtension + 573) = DpiBrightnessIfSetState;
  *((_QWORD *)DeviceExtension + 574) = DpiBrightnessIfSetBacklightOptimization;
  *((_QWORD *)DeviceExtension + 571) = v4;
  *((_QWORD *)DeviceExtension + 575) = DpiBrightnessIfGetBacklightReduction;
  *((_DWORD *)DeviceExtension + 1130) = 131160;
  return result;
}
