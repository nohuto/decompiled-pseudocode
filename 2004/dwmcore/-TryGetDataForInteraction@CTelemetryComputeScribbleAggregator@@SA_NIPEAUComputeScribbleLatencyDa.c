/*
 * XREFs of ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@_N_K@Z @ 0x180164DAC
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180014338 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_.c)
 * Callees:
 *     ?erase@?$list@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@UComputeScribbleLatencyData@@@std@@@std@@@2@@Z @ 0x180164EE8 (-erase@-$list@UComputeScribbleLatencyData@@V-$allocator@UComputeScribbleLatencyData@@@std@@@std@.c)
 */

char __fastcall CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(
        unsigned int a1,
        struct ComputeScribbleLatencyData *a2,
        char a3,
        __int64 a4)
{
  __int64 v8; // rcx
  __int64 *v9; // r10
  char v10; // di
  __int64 *v11; // r8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  unsigned int v15; // ebx
  __int64 **v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  AcquireSRWLockExclusive(&stru_1803457C8);
  v9 = (__int64 *)xmmword_180349400;
  v10 = 0;
  v11 = *(__int64 **)xmmword_180349400;
  v12 = *(_QWORD *)xmmword_180349400;
  if ( a3 )
  {
    while ( v12 != (_QWORD)xmmword_180349400 )
    {
      if ( a4 == *(_QWORD *)(v12 + 56) )
      {
        v10 = 1;
        v13 = *(_OWORD *)(v12 + 32);
        *(_OWORD *)a2 = *(_OWORD *)(v12 + 16);
        v14 = *(_OWORD *)(v12 + 48);
        *((_OWORD *)a2 + 1) = v13;
        *(_QWORD *)&v13 = *(_QWORD *)(v12 + 64);
        *((_OWORD *)a2 + 2) = v14;
        *((_QWORD *)a2 + 6) = v13;
        v15 = *(_DWORD *)a2;
        while ( v11 != v9 )
        {
          if ( v15 <= *((_DWORD *)v11 + 5) )
          {
            v11 = (__int64 *)*v11;
          }
          else
          {
            v16 = (__int64 **)std::list<ComputeScribbleLatencyData>::erase(v8, v20, v11);
            v9 = (__int64 *)xmmword_180349400;
            v11 = *v16;
          }
        }
        break;
      }
      v12 = *(_QWORD *)v12;
    }
  }
  else
  {
    while ( (__int64 *)v12 != v9 )
    {
      if ( a1 >= *(_DWORD *)(v12 + 16) && a1 <= *(_DWORD *)(v12 + 20) )
      {
        v10 = 1;
        v17 = *(_OWORD *)(v12 + 32);
        *(_OWORD *)a2 = *(_OWORD *)(v12 + 16);
        v18 = *(_OWORD *)(v12 + 48);
        *((_OWORD *)a2 + 1) = v17;
        *(_QWORD *)&v17 = *(_QWORD *)(v12 + 64);
        *((_OWORD *)a2 + 2) = v18;
        *((_QWORD *)a2 + 6) = v17;
        break;
      }
      if ( a1 > *(_DWORD *)(v12 + 20) )
      {
        v12 = std::list<ComputeScribbleLatencyData>::erase(v8, v20, v12);
        v9 = (__int64 *)xmmword_180349400;
      }
      v12 = *(_QWORD *)v12;
    }
  }
  ReleaseSRWLockExclusive(&stru_1803457C8);
  return v10;
}
