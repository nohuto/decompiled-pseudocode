/*
 * XREFs of _dynamic_initializer_for__g_CursorManager__ @ 0x180003CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCursorManager@@QEAA@XZ @ 0x18002FC18 (--0CCursorManager@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__g_CursorManager__(CCursorManager *a1)
{
  CCursorManager::CCursorManager(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__g_CursorManager__);
}
