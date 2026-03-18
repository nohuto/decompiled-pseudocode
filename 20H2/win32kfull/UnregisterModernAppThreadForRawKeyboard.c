/*
 * XREFs of UnregisterModernAppThreadForRawKeyboard @ 0x1C01D50CC
 * Callers:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C0206B90 (_EnableModernAppWindowKeyboardIntercept.c)
 * Callees:
 *     HasHidTable @ 0x1C00D5400 (HasHidTable.c)
 *     _RegisterRawInputDevices @ 0x1C00FF680 (_RegisterRawInputDevices.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D46E0 (-HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall UnregisterModernAppThreadForRawKeyboard(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // edx

  if ( (unsigned int)HasHidTable(a1) )
  {
    v2 = *(_QWORD *)(a1 + 424);
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 832) + 100LL) & 0x800) != 0 )
    {
      v3 = *(_DWORD *)(a1 + 1232);
      if ( (v3 & 0x200000) != 0 )
      {
        *(_DWORD *)(a1 + 1232) = v3 & 0xFFDFFFFF;
        if ( !(unsigned int)HasRawKeyboardPerThreadRegistration((const struct tagPROCESSINFO *)v2) )
          RegisterRawInputDevices((__int64)&unk_1C0332FA8, 1LL, 2LL);
      }
    }
  }
  return 1LL;
}
