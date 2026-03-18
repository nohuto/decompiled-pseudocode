/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14037BE80
 * Callers:
 *     IopLoadDriver @ 0x140729340 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A4EB10 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037BED8 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x14059B7D8 (ViDifCaptureIoCallbacks.c)
 */

__int64 __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 result; // rax

  result = ViDifCheckCallbackInterception();
  if ( (_BYTE)result )
    return ViDifCaptureIoCallbacks(a1);
  return result;
}
