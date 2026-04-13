/*
 * XREFs of CStdStubBuffer2_Release @ 0x180058460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall CStdStubBuffer2_Release(IRpcStubBuffer *This)
{
  return NdrCStdStubBuffer2_Release(This, (IPSFactoryBuffer *)&gPFactory);
}
