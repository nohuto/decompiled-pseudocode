/*
 * XREFs of InteractionLatencyTelemetry::_anonymous_namespace_::NeedToSendSummary @ 0x1801D5238
 * Callers:
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 * Callees:
 *     ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x18005EAF0 (-compare@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAHAEBV12@@Z.c)
 */

char __fastcall InteractionLatencyTelemetry::_anonymous_namespace_::NeedToSendSummary(__int64 a1, __int64 a2)
{
  int v4; // eax
  char v5; // cl
  __int64 v6; // rax

  if ( *(_DWORD *)(a1 + 132) != *(_DWORD *)(a2 + 68) )
    return 1;
  if ( *(_DWORD *)(a1 + 136) != *(_DWORD *)(a2 + 72) )
    return 1;
  if ( *(_DWORD *)(a1 + 140) != *(_DWORD *)(a2 + 76) )
    return 1;
  if ( *(_BYTE *)(a1 + 144) != *(_BYTE *)(a2 + 80) )
    return 1;
  if ( *(_DWORD *)(a1 + 148) != *(_DWORD *)(a2 + 84) )
    return 1;
  v4 = std::wstring::compare((char *)(a1 + 16), (_QWORD *)a2);
  v5 = 0;
  if ( v4
    || *(_DWORD *)(a1 + 84) != *(_DWORD *)(a2 + 88)
    || *(_DWORD *)(a1 + 92) != *(_DWORD *)(a2 + 96)
    || *(_DWORD *)(a1 + 88) != *(_DWORD *)(a2 + 92)
    || *(_DWORD *)(a1 + 96) != *(_DWORD *)(a2 + 100) )
  {
    return 1;
  }
  v6 = *(_QWORD *)(a1 + 100) - *(_QWORD *)(a2 + 104);
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 108) - *(_QWORD *)(a2 + 112);
  if ( v6 )
    return 1;
  return v5;
}
