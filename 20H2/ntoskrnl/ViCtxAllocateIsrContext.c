/*
 * XREFs of ViCtxAllocateIsrContext @ 0x1409E7260
 * Callers:
 *     VfCtxHookAndConnectInterrupt @ 0x1409E6FBC (VfCtxHookAndConnectInterrupt.c)
 *     ViCtxSetPrivateConnectParameters @ 0x1409E763C (ViCtxSetPrivateConnectParameters.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall ViCtxAllocateIsrContext(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x72734956u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
