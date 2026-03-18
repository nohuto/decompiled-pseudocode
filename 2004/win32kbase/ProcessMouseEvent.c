/*
 * XREFs of ProcessMouseEvent @ 0x1C006FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00709D4 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void ProcessMouseEvent()
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::ProcessMouseEvent(MouseProcessor);
}
