/*
 * XREFs of ?EnsureScaleIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXXZ @ 0x1801CD354
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CDE18 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801CFCF4 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801D0500 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 42) && (*((_BYTE *)this + 532) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, a2, 0LL);
}
