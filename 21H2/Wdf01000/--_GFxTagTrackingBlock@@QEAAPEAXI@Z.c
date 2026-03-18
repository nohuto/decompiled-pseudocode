/*
 * XREFs of ??_GFxTagTrackingBlock@@QEAAPEAXI@Z @ 0x1C006E504
 * Callers:
 *     ??1FxTagTracker@@QEAA@XZ @ 0x1C006E408 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005F0C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTrackingBlock@@QEAA@XZ @ 0x1C006CE90 (--1FxTagTrackingBlock@@QEAA@XZ.c)
 */

FxTagTrackingBlock *__fastcall FxTagTrackingBlock::`scalar deleting destructor'(FxTagTrackingBlock *this)
{
  FxTagTrackingBlock::~FxTagTrackingBlock(this);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
