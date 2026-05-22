/*
 * XREFs of ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F5A30
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800F8614 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 */

__int64 __fastcall DragManagerHost::CancelDrag(
        DragNDropProcessor **this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        struct BamoDragManagerClientProxy *a4)
{
  DragNDropProcessor::CancelDrag(this[7], a3, a4);
  return 0LL;
}
