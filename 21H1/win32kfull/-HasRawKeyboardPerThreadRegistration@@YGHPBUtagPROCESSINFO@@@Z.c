/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YGHPBUtagPROCESSINFO@@@Z @ 0x143BEF
 * Callers:
 *     _DestroyThreadHidObjects@4 @ 0xA52E4 (_DestroyThreadHidObjects@4.c)
 *     _UnregisterModernAppThreadForRawKeyboard@4 @ 0x14441B (_UnregisterModernAppThreadForRawKeyboard@4.c)
 * Callees:
 *     <none>
 */

int __thiscall HasRawKeyboardPerThreadRegistration(_DWORD *this)
{
  int result; // eax

  for ( result = this[45]; result; result = *(_DWORD *)(result + 364) )
  {
    if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(result + 688)) != 0 )
      return 1;
  }
  return result;
}
