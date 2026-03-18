/*
 * XREFs of _UnregisterModernAppThreadForRawKeyboard@4 @ 0x14441B
 * Callers:
 *     __EnableModernAppWindowKeyboardIntercept@8 @ 0x16D736 (__EnableModernAppWindowKeyboardIntercept@8.c)
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     ?HasRawKeyboardPerThreadRegistration@@YGHPBUtagPROCESSINFO@@@Z @ 0x143BEF (-HasRawKeyboardPerThreadRegistration@@YGHPBUtagPROCESSINFO@@@Z.c)
 */

int __thiscall UnregisterModernAppThreadForRawKeyboard(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // eax

  if ( HasHidTable((int)this) )
  {
    v2 = (_DWORD *)this[58];
    if ( (*(_DWORD *)(v2[118] + 52) & 0x800) != 0 )
    {
      v3 = this[172];
      if ( (((unsigned int)&loc_1FFFFC + 4) & v3) != 0 )
      {
        this[172] = v3 & 0xFFDFFFFF;
        if ( !HasRawKeyboardPerThreadRegistration(v2) )
          _RegisterRawInputDevices((int)&unk_26BF18, 1u, 2);
      }
    }
  }
  return 1;
}
