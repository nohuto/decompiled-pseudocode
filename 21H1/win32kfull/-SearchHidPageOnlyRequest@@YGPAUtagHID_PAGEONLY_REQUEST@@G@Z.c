/*
 * XREFs of ?SearchHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x143E75
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall SearchHidPageOnlyRequest(__int16 a1)
{
  struct tagHID_PAGEONLY_REQUEST *result; // eax

  for ( result = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
        result != (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2];
        result = *(struct tagHID_PAGEONLY_REQUEST **)result )
  {
    if ( *((_WORD *)result + 4) == a1 )
      return result;
  }
  return 0;
}
