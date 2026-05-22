/*
 * XREFs of ?ProcessResult@DragManagerHost@@MEAAJPEAVBamoDragNDropContextualProcessorStub@@IAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F5C20
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800FA830 (-ProcessResult@DragNDropProcessor@@QEAAJKAEBUDragOperationResult@Input@Internal@UI@Windows@@PEAV.c)
 */

__int64 __fastcall DragManagerHost::ProcessResult(
        DragNDropProcessor **this,
        struct BamoDragNDropContextualProcessorStub *a2,
        unsigned int a3,
        const struct Windows::UI::Internal::Input::DragOperationResult *a4)
{
  DragNDropProcessor::ProcessResult(this[7], a3, a4, a4);
  return 0LL;
}
