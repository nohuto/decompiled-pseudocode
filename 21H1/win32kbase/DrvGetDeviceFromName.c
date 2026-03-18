/*
 * XREFs of DrvGetDeviceFromName @ 0x1C006A270
 * Callers:
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C002AF04 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     DrvEnumDisplaySettings @ 0x1C002B060 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C006A170 (DrvGetHDEV.c)
 *     DrvEnumDisplayDevices @ 0x1C0091330 (DrvEnumDisplayDevices.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C009CA1C (DrvChangeDisplaySettingsPreValidate.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00AE328 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00AE554 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvSetPruneFlag @ 0x1C0151B50 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C0151C90 (DrvSetVideoParameters.c)
 *     ?DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME@@@Z @ 0x1C0153F40 (-DxgkEngQueryRemoteVidPnSourceFromGdiDisplayName@@YAJPEAU_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDI.c)
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
