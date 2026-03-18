/*
 * XREFs of ?AllocateHidProcessRequest@@YGPAUtagPROCESS_HID_REQUEST@@GG@Z @ 0xC9D3C
 * Callers:
 *     ?SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0xC9ACA (-SetProcDeviceRequest@@YGHPAUtagPROCESSINFO@@PAUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KW.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall AllocateHidProcessRequest(__int16 a1, __int16 a2)
{
  struct tagPROCESS_HID_REQUEST *result; // eax

  result = (struct tagPROCESS_HID_REQUEST *)Win32AllocPoolWithQuota(28, 1382576981);
  if ( !result )
    return 0;
  *((_WORD *)result + 4) = a1;
  *((_DWORD *)result + 3) &= 0xFFFFFFF0;
  *((_WORD *)result + 5) = a2;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 6) = 0;
  return result;
}
