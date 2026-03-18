/*
 * XREFs of SmGetRegistrationInfo @ 0x1407B958C
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1407B94E0 (SmProcessRegistrationRequest.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x1407B9638 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x1407BBB2C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // edi
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
  if ( (dword_140D24140 & 8) != 0 )
  {
    v5 = 0;
  }
  else
  {
    v5 = SmRegistrationCtxStart(&qword_140D243F0);
    if ( v5 >= 0 )
      dword_140D24140 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( v5 >= 0 )
  {
    LOBYTE(v6) = a1;
    v5 = SmRegistrationInfoFill(&qword_140D243F0, v6, a2 + 8);
    if ( v5 >= 0 )
      return 0;
  }
  return (unsigned int)v5;
}
