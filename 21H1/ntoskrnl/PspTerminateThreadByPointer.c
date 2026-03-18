/*
 * XREFs of PspTerminateThreadByPointer @ 0x140709890
 * Callers:
 *     PspSystemThreadStartup @ 0x140317E30 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     PspUserThreadStartup @ 0x14064C130 (PspUserThreadStartup.c)
 *     PsTerminateSystemThread @ 0x1406EA510 (PsTerminateSystemThread.c)
 *     PspTerminateAllThreads @ 0x1407094EC (PspTerminateAllThreads.c)
 *     NtTerminateThread @ 0x140709820 (NtTerminateThread.c)
 *     NtTerminateProcess @ 0x140709EB0 (NtTerminateProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140204560 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x140357C10 (KeRequestTerminationThread.c)
 *     PspExitThread @ 0x1407064A0 (PspExitThread.c)
 *     PspCatchCriticalBreak @ 0x140906864 (PspCatchCriticalBreak.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // bp
  __int64 v5; // rdi
  unsigned int v6; // esi

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 544);
  v6 = a2;
  if ( (*(_DWORD *)(a1 + 1296) & 0x20) != 0 && (*(_DWORD *)(v5 + 1124) & 0x40000008) == 0 )
  {
    PsGetProcessServerSilo(v5);
    PspCatchCriticalBreak("Terminating critical thread 0x%p (in %s)\n", (const void *)a1, (const char *)(v5 + 1448));
  }
  if ( v4 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1296), 1u);
    PspExitThread(v6);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v5 + 2172) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1296), 0) )
    *(_DWORD *)(a1 + 1352) = v6;
  KeRequestTerminationThread(a1, a2, a3, a4);
  return 0LL;
}
