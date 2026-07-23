/*
 * XREFs of PspUserThreadStartup @ 0x14064C130
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     KeQuerySystemTimePrecise @ 0x140355550 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     DbgkCreateThread @ 0x14064C314 (DbgkCreateThread.c)
 *     PspWriteTebIdealProcessor @ 0x14064C5BC (PspWriteTebIdealProcessor.c)
 *     MmGetSessionLocaleId @ 0x14064C7C0 (MmGetSessionLocaleId.c)
 *     PspDisablePrimaryTokenExchange @ 0x14064C7FC (PspDisablePrimaryTokenExchange.c)
 *     PfProcessCreateNotification @ 0x14064E808 (PfProcessCreateNotification.c)
 *     PspInitializeThunkContext @ 0x1406F2F08 (PspInitializeThunkContext.c)
 *     PspTerminateThreadByPointer @ 0x140709890 (PspTerminateThreadByPointer.c)
 *     DbgkCreateMinimalThread @ 0x14088354C (DbgkCreateMinimalThread.c)
 */

NTSTATUS PspUserThreadStartup()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  LARGE_INTEGER Process; // r14
  int SessionLocaleId; // eax
  __int64 v5; // rdx
  NTSTATUS result; // eax
  struct _KPRCB *v7; // rdi
  ULONG LowPart; // ebx
  int v9; // r8d
  unsigned __int64 v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v13; // zf
  unsigned int v14; // eax
  __int64 v15; // r8
  LARGE_INTEGER v16[4]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v17[112]; // [rsp+50h] [rbp-98h] BYREF

  v16[0].QuadPart = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  v16[2].QuadPart = (LONGLONG)CurrentThread;
  PspDisablePrimaryTokenExchange(CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
  {
    LOBYTE(v2) = 1;
    PspTerminateThreadByPointer(CurrentThread, 3221225547LL, v2);
  }
  Process = (LARGE_INTEGER)CurrentThread->ApcState.Process;
  v16[1] = Process;
  if ( (*(_DWORD *)(Process.QuadPart + 2172) & 1) != 0 )
  {
    DbgkCreateMinimalThread(CurrentThread);
  }
  else
  {
    SessionLocaleId = MmGetSessionLocaleId(v1, CurrentThread->Teb, v2);
    *(_DWORD *)(v5 + 264) = SessionLocaleId;
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
    KeQuerySystemTimePrecise(v16);
    v7 = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v9 = ExGenRandom(1);
    v10 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)0xFFFFF78000000330LL,
      v16[0].LowPart ^ v16[0].HighPart ^ LowPart ^ v10 ^ v9 ^ v7->MmPageFaultCount ^ v7->InterruptCount ^ v7->InterruptTime,
      0);
  }
  if ( (*(_BYTE *)(Process.QuadPart + 992) & 1) != 0 )
  {
    *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
    memset(v17, 0, 0x68uLL);
    v14 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v17);
    LOBYTE(v15) = 1;
    return PspTerminateThreadByPointer(CurrentThread, v14, v15);
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
