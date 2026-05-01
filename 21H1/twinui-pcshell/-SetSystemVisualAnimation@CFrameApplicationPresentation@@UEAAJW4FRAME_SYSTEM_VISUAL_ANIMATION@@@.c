/*
 * XREFs of ?SetSystemVisualAnimation@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL_ANIMATION@@@Z @ 0x1801668C0
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0a37f67d6cb023dd76f3113d66a7144___ @ 0x180164E50 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_a0a37f67d6cb023dd76f3113d66a7144___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetSystemVisualAnimation(_DWORD *a1, int a2)
{
  __int128 v2; // xmm0
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  DWORD2(v4) = a2;
  *(_QWORD *)&v4 = a1;
  v2 = v4;
  a1[138] = a2;
  v4 = v2;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_a0a37f67d6cb023dd76f3113d66a7144___(a1, &v4);
}
