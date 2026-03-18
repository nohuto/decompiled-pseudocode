/*
 * XREFs of _RegisterModernAppThreadForRawKeyboard@4 @ 0x14438A
 * Callers:
 *     __EnableModernAppWindowKeyboardIntercept@8 @ 0x16D736 (__EnableModernAppWindowKeyboardIntercept@8.c)
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 */

int __thiscall RegisterModernAppThreadForRawKeyboard(_DWORD *this)
{
  int v2; // edi
  int v4; // eax
  _WORD v5[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v6; // [esp+10h] [ebp-8h]
  int v7; // [esp+14h] [ebp-4h]

  v2 = this[172];
  if ( (v2 & ((unsigned int)&loc_1FFFFC + 4)) != 0 )
    return 1;
  if ( HasHidTable((int)this) )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this[58] + 472) + 52);
    if ( (v4 & 0x800) != 0 )
    {
      this[172] = ((unsigned int)&loc_1FFFFC + 4) | v2;
      return 1;
    }
    if ( (v4 & 0x10) != 0 )
    {
      UserSetLastError((struct _NT_TIB *)0x55);
      return 0;
    }
  }
  v7 = 0;
  v6 = 16944;
  v5[1] = 6;
  v5[0] = 1;
  if ( !_RegisterRawInputDevices((int)v5, 1u, 2) )
    return 0;
  this[172] |= (unsigned int)&loc_1FFFFC + 4;
  return 1;
}
