/*
 * XREFs of ??1?$CAutoPtr@VCDisplayNode@@@ATL@@QEAA@XZ @ 0x14004B85C
 * Callers:
 *     _GetDisplayNode_::_1_::dtor$1 @ 0x14004C5FB (_GetDisplayNode_--_1_--dtor$1.c)
 * Callees:
 *     ??_GCDisplayNode@@QEAAPEAXI@Z @ 0x14004B8D4 (--_GCDisplayNode@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CDisplayNode>::~CAutoPtr<CDisplayNode>(CDisplayNode **a1, unsigned int a2)
{
  CDisplayNode *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CDisplayNode::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
