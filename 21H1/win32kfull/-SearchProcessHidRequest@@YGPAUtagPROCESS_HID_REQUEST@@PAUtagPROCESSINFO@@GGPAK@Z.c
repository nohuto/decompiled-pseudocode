/*
 * XREFs of ?SearchProcessHidRequest@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESSINFO@@GGPAK@Z @ 0xC9DCE
 * Callers:
 *     _DestroyThreadHidObjects@4 @ 0xA52E4 (_DestroyThreadHidObjects@4.c)
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     ?SearchProcessHidRequestExclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9E1A (-SearchProcessHidRequestExclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?SearchProcessHidRequestInclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z @ 0xC9FE6 (-SearchProcessHidRequestInclusion@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ?SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z @ 0xEBB92 (-SearchProcessHidRequestUsagePage@@YGPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@G@Z.c)
 */

struct tagPROCESS_HID_REQUEST *__userpurge SearchProcessHidRequest@<eax>(
        int a1@<ecx>,
        struct tagPROCESSINFO *a2,
        _DWORD *a3,
        unsigned __int16 a4,
        unsigned int *a5)
{
  struct tagPROCESS_HID_REQUEST *result; // eax
  unsigned __int16 v6; // [esp+0h] [ebp-4h]
  struct tagPROCESS_HID_TABLE *v7; // [esp+0h] [ebp-4h]
  unsigned __int16 savedregs; // [esp+4h] [ebp+0h]
  unsigned __int16 savedregsa; // [esp+4h] [ebp+0h]

  if ( !*(_DWORD *)(a1 + 472) )
    return 0;
  result = SearchProcessHidRequestInclusion(a2, v6, savedregs);
  if ( result )
  {
    *a3 = 1;
    return result;
  }
  if ( !(_WORD)a2 )
  {
    result = SearchProcessHidRequestUsagePage(v7, savedregsa);
    if ( result )
    {
      *a3 = 2;
      return result;
    }
  }
  result = SearchProcessHidRequestExclusion(a2, (unsigned __int16)v7, savedregsa);
  if ( !result )
  {
    *a3 = 0;
    return 0;
  }
  *a3 = 3;
  return result;
}
