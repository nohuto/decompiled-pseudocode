/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14037DBB0
 * Callers:
 *     IopLoadDriver @ 0x140737DD0 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A5DAAC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037DC08 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x14059F278 (ViDifCaptureIoCallbacks.c)
 */

__int64 __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 result; // rax

  result = ViDifCheckCallbackInterception();
  if ( (_BYTE)result )
    return ViDifCaptureIoCallbacks(a1);
  return result;
}
