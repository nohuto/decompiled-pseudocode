/*
 * XREFs of NtFlushProcessWriteBuffers @ 0x140358FA0
 * Callers:
 *     <none>
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 */

__int64 NtFlushProcessWriteBuffers()
{
  KeFlushProcessWriteBuffers(0LL);
  return 0LL;
}
