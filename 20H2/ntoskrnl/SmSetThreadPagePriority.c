/*
 * XREFs of SmSetThreadPagePriority @ 0x1403592A0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14025722C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x140358420 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     PsSetPagePriorityThread @ 0x140249634 (PsSetPagePriorityThread.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall SmSetThreadPagePriority(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // r8

  CurrentThread = *a1;
  if ( !*a1 )
  {
    CurrentThread = KeGetCurrentThread();
    *a1 = CurrentThread;
  }
  result = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (_DWORD)result != v3 )
    return PsSetPagePriorityThread(v4, v3);
  return result;
}
