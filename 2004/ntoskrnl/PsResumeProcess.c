/*
 * XREFs of PsResumeProcess @ 0x14070CF30
 * Callers:
 *     NtResumeProcess @ 0x140909350 (NtResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KeResumeThread @ 0x1402FAC00 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x1406A0120 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409384AC (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  _QWORD *NextProcessThread; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  _DWORD *v7; // r9
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
        KeResumeThread((__int64)NextProcessThread, v5, v6, v7);
      NextProcessThread = PsGetNextProcessThread(a1, v9);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v8 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v8, CurrentThread, a1, 1LL);
  return v8;
}
