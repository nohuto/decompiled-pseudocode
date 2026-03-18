/*
 * XREFs of _EditionDoHotKeys@24 @ 0xB17F4
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 *     _IsSAS@8 @ 0xB1D3C (_IsSAS@8.c)
 */

int __stdcall EditionDoHotKeys(unsigned __int8 a1, char a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ecx

  if ( !xxxDoHotKeyStuff(a1, a3, a4, a5) )
    return 0;
  LOBYTE(v6) = a2;
  if ( IsSAS(v6, &a1) )
  {
    *a6 = 1;
    return 0;
  }
  return 1;
}
