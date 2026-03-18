/*
 * XREFs of ?SearchProcessHidRequestInclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9FE6
 * Callers:
 *     ?SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z @ 0xC9DCE (-SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z.c)
 *     ?InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9F82 (-InProcessDeviceTypeRequestTable@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__userpurge SearchProcessHidRequestInclusion@<eax>(
        __int16 a1@<dx>,
        int a2@<ecx>,
        struct tagPROCESS_HID_TABLE *a3,
        unsigned __int16 a4,
        unsigned __int16 a5)
{
  struct tagPROCESS_HID_REQUEST *v5; // ecx
  struct tagPROCESS_HID_REQUEST *result; // eax

  v5 = (struct tagPROCESS_HID_REQUEST *)(a2 + 8);
  result = *(struct tagPROCESS_HID_REQUEST **)v5;
  if ( *(struct tagPROCESS_HID_REQUEST **)v5 == v5 )
    return 0;
  while ( *((_WORD *)result + 4) != a1 || *((_WORD *)result + 5) != (_WORD)a3 )
  {
    result = *(struct tagPROCESS_HID_REQUEST **)result;
    if ( result == v5 )
      return 0;
  }
  return result;
}
