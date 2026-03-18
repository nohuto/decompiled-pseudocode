/*
 * XREFs of ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800D83E8
 * Callers:
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800D81D0 (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 * Callees:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001F6C8 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ @ 0x1800D8448 (-ResetTokens@CScheduleFrameInfoVolatileData@@AEAAXXZ.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 */

void __fastcall CFrameInfo::Clear(CFrameInfo *this)
{
  __int64 i; // rdi
  CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *v3; // rcx

  memset_0(this, 0, 0x90uLL);
  CScheduleFrameInfoVolatileData::ResetTokens(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 50); i = (unsigned int)(i + 1) )
  {
    v3 = *(CTelemetryTouchLatencyAnalysis::TouchUpdateInfo **)(*((_QWORD *)this + 22) + 8 * i);
    if ( v3 )
      CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(v3);
  }
  *((_DWORD *)this + 50) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 176, 8u);
  CFrameInfo::ReleaseResponses(this);
}
