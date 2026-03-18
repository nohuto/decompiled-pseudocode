/*
 * XREFs of MarkThreadsObjects @ 0x1C00710D0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1C002D084 (HMChangeOwnerThreadWorker.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1)
{
  __int64 result; // rax
  struct _HANDLEENTRY *v3; // rbx
  __int64 *v4; // rdi
  struct _HANDLEENTRY *v5; // rsi
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rdx

  GetDomainLockRef(20LL);
  result = GetDomainLockRef(14LL);
  v3 = qword_1C0250D48;
  v4 = (__int64 *)gpKernelHandleTable;
  v5 = (struct _HANDLEENTRY *)((char *)qword_1C0250D48 + 32 * (unsigned int)giheLast);
  if ( qword_1C0250D48 <= v5 )
  {
    do
    {
      v6 = *((unsigned __int8 *)v3 + 24);
      if ( (_BYTE)v6 && (*((_BYTE *)&unk_1C020B6DC + 24 * v6) & 2) == 0 && v4[1] == a1 )
      {
        if ( (_BYTE)v6 == 23 )
          v7 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
        else
          v7 = gptiRit;
        result = HMChangeOwnerThreadWorker(*v4, (__int64)v7);
      }
      v3 = (struct _HANDLEENTRY *)((char *)v3 + 32);
      v4 += 3;
    }
    while ( v3 <= v5 );
  }
  return result;
}
