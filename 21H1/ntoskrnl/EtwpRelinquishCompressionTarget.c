/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405A7B24
 * Callers:
 *     EtwpFreeCompression @ 0x14033FF7C (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405A6898 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405A7150 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405A7508 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x140240C58 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x14024161C (EtwpEnqueueAvailableBuffer.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1168) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1168) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1168), 5u);
    *(_QWORD *)(a1 + 1168) = 0LL;
  }
}
