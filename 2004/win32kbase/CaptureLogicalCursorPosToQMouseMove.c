/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x1C0074200
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C007422C (-CaptureLogicalCursorPosToQMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall CaptureLogicalCursorPosToQMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(MouseProcessor, a1);
}
