/*
 * XREFs of ??1CAnimationTracking@@QEAA@XZ @ 0x1801AD93C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801AD988 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 * Callees:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180074C18 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x1801CAD28 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 */

void __fastcall CAnimationTracking::~CAnimationTracking(CAnimationTracking *this)
{
  while ( *((_DWORD *)this + 6) )
    CAnimationTracking::DeleteScenario(this, 0);
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 8u);
  CAnimationTracking::ClearAllLongtermScenarios(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this);
}
