/*
 * XREFs of ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C00AE188
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C00AE3E0 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00AE114 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?SearchIconCache@@YAPEAUtagCURSOR@@PEAU1@GPEAU_UNICODE_STRING@@0PEAUtagCURSORFIND@@@Z @ 0x1C00AE228 (-SearchIconCache@@YAPEAUtagCURSOR@@PEAU1@GPEAU_UNICODE_STRING@@0PEAUtagCURSORFIND@@@Z.c)
 */

struct tagCURSOR *__fastcall _FindExistingCursorIcon(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        struct tagCURSOR *a3,
        struct tagCURSORFIND *a4)
{
  unsigned __int16 v7; // bx
  struct tagCURSOR *result; // rax
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax

  v7 = a1;
  result = 0LL;
  if ( *((_DWORD *)a4 + 2) && (_WORD)a1 )
  {
    CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1);
    result = SearchIconCache(
               *(struct tagCURSOR **)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 736LL),
               v7,
               a2,
               a3,
               a4);
    if ( !result )
      return SearchIconCache(gpcurFirst, v7, a2, a3, a4);
  }
  return result;
}
