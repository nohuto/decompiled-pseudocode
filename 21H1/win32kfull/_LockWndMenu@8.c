/*
 * XREFs of _LockWndMenu@8 @ 0x1975AA
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x9B2F2 (-LockWndMenuWorker@@YGPAXPAUtagWND@@_NABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

int __fastcall LockWndMenu(int a1, _DWORD **a2)
{
  return LockWndMenuWorker(a1, 0, a2);
}
