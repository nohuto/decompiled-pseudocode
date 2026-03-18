/*
 * XREFs of ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18009B104
 * Callers:
 *     ?UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV?$CWeakReference@VCResource@@@@IPEAVSubchannelMaskInfo@@_N@Z @ 0x18009BA54 (-UnregisterExpressionWorker@CExpressionManager@@AEAAXPEAVCBaseExpression@@PEAV-$CWeakReference@V.c)
 *     ??1CExpressionManager@@UEAA@XZ @ 0x1801AC6EC (--1CExpressionManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18009C054 (--1CTargetMapEntry@@QEAA@XZ.c)
 */

void __fastcall CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::RemoveElement(
        PRTL_GENERIC_TABLE Table,
        CTargetMapEntry *this)
{
  CTargetMapEntry::~CTargetMapEntry(this);
  if ( !RtlDeleteElementGenericTable(Table, this) )
    RaiseFailFastException(0LL, 0LL, 1u);
}
