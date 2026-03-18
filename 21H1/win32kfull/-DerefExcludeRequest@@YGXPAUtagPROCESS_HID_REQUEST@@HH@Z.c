/*
 * XREFs of ?DerefExcludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@HH@Z @ 0x143B43
 * Callers:
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 *     ?RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x143E01 (-RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z @ 0xC97D4 (-HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 */

void __userpurge DerefExcludeRequest(int a1@<edx>, int a2@<ecx>, struct tagPROCESS_HID_REQUEST *a3, int a4, int a5)
{
  int v5; // eax
  bool v6; // zf
  _DWORD *v7; // ecx

  if ( !a1 )
  {
    if ( (*(_BYTE *)(a2 + 12) & 8) != 0 )
      --*(_DWORD *)(*(_DWORD *)(a2 + 16) + 32);
    v5 = *(_DWORD *)(a2 + 16);
    v6 = (*(_DWORD *)(v5 + 28))-- == 1;
    if ( v6 && a3 )
    {
      if ( HidTLCInfoNoReference(*(_DWORD **)(a2 + 16)) )
        FreeHidTLCInfo(v7);
    }
  }
}
