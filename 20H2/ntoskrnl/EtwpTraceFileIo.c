/*
 * XREFs of EtwpTraceFileIo @ 0x1405A7EB0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402339FC (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     EtwpFileProvTrace @ 0x1405A6E44 (EtwpFileProvTrace.c)
 */

void __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5,
        const GUID *a6)
{
  __int64 ThreadServerSilo; // rdi

  if ( a1 )
    ThreadServerSilo = PsGetThreadServerSilo(a1);
  else
    ThreadServerSilo = 0LL;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x6000000) != 0 )
    EtwpFileProvTrace(a2, a3, a5, a6);
  if ( a5 != 1102 )
    EtwTraceSiloKernelEvent(ThreadServerSilo, (__int64)a2, a3, a4, a5, 0x501903u);
}
