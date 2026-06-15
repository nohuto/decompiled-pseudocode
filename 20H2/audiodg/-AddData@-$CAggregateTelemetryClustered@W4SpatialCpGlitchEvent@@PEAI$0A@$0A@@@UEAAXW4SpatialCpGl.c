/*
 * XREFs of ?AddData@?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4SpatialCpGlitchEvent@@PEAI@Z @ 0x140061D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4SpatialCpGlitchEvent@@PEAI@Z @ 0x140061CD0 (-AddData@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4.c)
 */

// Hidden C++ exception states: #wind=1
ULONGLONG __fastcall CAggregateTelemetryClustered<enum SpatialCpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  ULONGLONG result; // rax
  __int64 v6; // rdx
  ULONGLONG v7; // rdi

  result = GetTickCount64();
  v7 = result;
  if ( *(_BYTE *)(a1 + 32) )
  {
    if ( result - *(_QWORD *)(a1 + 72) > *(_QWORD *)(a1 + 56) )
    {
      *(_BYTE *)(a1 + 32) = 0;
      if ( result - *(_QWORD *)(a1 + 48) > *(_QWORD *)(a1 + 40) )
      {
        LOBYTE(v6) = 1;
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 8LL))(a1, v6);
        *(_QWORD *)(a1 + 48) = v7;
      }
    }
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 32) = 1;
      *(_QWORD *)(a1 + 64) = v7;
      *(_QWORD *)(a1 + 88) = v7;
    }
    *(_QWORD *)(a1 + 72) = v7;
    CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::AddData(a1);
    result = v7 - *(_QWORD *)(a1 + 88);
    if ( result > *(_QWORD *)(a1 + 80) )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
      *(_QWORD *)(a1 + 88) = v7;
    }
  }
  return result;
}
