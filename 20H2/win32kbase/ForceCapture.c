/*
 * XREFs of ForceCapture @ 0x1C00BE750
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00BE794 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 */

void __fastcall ForceCapture(unsigned int a1, struct tagINPUTDEST *a2)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor && (a2 || a1 == 3) )
    CMouseProcessor::ForceMouseOwner(MouseProcessor, a2, a1);
}
