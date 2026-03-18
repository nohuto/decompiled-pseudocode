/*
 * XREFs of _IsSAS@8 @ 0xB1D3C
 * Callers:
 *     _EditionKeyEventLLHook@48 @ 0x1292C (_EditionKeyEventLLHook@48.c)
 *     _EditionDoHotKeys@24 @ 0xB17F4 (_EditionDoHotKeys@24.c)
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _EditionIsSAS@8 @ 0x16DF6C (_EditionIsSAS@8.c)
 * Callees:
 *     <none>
 */

int __fastcall IsSAS(unsigned __int8 a1, _DWORD *a2)
{
  struct tagSASKEY **v2; // esi
  struct tagSASKEY *v3; // edi

  v2 = &gSasKeyList;
  while ( 1 )
  {
    v3 = v2[1];
    if ( !v3 )
      return 0;
    if ( (struct tagSASKEY *)a1 == v3 && (struct tagSASKEY *)_gfsSASModifiersDown == *v2 )
      break;
    v2 += 2;
    if ( (int)v2 >= (int)&gFullLog )
      return 0;
  }
  *a2 = _gfsSASModifiersDown;
  return 1;
}
