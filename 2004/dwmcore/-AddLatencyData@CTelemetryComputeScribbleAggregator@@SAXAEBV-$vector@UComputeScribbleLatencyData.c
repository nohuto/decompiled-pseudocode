/*
 * XREFs of ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180164CE0
 * Callers:
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801A62F0 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ??$insert@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@std@@X@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UComputeScribbleLatencyData@@@std@@@std@@@1@1@Z @ 0x180164BC0 (--$insert@V-$_Vector_const_iterator@V-$_Vector_val@U-$_Simple_types@UComputeScribbleLatencyData@.c)
 *     McTemplateU0qqxx_EventWriteTransfer @ 0x180164F38 (McTemplateU0qqxx_EventWriteTransfer.c)
 */

void __fastcall CTelemetryComputeScribbleAggregator::AddLatencyData(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(&stru_1803457C8);
  v2 = a1[1];
  v3 = *a1;
  v4 = v2 - v3;
  if ( (unsigned __int64)(*((_QWORD *)&xmmword_180349400 + 1) + (v2 - v3) / 56) > 0xA )
  {
    while ( v3 != v2 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40000) != 0 )
        McTemplateU0qqxx_EventWriteTransfer(
          v4,
          (unsigned int)&EVTDESC_COMPUTESCRIBBLE_TELEMETRYDROPPED,
          *(_DWORD *)v3,
          *(_DWORD *)(v3 + 4),
          *(_QWORD *)(v3 + 24),
          *(_QWORD *)(v3 + 32));
      v3 += 56LL;
    }
  }
  else
  {
    std::list<ComputeScribbleLatencyData>::insert<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<ComputeScribbleLatencyData>>>,void>(
      v4,
      &v5,
      xmmword_180349400,
      v3,
      v2);
  }
  ReleaseSRWLockExclusive(&stru_1803457C8);
}
