/*
 * XREFs of PfTAccessTracingInitialize @ 0x14099AAF4
 * Callers:
 *     PfTInitialize @ 0x1407BED40 (PfTInitialize.c)
 *     PfTAccessTracingCleanup @ 0x14099A9FC (PfTAccessTracingCleanup.c)
 * Callees:
 *     ExInitializePushLock @ 0x140278EE0 (ExInitializePushLock.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x14035E3E0 (InitializeSListHead.c)
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
