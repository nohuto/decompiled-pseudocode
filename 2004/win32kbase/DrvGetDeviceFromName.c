/*
 * XREFs of DrvGetDeviceFromName @ 0x1C00A5CD0
 * Callers:
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00584E4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvEnumDisplayDevices @ 0x1C0094400 (DrvEnumDisplayDevices.c)
 *     DrvEnumDisplaySettings @ 0x1C00A3CE0 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C00A5420 (DrvGetHDEV.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C00B13D0 (DrvChangeDisplaySettingsPreValidate.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00B5D98 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00B5FC4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvSetPruneFlag @ 0x1C014B800 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C014B940 (DrvSetVideoParameters.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C014DBF0 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(PCUNICODE_STRING String1)
{
  wchar_t *v1; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = gpGraphicsDeviceList;
  DestinationString = 0LL;
  if ( !gpGraphicsDeviceList )
    return 0LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, v1 + 32);
    if ( RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      break;
    v1 = (wchar_t *)*((_QWORD *)v1 + 16);
  }
  while ( v1 );
  if ( v1 )
    return v1;
  else
    return 0LL;
}
