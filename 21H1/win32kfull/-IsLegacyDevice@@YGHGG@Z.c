/*
 * XREFs of ?IsLegacyDevice@@YGHGG@Z @ 0xC9DAA
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     ?HidRequestValidityCheck@@YGHQAUtagRAWINPUTDEVICE@@PBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC999E (-HidRequestValidityCheck@@YGHQAUtagRAWINPUTDEVICE@@PBUtagPROCESS_HID_TABLE@@W4_REGISTER_RAW_INPU.c)
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 * Callees:
 *     <none>
 */

int __fastcall IsLegacyDevice(__int16 a1, __int16 a2)
{
  int v2; // esi

  v2 = 0;
  if ( a1 == 1 && (a2 == 2 || a2 == 6) )
    return 1;
  return v2;
}
