/*
 * XREFs of ??9EVECTORFX@@QBEHABU_VECTORFX@@@Z @ 0x234D4D
 * Callers:
 *     ?vAddJoin@WIDENER@@IAEXH@Z @ 0x23631A (-vAddJoin@WIDENER@@IAEXH@Z.c)
 *     ?vAddRoundJoin@WIDENER@@IAEXH@Z @ 0x23670B (-vAddRoundJoin@WIDENER@@IAEXH@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall EVECTORFX::operator!=(_DWORD *this, _DWORD *a2)
{
  return *this != *a2 || this[1] != a2[1];
}
