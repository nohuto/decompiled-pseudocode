/*
 * XREFs of xxxCleanupMotherDesktopWindow @ 0x1C00BA988
 * Callers:
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BC9B8 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxDesktopThread @ 0x1C00BD8D0 (xxxDesktopThread.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00BDFE8 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxCreateWindowStation @ 0x1C00C1C7C (xxxCreateWindowStation.c)
 * Callees:
 *     SetVisible @ 0x1C0020760 (SetVisible.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxCleanupMotherDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  struct tagWND *v2; // rdi
  __int64 result; // rax

  v1 = a1 + 8;
  v2 = *(struct tagWND **)(a1 + 8);
  SetVisible(v2, 0);
  result = HMAssignmentUnlock(v1);
  if ( result )
    return xxxDestroyWindow((__int64 *)v2);
  return result;
}
