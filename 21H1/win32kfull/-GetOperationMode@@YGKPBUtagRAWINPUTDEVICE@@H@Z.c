/*
 * XREFs of ?GetOperationMode@@YGKPBUtagRAWINPUTDEVICE@@H@Z @ 0xC9D76
 * Callers:
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 * Callees:
 *     <none>
 */

unsigned int __thiscall GetOperationMode(_DWORD *this)
{
  int v1; // edx
  int v2; // eax

  v1 = 0;
  v2 = this[1] & 0xF0;
  switch ( v2 )
  {
    case 32:
      return 2;
    case 16:
      return 3;
    case 0:
    case 48:
      return 1;
  }
  return v1;
}
