/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405AD774
 * Callers:
 *     EtwpFreeCompression @ 0x1402C7F24 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC4FC (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405ACDA0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD158 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpGetLoggerTimeStamp @ 0x14022CAD8 (EtwpGetLoggerTimeStamp.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140266230 (EtwpEnqueueAvailableBuffer.c)
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
