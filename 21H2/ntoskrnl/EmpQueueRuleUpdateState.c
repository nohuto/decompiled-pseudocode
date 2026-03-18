/*
 * XREFs of EmpQueueRuleUpdateState @ 0x1403C45F0
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x140540E10 (EmpProviderDeregisterEntry.c)
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     EmpClientRuleRegisterNotification @ 0x14092C834 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14092CA90 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14092CCA0 (EmProviderRegisterEntry.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  _QWORD *i; // rax
  _QWORD *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // ecx
  __int64 p_Process; // rbx
  unsigned int v9; // edx
  int v10; // r9d
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&EmpEvaluationQueueLock, 0LL);
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_8;
      }
      break;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1970359621LL);
  if ( Pool2 )
  {
    *Pool2 = a1;
    Pool2[2] = a2;
    Pool2[1] = EmpRuleUpdateQueue;
    EmpRuleUpdateQueue = (__int64)(Pool2 + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem(&EmpRuleUpdateWorker, DelayedWorkQueue);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&EmpEvaluationQueueLock);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&EmpEvaluationQueueLock - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v9 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&EmpEvaluationQueueLock & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v9;
    p_Process += 96LL;
    if ( v9 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v10 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    result = *(unsigned __int8 *)(p_Process + 16);
    CurrentThread->AbEntrySummary |= 1 << result;
    _enable();
    if ( v10 )
      return KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)&EmpEvaluationQueueLock, v10);
    return result;
  }
LABEL_23:
  result = *((unsigned int *)&CurrentThread->MiscFlags + 1);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&EmpEvaluationQueueLock, SessionId, 0LL);
  _enable();
  return result;
}
