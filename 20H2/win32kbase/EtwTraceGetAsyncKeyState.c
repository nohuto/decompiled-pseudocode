/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C0076130
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0075F50 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C00761A0 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C0077B18 (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C0243738 - 1) > 2u
    && (qword_1C0243720 & 0x400) != 0
    && (qword_1C0243728 & 0x400) == qword_1C0243728
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 53) + 56LL));
  }
}
