/*
 * XREFs of ExpDebuggerWorker @ 0x1409B2030
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MmGetDefaultPagePriority @ 0x1402C2300 (MmGetDefaultPagePriority.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C50FC (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x1403FDCE0 (DbgBreakPointWithStatus.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140655D68 (MmPrefetchVirtualMemory.c)
 *     PsTerminateProcess @ 0x1406E666C (PsTerminateProcess.c)
 *     PsQuitNextProcessThread @ 0x1406ED7F0 (PsQuitNextProcessThread.c)
 *     EtwWmitraceWorker @ 0x140938024 (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // r14
  __int64 v1; // r15
  char v2; // r12
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r8
  _DWORD *v10; // r9
  void *v11; // rdi
  unsigned __int64 v12; // rsi
  _QWORD *v13; // rcx
  ULONG_PTR NextProcess; // rax
  _DWORD *v15; // r9
  __int64 v16; // r9
  int v17; // eax
  ULONG_PTR v18; // rcx
  NTSTATUS v19; // eax
  unsigned __int64 v20; // [rsp+20h] [rbp-50h] BYREF
  __int64 v21; // [rsp+28h] [rbp-48h]
  __int128 v22; // [rsp+30h] [rbp-40h] BYREF
  __int128 v23; // [rsp+40h] [rbp-30h]
  __int128 v24; // [rsp+50h] [rbp-20h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v20 = ExpDebuggerPageIn;
  v21 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker(v6, v5, v7, v8);
  v11 = 0LL;
  if ( v0 || v1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v13);
      v11 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0LL, (__int64)&v22, v15);
        if ( v11 )
          goto LABEL_3;
        break;
      }
      v13 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_30;
      }
    }
    v16 = v1;
    if ( v0 )
      v16 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v16, v20, v21, v22, v23, v24);
  }
LABEL_3:
  v12 = v20;
  if ( v20 )
  {
    LOBYTE(v17) = MmIsSessionAddress(v20);
    if ( v17 )
      v18 = -3LL;
    else
      v18 = -(__int64)(v20 < 0xFFFF800000000000uLL);
    v19 = MmPrefetchVirtualMemory(v18, 1uLL, (__int64)&v20, v4);
    if ( v19 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v19);
    v12 = v20;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v12 = v20;
  }
  if ( v0 || v1 || v12 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v11 )
  {
    KiUnstackDetachProcess((__int64)&v22, 0LL, v9, v10);
LABEL_30:
    PsQuitNextProcessThread(v11);
  }
}
