/*
 * XREFs of ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C007F0DC
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C007EE70 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C0061D30 (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxEnumerationInfo *__fastcall FxEnumerationInfo::`scalar deleting destructor'(FxEnumerationInfo *this)
{
  FxTransactionedList::~FxTransactionedList(&this->m_ChildListList);
  if ( this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
