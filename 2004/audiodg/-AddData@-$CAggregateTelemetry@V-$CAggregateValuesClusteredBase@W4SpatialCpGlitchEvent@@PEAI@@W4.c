/*
 * XREFs of ?AddData@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4SpatialCpGlitchEvent@@PEAI@@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4SpatialCpGlitchEvent@@PEAI@Z @ 0x140059250
 * Callers:
 *     ?AddData@?$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4SpatialCpGlitchEvent@@PEAI@Z @ 0x1400592A0 (-AddData@-$CAggregateTelemetryClustered@W4SpatialCpGlitchEvent@@PEAI$0A@$0A@@@UEAAXW4SpatialCpGl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum SpatialCpGlitchEvent,unsigned int *>,enum SpatialCpGlitchEvent,unsigned int *,0,0>::AddData(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_BYTE *)(a1 + 16) = 1;
  }
  return result;
}
