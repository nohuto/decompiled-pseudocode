/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405ABD74
 * Callers:
 *     EtwpFreeCompression @ 0x140360504 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AAAEC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405AB3A0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AB758 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140266AA8 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14026747C (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1136) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1136) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1136), 5u);
    *(_QWORD *)(a1 + 1136) = 0LL;
  }
}
