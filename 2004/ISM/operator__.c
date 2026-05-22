/*
 * XREFs of operator__ @ 0x180170394
 * Callers:
 *     ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x1801706E0 (-IsCursorAtRest@CursorAttraction@@AEAA_NXZ.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x1801707A0 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator__(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
