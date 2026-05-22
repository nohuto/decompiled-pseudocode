/*
 * XREFs of ??$make_unique@VDragGestureTracker@@AEAPEAUHINTERACTIONCONTEXT__@@$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@AEAPEAUHINTERACTIONCONTEXT__@@@Z @ 0x1800F7A28
 * Callers:
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z @ 0x1800FA9AC (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@@Z.c)
 *     ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x1800FED0C (-StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<DragGestureTracker,HINTERACTIONCONTEXT__ * &,0>(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  _DWORD *v6; // [rsp+30h] [rbp+8h]

  v6 = operator new(0x18uLL);
  v4 = *a2;
  *(_QWORD *)v6 = 0LL;
  v6[2] = 0;
  *((_QWORD *)v6 + 2) = v4;
  *a1 = v6;
  return a1;
}
