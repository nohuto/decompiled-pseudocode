/*
 * XREFs of VfDifCaptureIoCallbacks @ 0x14037B100
 * Callers:
 *     IopLoadDriver @ 0x140725EF8 (IopLoadDriver.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     ViDifCheckCallbackInterception @ 0x14037B158 (ViDifCheckCallbackInterception.c)
 *     ViDifCaptureIoCallbacks @ 0x14059B0E8 (ViDifCaptureIoCallbacks.c)
 */

__int64 __fastcall VfDifCaptureIoCallbacks(__int64 a1)
{
  __int64 result; // rax

  result = ViDifCheckCallbackInterception();
  if ( (_BYTE)result )
    return ViDifCaptureIoCallbacks(a1);
  return result;
}
