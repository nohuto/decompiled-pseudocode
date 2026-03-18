/*
 * XREFs of ?ForwardPointerInputFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C018BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C018BBE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 */

void __fastcall CTouchProcessor::ForwardPointerInputFrameToManipulationThread(CTouchProcessor **a1)
{
  CTouchProcessor::ForwardInputToManipulationThread(*a1, (const struct CPointerInputFrame *)a1);
}
