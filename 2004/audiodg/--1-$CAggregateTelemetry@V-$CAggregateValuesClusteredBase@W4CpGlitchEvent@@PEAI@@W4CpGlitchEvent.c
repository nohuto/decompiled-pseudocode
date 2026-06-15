/*
 * XREFs of ??1?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140016F1C
 * Callers:
 *     ??1?$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ @ 0x140016A88 (--1-$CAggregateTelemetryClustered@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAA@XZ.c)
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$7 @ 0x140022CC1 (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$7.c)
 *     ??_G?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAPEAXI@Z @ 0x1400590E0 (--_G-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEven.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??_GCSLock@@QEAAPEAXI@Z @ 0x14005921C (--_GCSLock@@QEAAPEAXI@Z.c)
 *     ?Log@?$CAggregateTelemetry@V?$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEvent@@PEAI$0A@$0A@@@UEAAX_N@Z @ 0x140059550 (-Log@-$CAggregateTelemetry@V-$CAggregateValuesClusteredBase@W4CpGlitchEvent@@PEAI@@W4CpGlitchEve.c)
 */

void **__fastcall CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::~CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>(
        __int64 a1,
        __int64 a2)
{
  void **result; // rax
  CSLock *v4; // rcx
  __int64 (__fastcall ***v5)(_QWORD, __int64); // rcx

  result = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  *(_QWORD *)a1 = &CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::`vftable';
  if ( *(_BYTE *)(a1 + 16) )
  {
    LOBYTE(a2) = 1;
    result = (void **)CAggregateTelemetry<CAggregateValuesClusteredBase<enum CpGlitchEvent,unsigned int *>,enum CpGlitchEvent,unsigned int *,0,0>::Log(
                        a1,
                        a2);
  }
  v4 = *(CSLock **)(a1 + 24);
  if ( v4 )
  {
    result = (void **)CSLock::`scalar deleting destructor'(v4, a2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 17) )
  {
    v5 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 8);
    if ( v5 )
    {
      result = (void **)(**v5)(v5, 1LL);
      *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
  return result;
}
