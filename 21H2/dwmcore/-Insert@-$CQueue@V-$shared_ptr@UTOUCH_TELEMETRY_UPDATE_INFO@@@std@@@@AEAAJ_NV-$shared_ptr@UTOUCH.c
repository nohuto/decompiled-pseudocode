/*
 * XREFs of ?Insert@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@AEAAJ_NV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802752A8
 * Callers:
 *     ?InsertTail@?$CQueue@V?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV?$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@Z @ 0x1802753AC (-InsertTail@-$CQueue@V-$shared_ptr@UTOUCH_TELEMETRY_UPDATE_INFO@@@std@@@@QEAAJV-$shared_ptr@UTOU.c)
 *     ?UpdateOnRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJAEBUManipulationThreadTelemetryData@@@Z @ 0x180276520 (-UpdateOnRenderThread@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAJAEBUManipulat.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000E7B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801DEE78 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall CQueue<std::shared_ptr<TOUCH_TELEMETRY_UPDATE_INFO>>::Insert(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // esi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  std::_Ref_count_base *v11; // rcx

  v5 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  if ( *(_BYTE *)(a1 + 20) )
  {
    v5 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, -2147023781, 0x97u);
  }
  else
  {
    v7 = operator new(0x20uLL);
    v9 = v7;
    if ( v7 )
    {
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[3] = 0LL;
      v7[2] = 0LL;
      v7[3] = 0LL;
      std::shared_ptr<CCursorState::ShapeData>::operator=(v7 + 2, a3);
      v10 = *(_QWORD **)(a1 + 8);
      if ( *v10 != a1 )
        __fastfail(3u);
      *v9 = a1;
      v9[1] = v10;
      *v10 = v9;
      *(_QWORD *)(a1 + 8) = v9;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024882, 0x9Cu);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v5;
}
