/*
 * XREFs of ?HasRawKeyboardPerThreadRegistration@@YAHPEBUtagPROCESSINFO@@@Z @ 0x1C01D53A0
 * Callers:
 *     DestroyThreadHidObjects @ 0x1C00F7A30 (DestroyThreadHidObjects.c)
 *     UnregisterModernAppThreadForRawKeyboard @ 0x1C01D5D8C (UnregisterModernAppThreadForRawKeyboard.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HasRawKeyboardPerThreadRegistration(const struct tagPROCESSINFO *a1)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)a1 + 40); ; i = *(_QWORD *)(i + 656) )
  {
    if ( !i )
      return 0LL;
    if ( (*(_DWORD *)(i + 1224) & 0x200000) != 0 )
      break;
  }
  return 1LL;
}
