/*
 * XREFs of ExpDebuggerWorker @ 0x1409B2030
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     MmIsSessionAddress @ 0x140275140 (MmIsSessionAddress.c)
 *     MmGetDefaultPagePriority @ 0x1402FE7D4 (MmGetDefaultPagePriority.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C606C (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x1403FEF70 (DbgBreakPointWithStatus.c)
 *     PsTerminateProcess @ 0x14065797C (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
 *     MmPrefetchVirtualMemory @ 0x1406D03C8 (MmPrefetchVirtualMemory.c)
 *     PsQuitNextProcessThread @ 0x140711350 (PsQuitNextProcessThread.c)
 *     EtwWmitraceWorker @ 0x1409392C4 (EtwWmitraceWorker.c)
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
  void *v9; // rdi
  unsigned __int64 v10; // rsi
  _QWORD *v11; // rcx
  ULONG_PTR NextProcess; // rax
  __int64 v13; // r9
  int v14; // eax
  ULONG_PTR v15; // rcx
  NTSTATUS v16; // eax
  unsigned __int64 v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18; // [rsp+28h] [rbp-48h]
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v17 = ExpDebuggerPageIn;
  v18 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker(v6, v5, v7, v8);
  v9 = 0LL;
  if ( v0 || v1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v11);
      v9 = (void *)NextProcess;
      if ( !NextProcess )
        break;
      if ( (_KPROCESS *)NextProcess == v0 )
      {
        KiStackAttachProcess(v0, 0LL, (__int64)&v19);
        if ( v9 )
          goto LABEL_3;
        break;
      }
      v11 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_30;
      }
    }
    v13 = v1;
    if ( v0 )
      v13 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v13, v17, v18, v19, v20, v21);
  }
LABEL_3:
  v10 = v17;
  if ( v17 )
  {
    LOBYTE(v14) = MmIsSessionAddress(v17);
    if ( v14 )
      v15 = -3LL;
    else
      v15 = -(__int64)(v17 < 0xFFFF800000000000uLL);
    v16 = MmPrefetchVirtualMemory(v15, 1uLL, (unsigned __int64)&v17, v4);
    if ( v16 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v16);
    v10 = v17;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v10 = v17;
  }
  if ( v0 || v1 || v10 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v9 )
  {
    KiUnstackDetachProcess((__int64)&v19, 0LL);
LABEL_30:
    PsQuitNextProcessThread(v9);
  }
}
