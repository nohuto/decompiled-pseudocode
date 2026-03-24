/*
 * XREFs of ?Remove@?$CQueue@V?$shared_ptr@UManipulationThreadTelemetryData@@@std@@@@AEAA?AV?$shared_ptr@UManipulationThreadTelemetryData@@@std@@_NPEAI@Z @ 0x1801C6CB8
 * Callers:
 *     ??_ECManipulationTelemetryData@@UEAAPEAXI@Z @ 0x1801C5EE8 (--_ECManipulationTelemetryData@@UEAAPEAXI@Z.c)
 *     ??1?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ @ 0x180231FC8 (--1-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAA@XZ.c)
 *     ?UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K@Z @ 0x180232710 (-UpdateInteraction@CManipulationTelemetryData@@UEAAJPEBUIManipulationResource@@W4ScrollState@@_K.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180173D04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180183EAC (--4-$shared_ptr@UManipulationThreadTelemetryData@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

_QWORD *__fastcall CQueue<std::shared_ptr<ManipulationThreadTelemetryData>>::Remove(
        __int64 a1,
        _QWORD *a2,
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
    std::shared_ptr<ManipulationThreadTelemetryData>::operator=(a2, v7 + 2);
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
