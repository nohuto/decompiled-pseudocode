/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405A8214
 * Callers:
 *     EtwpFreeCompression @ 0x1402FFB4C (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405A6F88 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405A7840 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405A7BF8 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x14027E3B4 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402F3F58 (EtwpGetLoggerTimeStamp.c)
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
