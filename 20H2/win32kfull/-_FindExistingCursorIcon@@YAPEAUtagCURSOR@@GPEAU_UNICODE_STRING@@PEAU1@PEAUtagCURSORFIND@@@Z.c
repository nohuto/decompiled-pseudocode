/*
 * XREFs of ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0094708
 * Callers:
 *     NtUserFindExistingCursorIcon @ 0x1C0094440 (NtUserFindExistingCursorIcon.c)
 * Callees:
 *     ?SearchIconCache@@YAPEAUtagCURSOR@@PEAU1@GPEAU_UNICODE_STRING@@0PEAUtagCURSORFIND@@@Z @ 0x1C00947A8 (-SearchIconCache@@YAPEAUtagCURSOR@@PEAU1@GPEAU_UNICODE_STRING@@0PEAUtagCURSORFIND@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0094CA4 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 */

struct tagCURSOR *__fastcall _FindExistingCursorIcon(
        unsigned __int16 a1,
        struct _UNICODE_STRING *a2,
        struct tagCURSOR *a3,
        struct tagCURSORFIND *a4)
{
  struct tagCURSOR *result; // rax
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax

  result = 0LL;
  if ( *((_DWORD *)a4 + 2) && a1 )
  {
    CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
    result = SearchIconCache(
               *(struct tagCURSOR **)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 736LL),
               a1,
               a2,
               a3,
               a4);
    if ( !result )
      return SearchIconCache(gpcurFirst, a1, a2, a3, a4);
  }
  return result;
}
