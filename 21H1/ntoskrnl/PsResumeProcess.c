/*
 * XREFs of PsResumeProcess @ 0x1406E90D0
 * Callers:
 *     NtResumeProcess @ 0x1409080A0 (NtResumeProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeResumeThread @ 0x140356BE0 (KeResumeThread.c)
 *     PsGetNextProcessThread @ 0x14069A050 (PsGetNextProcessThread.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093720C (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsResumeProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *NextProcessThread; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  unsigned int v11; // ebx
  _QWORD *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (struct _EX_RUNDOWN_REF *)(a1 + 1112);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112)) == 1 )
  {
    NextProcessThread = PsGetNextProcessThread(a1, 0LL);
    v11 = 0;
    while ( 1 )
    {
      v12 = NextProcessThread;
      if ( !NextProcessThread )
        break;
      if ( (*((_DWORD *)NextProcessThread + 29) & 0x200000) == 0 )
        KeResumeThread((__int64)NextProcessThread, v8, v9, v10);
      NextProcessThread = PsGetNextProcessThread(a1, v12);
    }
    ExReleaseRundownProtection_0(v3);
  }
  else
  {
    v11 = -1073741558;
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v4, v5, v6);
  if ( (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(v11, CurrentThread, a1, 1LL);
  return v11;
}
