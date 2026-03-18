/*
 * XREFs of ??1CTargetMapEntry@@QEAA@XZ @ 0x18006FEC0
 * Callers:
 *     ?RemoveElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTargetMapEntry@@@Z @ 0x18006E7CC (-RemoveElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAXPEAVCTarget.c)
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18006FD90 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801D9B1C (-RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV-$CWeakReference@VCResource@@@@I@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CTargetMapEntry::~CTargetMapEntry(CTargetMapEntry *this)
{
  _QWORD *v1; // rbx
  void *v2; // rcx

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  while ( v1 )
  {
    v2 = v1;
    v1 = (_QWORD *)v1[2];
    operator delete(v2);
  }
}
