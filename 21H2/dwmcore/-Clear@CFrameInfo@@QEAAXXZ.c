/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98
 * Callers:
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078D88 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x18007ADD0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800DD978 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z @ 0x18001A93C (--_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  InteractionLatencyTelemetry::TouchUpdateInfo *v3; // rcx

  memset_0(this, 0, 0xA0uLL);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 46); i = (unsigned int)(i + 1) )
  {
    v3 = *(InteractionLatencyTelemetry::TouchUpdateInfo **)(*((_QWORD *)this + 20) + 8 * i);
    if ( v3 )
      InteractionLatencyTelemetry::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 46) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 160, 8LL);
  CFrameInfo::ReleaseResponses(this);
}
