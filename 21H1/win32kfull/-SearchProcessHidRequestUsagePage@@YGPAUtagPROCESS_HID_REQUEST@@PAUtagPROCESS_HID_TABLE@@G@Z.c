/*
 * XREFs of ?SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z @ 0xEBB92
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     ?SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z @ 0xC9DCE (-SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z.c)
 *     ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82 (-InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall SearchProcessHidRequestUsagePage(int a1, __int16 a2)
{
  struct tagPROCESS_HID_REQUEST *v2; // ecx
  struct tagPROCESS_HID_REQUEST *result; // eax

  v2 = (struct tagPROCESS_HID_REQUEST *)(a1 + 16);
  for ( result = *(struct tagPROCESS_HID_REQUEST **)v2; result != v2; result = *(struct tagPROCESS_HID_REQUEST **)result )
  {
    if ( *((_WORD *)result + 4) == a2 )
      return result;
  }
  return 0;
}
