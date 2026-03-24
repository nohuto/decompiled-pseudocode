/*
 * XREFs of EtwpCopyJobIdSafe @ 0x1409369F4
 * Callers:
 *     EtwTraceJobServerSiloMonitorCallback @ 0x1403C82F0 (EtwTraceJobServerSiloMonitorCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCopyJobIdSafe(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 1236);
  *a1 = result;
  return result;
}
