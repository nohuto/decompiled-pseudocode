/*
 * XREFs of operator__ @ 0x1801707B4
 * Callers:
 *     ?IsCursorAtRest@CursorAttraction@@AEAA_NXZ @ 0x180170B00 (-IsCursorAtRest@CursorAttraction@@AEAA_NXZ.c)
 *     ?UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z @ 0x180170BC0 (-UpdateAttractionParameters@CursorAttraction@@AEAAXAEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator__(_DWORD *a1, _DWORD *a2)
{
  return *a1 != *a2 || a1[1] != a2[1];
}
