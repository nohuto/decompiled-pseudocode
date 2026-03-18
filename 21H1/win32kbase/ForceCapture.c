/*
 * XREFs of ForceCapture @ 0x1C00507A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00507E4 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall ForceCapture(unsigned int a1, struct tagINPUTDEST *a2)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor && (a2 || a1 == 3) )
    CMouseProcessor::ForceMouseOwner(MouseProcessor, a2, a1);
}
