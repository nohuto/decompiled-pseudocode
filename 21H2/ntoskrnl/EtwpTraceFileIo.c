/*
 * XREFs of EtwpTraceFileIo @ 0x1405A9B10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     EtwpFileProvTrace @ 0x1405A8AA4 (EtwpFileProvTrace.c)
 */

__int64 __fastcall EtwpTraceFileIo(
        __int64 a1,
        struct _EVENT_DATA_DESCRIPTOR *a2,
        ULONG a3,
        unsigned int a4,
        __int16 a5,
        const GUID *a6)
{
  __int64 ThreadServerSilo; // rdi
  __int64 result; // rax

  if ( a1 )
    ThreadServerSilo = PsGetThreadServerSilo(a1);
  else
    ThreadServerSilo = 0LL;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 0x6000000) != 0 )
    EtwpFileProvTrace(a2, a3, a5, a6);
  result = 1102LL;
  if ( a5 != 1102 )
    return EtwTraceSiloKernelEvent(ThreadServerSilo, (int)a2, a3, a4, a5, 5249283);
  return result;
}
