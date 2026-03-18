/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x140667120
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140667274 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14066753C (ExpWnfCompleteThreadSubscriptions.c)
 */

__int64 __fastcall NtGetCompleteWnfStateSubscription(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile void *Address,
        SIZE_T Length)
{
  __int64 v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int v9; // ebx
  unsigned __int64 v10; // r14
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = a1;
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  v10 = KeGetCurrentThread()->ApcState.Process[1].EndPadding[7];
  if ( v10 )
  {
    if ( !a1 || !a2 )
      goto LABEL_11;
    if ( (_DWORD)a3 && (!(_DWORD)a4 || (_DWORD)a4 == -1073741267) )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        v7 = 0x7FFFFFFF0000LL;
      v12 = *(_QWORD *)v7;
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      v9 = ExpWnfCompleteThreadSubscriptions(v10, (unsigned int)&v12, *(_QWORD *)a2, a3, a4);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( (_DWORD)Length )
        {
          if ( (unsigned int)Length < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(Address, (unsigned int)Length, 8u);
            v9 = ExpWnfDeliverThreadNotifications(v10, Address, (unsigned int)Length);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, a3, a4);
  return (unsigned int)v9;
}
