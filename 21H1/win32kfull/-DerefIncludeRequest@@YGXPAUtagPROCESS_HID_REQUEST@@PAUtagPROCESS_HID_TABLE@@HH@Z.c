/*
 * XREFs of ?DerefIncludeRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@HH@Z @ 0xD2B5E
 * Callers:
 *     _FreeHidProcessRequest@12 @ 0xD2AF8 (_FreeHidProcessRequest@12.c)
 *     ?RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z @ 0x143E01 (-RemoveProcRequest@@YGXPAUtagPROCESSINFO@@PAUtagPROCESS_HID_REQUEST@@KH@Z.c)
 * Callees:
 *     ?HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z @ 0xC97D4 (-HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 */

void __userpurge DerefIncludeRequest(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESS_HID_REQUEST *a3,
        struct tagPROCESS_HID_TABLE *a4,
        int a5,
        int a6)
{
  int v8; // eax
  bool v9; // zf
  int v10; // eax
  int v11; // eax

  if ( a3 )
  {
    v11 = *(_DWORD *)(a1 + 52);
    if ( (v11 & 0x100) != 0 && *(_WORD *)(a2 + 8) == 1 && *(_WORD *)(a2 + 10) == 2 )
    {
      v11 &= ~0x100u;
      *(_DWORD *)(a1 + 52) = v11;
    }
    if ( (v11 & 0x200) != 0 && *(_WORD *)(a2 + 8) == 1 && *(_WORD *)(a2 + 10) == 6 )
    {
      v11 &= ~0x200u;
      *(_DWORD *)(a1 + 52) = v11;
    }
    if ( (v11 & 0x400) != 0 && *(_WORD *)(a2 + 8) == 1 && *(_WORD *)(a2 + 10) == 6 )
    {
      v11 &= ~0x400u;
      *(_DWORD *)(a1 + 52) = v11;
    }
    if ( (v11 & 0x800) != 0 && *(_WORD *)(a2 + 8) == 1 && *(_WORD *)(a2 + 10) == 6 )
      *(_DWORD *)(a1 + 52) = v11 & 0xFFFFF7FF;
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 16);
    v9 = (*(_DWORD *)(v8 + 16))-- == 1;
    if ( v9 && a4 && HidTLCInfoNoReference(*(_DWORD **)(a2 + 16)) )
      FreeHidTLCInfo();
  }
  v10 = *(_DWORD *)(a2 + 12);
  if ( (v10 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 12) = v10 & 0xFFFFFFFE;
    if ( !a3 )
    {
      --*(_DWORD *)(a1 + 40);
      --_gHidCounters[2];
    }
  }
}
