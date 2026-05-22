/*
 * XREFs of ?StartAnimation@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FD110
 * Callers:
 *     <none>
 * Callees:
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEED0 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 */

__int64 __fastcall ResizeControllerHost::StartAnimation(
        ResizeProcessor **this,
        struct BamoResizeContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoResizeControllerClientProxy *a4)
{
  ResizeProcessor::StartAnimation(this[7], a3, a4);
  return 0LL;
}
