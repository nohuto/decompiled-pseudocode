/*
 * XREFs of ?GetWindowFrameBounds@@YA?AUtagRECT@@PEBUtagWND@@@Z @ 0x1C024016C
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D0528 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 *     ?PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z @ 0x1C02401A4 (-PtInsideWindowFrameBounds@@YA_NAEBUtagPOINT@@PEBUtagWND@@@Z.c)
 * Callees:
 *     ?ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z @ 0x1C0240210 (-ReduceRectByWindowMargin@@YAXPEBUtagWND@@AEBUtagRECT@@PEAU2@@Z.c)
 */

struct tagRECT *__fastcall GetWindowFrameBounds(struct tagRECT *__return_ptr retstr, const struct tagWND *a2)
{
  *retstr = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  ReduceRectByWindowMargin(a2, retstr, retstr);
  return retstr;
}
