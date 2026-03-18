/*
 * XREFs of _EditionRawInputRequestedForKeyboard@4 @ 0x16DF85
 * Callers:
 *     <none>
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 */

int __stdcall EditionRawInputRequestedForKeyboard(int a1)
{
  int v1; // esi

  v1 = 0;
  if ( _gHidCounters[0] || HasHidTable(a1) && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 232) + 472) + 52) & 0x10) != 0 )
    return 1;
  return v1;
}
