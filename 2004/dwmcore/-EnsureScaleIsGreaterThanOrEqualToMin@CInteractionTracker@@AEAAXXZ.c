/*
 * XREFs of ?EnsureScaleIsGreaterThanOrEqualToMin@CInteractionTracker@@AEAAXXZ @ 0x1801CAA18
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x1801CB518 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801CD5C0 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801CDB9C (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(CInteractionTracker *this, __int64 a2)
{
  if ( !*((_DWORD *)this + 42) && (*((_BYTE *)this + 532) & 0x20) == 0 )
    CInteractionTracker::SetScale(this, a2, 0LL);
}
