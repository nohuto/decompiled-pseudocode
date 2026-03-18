/*
 * XREFs of _ClassUnlock@8 @ 0xA1C52
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _lambda_b4f389971314f5ad328fcfc46dc01f2a_::operator() @ 0xF42B8 (_lambda_b4f389971314f5ad328fcfc46dc01f2a_--operator().c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78 (-ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z.c)
 */

struct tagCLS *__fastcall ClassUnlock(struct tagCLS *a1, _DWORD *a2)
{
  PKTHREAD CurrentThread; // eax

  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 8) = *a2;
  return ClassUnlockWorker(a1);
}
