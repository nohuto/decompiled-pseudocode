/*
 * XREFs of ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0091398
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, int a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
