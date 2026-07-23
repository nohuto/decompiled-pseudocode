/*
 * XREFs of EtwpRelinquishCompressionTarget @ 0x1405AD9A4
 * Callers:
 *     EtwpFreeCompression @ 0x140246784 (EtwpFreeCompression.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1405AC72C (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressionProc @ 0x1405ACFD0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x1405AD388 (EtwpDisableCompression.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1402541D0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x1402D1328 (EtwpGetLoggerTimeStamp.c)
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
