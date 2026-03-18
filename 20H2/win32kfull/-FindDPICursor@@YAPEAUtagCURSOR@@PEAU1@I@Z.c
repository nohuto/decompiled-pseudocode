/*
 * XREFs of ?FindDPICursor@@YAPEAUtagCURSOR@@PEAU1@I@Z @ 0x1C007A050
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0079EF0 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0095764 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_CleanupUnneededSystemCursorSizes@@YAXI@Z @ 0x1C01D3A04 (-_CleanupUnneededSystemCursorSizes@@YAXI@Z.c)
 *     NtUserLinkDpiCursor @ 0x1C01FE100 (NtUserLinkDpiCursor.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__fastcall FindDPICursor(struct tagCURSOR *a1, int a2)
{
  struct tagCURSOR *result; // rax

  for ( result = (struct tagCURSOR *)*((_QWORD *)a1 + 6);
        result && *((_DWORD *)result + 19) != a2;
        result = (struct tagCURSOR *)*((_QWORD *)result + 5) )
  {
    ;
  }
  return result;
}
