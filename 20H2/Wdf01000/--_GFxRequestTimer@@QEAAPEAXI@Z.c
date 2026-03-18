/*
 * XREFs of ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C0052C0C
 * Callers:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x1C00058E4 (--1FxRequestBase@@MEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C0007860 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x1C0052C38 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x1C0052D04 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0052BCC (--1MxTimer@@QEAA@XZ.c)
 */

FxRequestTimer *__fastcall FxRequestTimer::`scalar deleting destructor'(FxRequestTimer *this, __int64 a2)
{
  MxTimer::~MxTimer(&this->Timer, a2);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
