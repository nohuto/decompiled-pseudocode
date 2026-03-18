/*
 * XREFs of ClassUnlock @ 0x1C01E8A34
 * Callers:
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C015CC14 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlock(struct _CALLPROCDATA **a1, __int64 *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = *a2;
  *(_QWORD *)(ThreadWin32Thread + 16) = *a2;
  return ClassUnlockWorker(a1, v5, v6);
}
