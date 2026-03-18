/*
 * XREFs of PsSuspendProcess @ 0x1409081A0
 * Callers:
 *     PspFreezeProcessWorker @ 0x140906A40 (PspFreezeProcessWorker.c)
 *     NtSuspendProcess @ 0x140908120 (NtSuspendProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     PsSuspendThread @ 0x1406E5EC0 (PsSuspendThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *NextProcessThread; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v8 = 0;
    while ( 1 )
    {
      v9 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        PsSuspendThread((__int64)NextProcessThread, 0LL);
      NextProcessThread = PsGetNextProcessThread(a1, v9);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v8 = -1073741558;
  }
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v8, CurrentThread, a1, 0LL);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v5, v6);
  return v8;
}
