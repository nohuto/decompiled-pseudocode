/*
 * XREFs of ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C006CEBC
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00013D0 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ??1FxObject@@UEAA@XZ @ 0x1C00083A0 (--1FxObject@@UEAA@XZ.c)
 *     ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C000ACD0 (-ProcessDestroy@FxObject@@AEAAXXZ.c)
 *     ??1FxPowerIdleMachine@@QEAA@XZ @ 0x1C0089750 (--1FxPowerIdleMachine@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C006E408 (--1FxTagTracker@@QEAA@XZ.c)
 */

FxTagTracker *__fastcall FxTagTracker::`scalar deleting destructor'(FxTagTracker *this)
{
  FxTagTracker::~FxTagTracker(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
