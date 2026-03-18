/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C00AC730
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C00AC550 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     EtwInitializeAsyncKeyMonitor @ 0x1C005EB14 (EtwInitializeAsyncKeyMonitor.c)
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C00AC7A0 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C0245748 - 1) > 2u
    && (qword_1C0245730 & 0x400) != 0
    && (qword_1C0245738 & 0x400) == qword_1C0245738
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 52) + 56LL));
  }
}
