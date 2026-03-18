/*
 * XREFs of PfSnTraceBufferAllocate @ 0x14035FCE0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1403203D0 (MiCompleteProtoPteFault.c)
 *     PfSnTraceGetLogEntry @ 0x14036669C (PfSnTraceGetLogEntry.c)
 *     PfSnBeginTrace @ 0x1407DA91C (PfSnBeginTrace.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

_DWORD *PfSnTraceBufferAllocate()
{
  _DWORD *result; // rax
  _DWORD *v1; // rbx

  result = (_DWORD *)ExAllocatePool2(64LL, 69632LL, 1112564547LL);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x11000uLL);
    result = v1;
    v1[5] = 4350;
  }
  return result;
}
