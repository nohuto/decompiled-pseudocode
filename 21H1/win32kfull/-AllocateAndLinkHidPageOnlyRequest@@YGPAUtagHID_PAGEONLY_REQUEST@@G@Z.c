/*
 * XREFs of ?AllocateAndLinkHidPageOnlyRequest@@YGPAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x143A42
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 * Callees:
 *     <none>
 */

struct tagHID_PAGEONLY_REQUEST *__fastcall AllocateAndLinkHidPageOnlyRequest(__int16 a1)
{
  struct tagHID_PAGEONLY_REQUEST *result; // eax
  struct tagHID_PAGEONLY_REQUEST *v3; // edx
  struct tagHID_PAGEONLY_REQUEST **v4; // eax
  int v5; // ecx

  result = (struct tagHID_PAGEONLY_REQUEST *)Win32AllocPoolZInit(16, 1919447893);
  v3 = result;
  if ( result )
  {
    *((_WORD *)result + 4) = a1;
    v4 = (struct tagHID_PAGEONLY_REQUEST **)&RawInputManagerObject::gHidRequestTable[2];
    v5 = RawInputManagerObject::gHidRequestTable[2];
    if ( *(_DWORD **)(v5 + 4) != &RawInputManagerObject::gHidRequestTable[2] )
      __fastfail(3u);
    *((_DWORD *)v3 + 1) = v4;
    *(_DWORD *)v3 = v5;
    *(_DWORD *)(v5 + 4) = v3;
    *v4 = v3;
    return v3;
  }
  return result;
}
