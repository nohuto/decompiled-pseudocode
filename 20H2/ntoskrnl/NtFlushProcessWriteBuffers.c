/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x1402EA5F0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0LL);
  return 0LL;
}
