/*
 * XREFs of ClassUnlock @ 0x1C01E96C4
 * Callers:
 *     _lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_::operator() @ 0x1C01592A4 (_lambda_f1a4ef51568b8a4d2f2910aa9313a7fc_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlock(struct _CALLPROCDATA **a1, _QWORD *a2)
{
  *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 16) = *a2;
  return ClassUnlockWorker(a1);
}
