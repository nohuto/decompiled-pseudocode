/*
 * XREFs of ?_FindExistingCursorIcon@@YGPAUtagCURSOR@@GPAU_UNICODE_STRING@@PAU1@PAUtagCURSORFIND@@@Z @ 0x487F0
 * Callers:
 *     _NtUserFindExistingCursorIcon@12 @ 0x48504 (_NtUserFindExistingCursorIcon@12.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?SearchIconCache@@YGPAUtagCURSOR@@PAU1@GPAU_UNICODE_STRING@@0PAUtagCURSORFIND@@@Z @ 0x48862 (-SearchIconCache@@YGPAUtagCURSOR@@PAU1@GPAU_UNICODE_STRING@@0PAUtagCURSORFIND@@@Z.c)
 */

struct tagCURSOR *__userpurge _FindExistingCursorIcon@<eax>(
        struct tagCURSOR *a1@<edx>,
        __int16 a2@<cx>,
        unsigned __int16 a3,
        struct _UNICODE_STRING *a4,
        struct tagCURSOR *a5,
        struct tagCURSORFIND *a6)
{
  struct tagCURSOR *result; // eax
  PKTHREAD CurrentThread; // eax
  struct tagCURSOR *v9; // [esp+0h] [ebp-Ch]
  struct tagCURSOR *v10; // [esp+0h] [ebp-Ch]
  struct tagCURSORFIND *v11; // [esp+4h] [ebp-8h]
  struct tagCURSORFIND *v12; // [esp+4h] [ebp-8h]

  result = 0;
  if ( a4->Buffer && a2 )
  {
    CurrentThread = KeGetCurrentThread();
    W32GetThreadWin32Thread(CurrentThread);
    result = SearchIconCache(a1, a3, a4, v9, v11);
    if ( !result )
      return SearchIconCache(a1, a3, a4, v10, v12);
  }
  return result;
}
