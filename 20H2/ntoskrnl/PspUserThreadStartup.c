/*
 * XREFs of PspUserThreadStartup @ 0x140692D10
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 *     KeQuerySystemTimePrecise @ 0x1402D6A70 (KeQuerySystemTimePrecise.c)
 *     ExGenRandom @ 0x1402D7710 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x1402E51E8 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 *     MmGetSessionLocaleId @ 0x14062975C (MmGetSessionLocaleId.c)
 *     PfProcessCreateNotification @ 0x14064CF8C (PfProcessCreateNotification.c)
 *     DbgkCreateThread @ 0x140692EF4 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x14069319C (PspWriteTebIdealProcessor.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406933A0 (PspDisablePrimaryTokenExchange.c)
 *     PspInitializeThunkContext @ 0x1406934F4 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x14069A1F0 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x14088A3BC (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // r8
  __int64 Process; // r14
  int SessionLocaleId; // eax
  __int64 v4; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v6; // rdi
  ULONG LowPart; // ebx
  int v8; // r8d
  unsigned __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // r8
  LARGE_INTEGER v15[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v16[112]; // [rsp+50h] [rbp-98h] BYREF

  v15[0].QuadPart = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v15[2].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v1) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v1);
  }
  Process = (__int64)CurrentThread->ApcState.Process;
  v15[1].QuadPart = Process;
  if ( (*(_DWORD *)(Process + 2172) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId();
    *(_DWORD *)(v4 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process + 1124) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process + 1124), 0x13u) )
    {
      PfProcessCreateNotification(Process, *(_QWORD *)(Process + 1304));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v15);
    v6 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v8 = ExGenRandom(1);
    v9 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v15[0].LowPart ^ v15[0].HighPart ^ LowPart ^ v9 ^ v8 ^ v6->MmPageFaultCount ^ v6->InterruptCount ^ v6->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process + 992) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v16, 0, 0x68uLL);
    v13 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v16);
    LOBYTE(v14) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v13, v14);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process + 2172);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
