/*
 * XREFs of PspUserThreadStartup @ 0x1406B5110
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x140250640 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     KeQueryPerformanceCounter @ 0x1402F3FA0 (KeQueryPerformanceCounter.c)
 *     KeQuerySystemTimePrecise @ 0x1402F9570 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PspInitializeThunkContext @ 0x1406AE068 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x1406B3A40 (PspTerminateThreadByPointer.c)
 *     DbgkCreateThread @ 0x1406B52F4 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x1406B559C (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x1406B57A0 (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406B57DC (PspDisablePrimaryTokenExchange.c)
 *     PfProcessCreateNotification @ 0x1406B77E8 (PfProcessCreateNotification.c)
 *     DbgkCreateMinimalThread @ 0x14088486C (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  _DWORD *v3; // r9
  LARGE_INTEGER Process; // r14
  int SessionLocaleId; // eax
  __int64 v6; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v8; // rdi
  ULONG LowPart; // ebx
  int v10; // r8d
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v14; // zf
  unsigned int v15; // eax
  __int64 v16; // r8
  _DWORD *v17; // r9
  LARGE_INTEGER v18[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v19[112]; // [rsp+50h] [rbp-98h] BYREF

  v18[0].QuadPart = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v18[2].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v2) = 1;
    PspTerminateThreadByPointer((__int64)CurrentThread, 3221225547LL, v2, v3);
  }
  Process = (LARGE_INTEGER)CurrentThread->ApcState.Process;
  v18[1] = Process;
  if ( (*(_DWORD *)(Process.QuadPart + 2172) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId(v1, CurrentThread->Teb, v2);
    *(_DWORD *)(v6 + 264) = SessionLocaleId;
    PspWriteTebIdealProcessor(CurrentThread, CurrentThread);
    DbgkCreateThread(CurrentThread);
    if ( (*(_DWORD *)(Process.QuadPart + 1124) & 0x80000) == 0
      && !_interlockedbittestandset((volatile signed __int32 *)(Process.QuadPart + 1124), 0x13u) )
    {
      ((void (__fastcall *)(_QWORD, _QWORD))PfProcessCreateNotification)(
        (LARGE_INTEGER)Process.QuadPart,
        *(_QWORD *)(Process.QuadPart + 1304));
    }
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(v18);
    v8 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v10 = ExGenRandom(1);
    v11 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v18[0].LowPart ^ v18[0].HighPart ^ LowPart ^ v11 ^ v10 ^ v8->MmPageFaultCount ^ v8->InterruptCount ^ v8->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process.QuadPart + 992) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v19, 0, 0x68uLL);
    v15 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v19);
    LOBYTE(v16) = 1;
    return PspTerminateThreadByPointer((__int64)CurrentThread, v15, v16, v17);
  }
  else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    return KeWaitForSingleObject(CurrentThread, UserRequest, 1, 0, 0LL);
  }
  else
  {
    result = *(_DWORD *)(Process.QuadPart + 2172);
    if ( (result & 1) == 0 )
      return PspInitializeThunkContext();
  }
  return result;
}
