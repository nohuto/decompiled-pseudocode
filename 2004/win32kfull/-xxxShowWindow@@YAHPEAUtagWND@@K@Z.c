/*
 * XREFs of ?xxxShowWindow@@YAHPEAUtagWND@@K@Z @ 0x1C0114140
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 *     xxxDestroyWindow @ 0x1C008A700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 * Callees:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 */

__int64 __fastcall xxxShowWindow(struct tagWND *a1, int a2)
{
  return xxxShowWindowEx(a1, a2, a2 & 0x10000);
}
