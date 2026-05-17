/*
 * XREFs of _ZwFlushProcessWriteBuffers@0 @ 0x4B2F3820
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwFlushProcessWriteBuffers()
{
  return Wow64SystemServiceCall();
}
