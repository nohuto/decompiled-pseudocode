/*
 * XREFs of ?vCleanupPrintKViewList@@YGXXZ @ 0x209AD8
 * Callers:
 *     ?MultiUserGreCleanupAllFonts@@YGXXZ @ 0xCD5E0 (-MultiUserGreCleanupAllFonts@@YGXXZ.c)
 * Callees:
 *     <none>
 */

void __stdcall vCleanupPrintKViewList()
{
  int v0; // esi
  PATHOBJ *v1; // [esp-4h] [ebp-8h]

  v0 = gpPrintKViewList;
  while ( v0 )
  {
    v1 = (PATHOBJ *)v0;
    v0 = *(_DWORD *)(v0 + 20);
    Win32FreePool(v1);
  }
  gpPrintKViewList = 0;
}
