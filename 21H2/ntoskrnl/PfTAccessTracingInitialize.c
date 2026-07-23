/*
 * XREFs of PfTAccessTracingInitialize @ 0x14099BAF4
 * Callers:
 *     PfTInitialize @ 0x1407BF25C (PfTInitialize.c)
 *     PfTAccessTracingCleanup @ 0x14099B9FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     InitializeSListHead @ 0x1402A3310 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 */

void __fastcall PfTAccessTracingInitialize(__int64 a1, __int64 a2, int a3)
{
  volatile __int64 *v4; // rcx

  if ( !a3 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 12) = 3;
  }
  *(_DWORD *)(a2 + 40) = 0;
  v4 = (volatile __int64 *)(a2 + 8);
  if ( a3 )
  {
    _InterlockedExchange64(v4, 0LL);
  }
  else
  {
    ExInitializePushLock((PKSPIN_LOCK)v4);
    InitializeSListHead((PSLIST_HEADER)(a2 + 64));
    KeInitializeEvent((PRKEVENT)(a2 + 16), NotificationEvent, 0);
  }
}
