/*
 * XREFs of ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0042934
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0042358 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     GetImageName @ 0x1C005F478 (GetImageName.c)
 *     ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x1C00612BC (-FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z.c)
 *     ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C006E304 (-FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUShortAdd(unsigned __int16 usAugend, unsigned __int16 usAddend, wchar_t *pusResult)
{
  bool v3; // cf
  wchar_t v4; // dx

  v3 = (unsigned __int16)(usAddend + usAugend) < usAugend;
  if ( (unsigned __int16)(usAddend + usAugend) < usAugend )
    v4 = -1;
  else
    v4 = usAddend + usAugend;
  *pusResult = v4;
  return v3 ? 0xC0000095 : 0;
}
