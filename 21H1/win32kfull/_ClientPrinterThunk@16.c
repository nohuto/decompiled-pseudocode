/*
 * XREFs of _ClientPrinterThunk@16 @ 0x18A136
 * Callers:
 *     ?Thunk@UMPDOBJ@@QAEKPAXK0K@Z @ 0x20A935 (-Thunk@UMPDOBJ@@QAEKPAXK0K@Z.c)
 * Callees:
 *     ?pppUserModeCallback@@YGJKPAXK0K@Z @ 0x1894E0 (-pppUserModeCallback@@YGJKPAXK0K@Z.c)
 */

int __fastcall ClientPrinterThunk(int a1, unsigned int a2, void *a3, unsigned int a4)
{
  void *v7; // [esp+0h] [ebp-8h]
  unsigned int v8; // [esp+4h] [ebp-4h]

  if ( ExIsResourceAcquiredExclusiveLite(_gpresUser) || ExIsResourceAcquiredSharedLite(_gpresUser) )
    return -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a4;
  return (pppUserModeCallback(a1, a2, a3, a4, v7, v8) >= 0) - 1;
}
