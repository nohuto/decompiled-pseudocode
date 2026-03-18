/*
 * XREFs of ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801F2BA8
 * Callers:
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x1801F1B80 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180275E10 (-UpdateInteraction@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJPEBUIManipulatio.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 *__fastcall CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _DWORD *a4)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  std::_Ref_count_base *v9; // rcx

  *a2 = 0LL;
  a2[1] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v7 = *(_QWORD **)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v8 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
    __fastfail(3u);
  *(_QWORD *)a1 = v8;
  *(_QWORD *)(v8 + 8) = a1;
  if ( v7 != (_QWORD *)a1 )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(a2, v7 + 2);
    v9 = (std::_Ref_count_base *)v7[3];
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    operator delete(v7);
    --*(_DWORD *)(a1 + 16);
  }
  if ( a4 )
    *a4 = *(_DWORD *)(a1 + 16);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return a2;
}
