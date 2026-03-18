/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1C000F590
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C000F3B0 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z @ 0x1C000F600 (-OnKeyStateRequested@CAsyncKeyEventMonitor@@QEAAXK@Z.c)
 *     EtwInitializeAsyncKeyMonitor @ 0x1C000FB80 (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(CAsyncKeyEventMonitor *a1)
{
  if ( (W32kEtwEnabledKeyword & 0x400) != 0
    && (unsigned __int8)(byte_1C024B738 - 1) > 2u
    && (qword_1C024B720 & 0x400) != 0
    && (qword_1C024B728 & 0x400) == qword_1C024B728
    && (gpAsyncKeyEventMonitor || (int)EtwInitializeAsyncKeyMonitor() >= 0) )
  {
    CAsyncKeyEventMonitor::OnKeyStateRequested(a1, *(_DWORD *)(*((_QWORD *)a1 + 52) + 56LL));
  }
}
