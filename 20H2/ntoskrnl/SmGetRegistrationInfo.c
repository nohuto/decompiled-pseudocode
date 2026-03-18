/*
 * XREFs of SmGetRegistrationInfo @ 0x1407CAF8C
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1407CAEE0 (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x1407CB038 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x1407CD528 (SmRegistrationCtxStart.c)
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
    ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
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
