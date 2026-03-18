/*
 * XREFs of MarkThreadsObjects @ 0x1C0056C20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     HMChangeOwnerThreadWorker @ 0x1C00B0834 (HMChangeOwnerThreadWorker.c)
 */

void *__fastcall MarkThreadsObjects(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *result; // rax
  struct _HANDLEENTRY *v9; // rbx
  _QWORD *v10; // rdi
  struct _HANDLEENTRY *v11; // rsi
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rdx

  GetDomainLockRef(20LL, a2, a3, a4);
  result = GetDomainLockRef(14LL, v5, v6, v7);
  v9 = qword_1C0248D48;
  v10 = gpKernelHandleTable;
  v11 = (struct _HANDLEENTRY *)((char *)qword_1C0248D48 + 32 * (unsigned int)giheLast);
  if ( qword_1C0248D48 <= v11 )
  {
    do
    {
      v12 = *((unsigned __int8 *)v9 + 24);
      if ( (_BYTE)v12 && (*((_BYTE *)&unk_1C020365C + 24 * v12) & 2) == 0 && v10[1] == a1 )
      {
        if ( (_BYTE)v12 == 23 )
          v13 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
        else
          v13 = gptiRit;
        result = (void *)HMChangeOwnerThreadWorker(*v10, v13);
      }
      v9 = (struct _HANDLEENTRY *)((char *)v9 + 32);
      v10 += 3;
    }
    while ( v9 <= v11 );
  }
  return result;
}
