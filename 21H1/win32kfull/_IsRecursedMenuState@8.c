/*
 * XREFs of _IsRecursedMenuState@8 @ 0x1974FD
 * Callers:
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall IsRecursedMenuState(_DWORD *a1, int a2)
{
  return *a1 != *(_DWORD *)(a2 + 32);
}
