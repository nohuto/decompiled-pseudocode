/*
 * XREFs of ??$?4U?$default_delete@$$BY0A@I@std@@$0A@@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E1AC8
 * Callers:
 *     ??0InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@PEBVInteractionFrameLatency@1@_K@Z @ 0x1801E1BB8 (--0InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@PEBVInteractionFrameLatency@1@.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void **__fastcall std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>(
        void **a1,
        void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      DefaultHeap::Free(v4);
  }
  return a1;
}
