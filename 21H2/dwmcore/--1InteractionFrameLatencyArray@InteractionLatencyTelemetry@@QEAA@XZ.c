/*
 * XREFs of ??1InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801D1D38
 * Callers:
 *     ?InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSummaryInfo@2@_KQEBI@Z @ 0x1801D4104 (-InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSumm.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1_unnamed_type_vail_@InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801D1BDC (--1_unnamed_type_vail_@InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@XZ.c)
 */

void __fastcall InteractionLatencyTelemetry::InteractionFrameLatencyArray::~InteractionFrameLatencyArray(
        InteractionLatencyTelemetry::InteractionFrameLatencyArray *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx

  InteractionLatencyTelemetry::InteractionFrameLatencyArray::_unnamed_type_vail_::~_unnamed_type_vail_((InteractionLatencyTelemetry::InteractionFrameLatencyArray *)((char *)this + 112));
  v2 = (void *)*((_QWORD *)this + 13);
  if ( v2 )
    DefaultHeap::Free(v2);
  v3 = (void *)*((_QWORD *)this + 12);
  if ( v3 )
    DefaultHeap::Free(v3);
  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    DefaultHeap::Free(v4);
  v5 = (void *)*((_QWORD *)this + 10);
  if ( v5 )
    DefaultHeap::Free(v5);
  v6 = (void *)*((_QWORD *)this + 9);
  if ( v6 )
    DefaultHeap::Free(v6);
  v7 = (void *)*((_QWORD *)this + 8);
  if ( v7 )
    DefaultHeap::Free(v7);
  v8 = (void *)*((_QWORD *)this + 7);
  if ( v8 )
    DefaultHeap::Free(v8);
  v9 = (void *)*((_QWORD *)this + 6);
  if ( v9 )
    DefaultHeap::Free(v9);
  v10 = (void *)*((_QWORD *)this + 5);
  if ( v10 )
    DefaultHeap::Free(v10);
  v11 = (void *)*((_QWORD *)this + 4);
  if ( v11 )
    DefaultHeap::Free(v11);
  v12 = (void *)*((_QWORD *)this + 3);
  if ( v12 )
    DefaultHeap::Free(v12);
  v13 = (void *)*((_QWORD *)this + 2);
  if ( v13 )
    DefaultHeap::Free(v13);
  v14 = (void *)*((_QWORD *)this + 1);
  if ( v14 )
    DefaultHeap::Free(v14);
}
