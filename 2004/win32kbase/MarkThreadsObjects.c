/*
 * XREFs of MarkThreadsObjects @ 0x1C0095500
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 * Callees:
 *     HMChangeOwnerThreadWorker @ 0x1C004FD24 (HMChangeOwnerThreadWorker.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall MarkThreadsObjects(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  struct _HANDLEENTRY *v9; // rbx
  __int64 *v10; // rdi
  struct _HANDLEENTRY *v11; // rsi
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // rdx

  GetDomainLockRef(20LL, a2, a3, a4);
  result = (__int64)GetDomainLockRef(14LL, v5, v6, v7);
  v9 = qword_1C024AD48;
  v10 = (__int64 *)gpKernelHandleTable;
  v11 = (struct _HANDLEENTRY *)((char *)qword_1C024AD48 + 32 * (unsigned int)giheLast);
  if ( qword_1C024AD48 <= v11 )
  {
    do
    {
      v12 = *((unsigned __int8 *)v9 + 24);
      if ( (_BYTE)v12 && (*((_BYTE *)&unk_1C02056CC + 24 * v12) & 2) == 0 && v10[1] == a1 )
      {
        if ( (_BYTE)v12 == 23 )
          v13 = (struct tagTHREADINFO *)gptiModerncoreTimerThread;
        else
          v13 = gptiRit;
        result = HMChangeOwnerThreadWorker(*v10, (__int64)v13);
      }
      v9 = (struct _HANDLEENTRY *)((char *)v9 + 32);
      v10 += 3;
    }
    while ( v9 <= v11 );
  }
  return result;
}
