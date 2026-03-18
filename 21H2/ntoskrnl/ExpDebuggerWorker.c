/*
 * XREFs of ExpDebuggerWorker @ 0x140A70F90
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x1403D820C (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     DbgBreakPointWithStatus @ 0x140429800 (DbgBreakPointWithStatus.c)
 *     MmPrefetchVirtualMemory @ 0x1406EC048 (MmPrefetchVirtualMemory.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     PsQuitNextProcessThread @ 0x1407FCBC0 (PsQuitNextProcessThread.c)
 *     EtwWmitraceWorker @ 0x1409E8E6C (EtwWmitraceWorker.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // r14
  __int64 v1; // r15
  char v2; // r12
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 *v5; // rdi
  unsigned __int64 v6; // rsi
  __int64 *v7; // rcx
  __int64 *NextProcess; // rax
  _DWORD *v9; // r9
  __int64 v10; // r9
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-40h] BYREF
  __int128 v16; // [rsp+40h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-20h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v13 = ExpDebuggerPageIn;
  v14 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v7);
      v5 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == (__int64 *)v0 )
      {
        KiStackAttachProcess(v0, 0LL, (__int64)&v15, v9);
        if ( v5 )
          goto LABEL_3;
        break;
      }
      v7 = NextProcess;
      if ( NextProcess == (__int64 *)v1 )
      {
        PsTerminateProcess((__int64)NextProcess, 0x40010004u);
        goto LABEL_30;
      }
    }
    v10 = v1;
    if ( v0 )
      v10 = (__int64)v0;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v10, v13, v14, v15, v16, v17);
  }
LABEL_3:
  v6 = v13;
  if ( v13 )
  {
    if ( MmIsSessionAddress(v13) )
      v11 = -3LL;
    else
      v11 = -(__int64)(v13 < 0xFFFF800000000000uLL);
    v12 = MmPrefetchVirtualMemory((char *)v11, 1uLL, (__int64)&v13, v4);
    if ( v12 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v12);
    v6 = v13;
  }
  if ( v2 )
  {
    EtwWmitraceWorker();
    v6 = v13;
  }
  if ( v0 || v1 || v6 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    KiUnstackDetachProcess((__int64)&v15, 0LL);
LABEL_30:
    PsQuitNextProcessThread(v5);
  }
}
