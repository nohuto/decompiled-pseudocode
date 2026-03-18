/*
 * XREFs of ?ShouldVirtualizeIconCursorSize@@YA_NPEAUtagCURSOR@@@Z @ 0x1C0067B8C
 * Callers:
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C0067AAC (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0067B4C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ShouldVirtualizeIconCursorSize(struct tagCURSOR *a1)
{
  char v1; // r8

  v1 = 1;
  if ( *((_WORD *)a1 + 37) != 1 )
    return *((_WORD *)a1 + 36) == atomUSER32;
  return v1;
}
