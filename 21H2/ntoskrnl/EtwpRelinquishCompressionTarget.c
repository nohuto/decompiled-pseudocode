/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1406355B0
 * Callers:
 *     EtwpFreeCompression @ 0x14024E0F0 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140634830 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x140634F90 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1406352B0 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402E1AB0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402E1D0C (EtwpGetLoggerTimeStamp.c)
 */

void __fastcall EtwpRelinquishCompressionTarget(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 1152) )
  {
    *(LARGE_INTEGER *)(*(_QWORD *)(a1 + 1152) + 16LL) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1152), 5u);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
}
