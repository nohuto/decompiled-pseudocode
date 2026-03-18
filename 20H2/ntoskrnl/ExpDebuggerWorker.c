/*
 * XREFs of ExpDebuggerWorker @ 0x1409B8030
 * Callers:
 *     <none>
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     MmGetDefaultPagePriority @ 0x14024422C (MmGetDefaultPagePriority.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403C8AFC (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140405240 (DbgBreakPointWithStatus.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1406DC8DC (PsTerminateProcess.c)
 *     PsQuitNextProcessThread @ 0x1406E3CC0 (PsQuitNextProcessThread.c)
 *     MmPrefetchVirtualMemory @ 0x1406F09B8 (MmPrefetchVirtualMemory.c)
 *     EtwWmitraceWorker @ 0x14093F0F4 (EtwWmitraceWorker.c)
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
  ULONG_PTR v14; // rcx
  NTSTATUS v15; // eax
  unsigned __int64 v16; // [rsp+20h] [rbp-50h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h]
  __int128 v18; // [rsp+30h] [rbp-40h] BYREF
  __int128 v19; // [rsp+40h] [rbp-30h]
  __int128 v20; // [rsp+50h] [rbp-20h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v16 = ExpDebuggerPageIn;
  v17 = 1LL;
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
        KiStackAttachProcess(v0, 0, (__int64)&v18);
        if ( v9 )
          goto LABEL_3;
        break;
      }
      v11 = (_QWORD *)NextProcess;
      if ( NextProcess == v1 )
      {
        PsTerminateProcess(NextProcess, 0x40010004u);
        goto LABEL_30;
      }
    }
    v13 = v1;
    if ( v0 )
      v13 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v13, v16, v17, v18, v19, v20);
  }
LABEL_3:
  v10 = v16;
  if ( v16 )
  {
    if ( MmIsSessionAddress(v16) )
      v14 = -3LL;
    else
      v14 = -(__int64)(v16 < 0xFFFF800000000000uLL);
    v15 = MmPrefetchVirtualMemory(v14, 1uLL, (unsigned __int64)&v16, v4);
    if ( v15 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v15);
    v10 = v16;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v10 = v16;
  }
  if ( v0 || v1 || v10 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v9 )
  {
    KiUnstackDetachProcess((__int64)&v18, 0);
LABEL_30:
    PsQuitNextProcessThread(v9);
  }
}
