/*
 * XREFs of ?GetID@DWMCursor@@UEAA?AUCursorId@@XZ @ 0x18001EB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DWMCursor::GetID(__int64 a1, _QWORD *a2)
{
  *a2 = *(_QWORD *)(a1 + 40);
  return a2;
}
