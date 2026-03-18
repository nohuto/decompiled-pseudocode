/*
 * XREFs of PostPendingMouseMove @ 0x1C0062B20
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C00633E0 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0062B4C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00718AC (_anonymous_namespace_--GetMouseProcessor.c)
 */

void __fastcall PostPendingMouseMove(struct tagQ *a1)
{
  CMouseProcessor *MouseProcessor; // rax

  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    CMouseProcessor::PostPendingMouseMove(MouseProcessor, a1);
}
