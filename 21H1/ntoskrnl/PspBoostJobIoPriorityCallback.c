/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x1406754D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x1402E33DC (IoBoostThreadIoPriority.c)
 *     PspGetNextJobProcess @ 0x140675270 (PspGetNextJobProcess.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  void *v3; // r9
  _QWORD *NextJobProcess; // rbx
  KSPIN_LOCK *i; // rdx
  __int64 NextProcessThread; // rax
  KSPIN_LOCK *v8; // rdi
  int IoPriorityThread; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 860) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    while ( 1 )
    {
      NextJobProcess = PspGetNextJobProcess(a1, (__int64)CurrentThread, &v10, v3);
      if ( !NextJobProcess )
        break;
      for ( i = 0LL; ; i = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(NextJobProcess, i);
        v8 = (KSPIN_LOCK *)NextProcessThread;
        if ( !NextProcessThread )
          break;
        IoPriorityThread = PsGetIoPriorityThread(NextProcessThread);
        IoBoostThreadIoPriority(v8, IoPriorityThread, 0);
      }
      v3 = NextJobProcess;
      a1 = v1;
    }
  }
  return 0LL;
}
