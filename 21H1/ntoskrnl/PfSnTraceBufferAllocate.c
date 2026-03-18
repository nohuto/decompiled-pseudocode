/*
 * XREFs of PfSnTraceBufferAllocate @ 0x1402C2680
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x1402B64D0 (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x140651FEC (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11000uLL, 0x42506343u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
