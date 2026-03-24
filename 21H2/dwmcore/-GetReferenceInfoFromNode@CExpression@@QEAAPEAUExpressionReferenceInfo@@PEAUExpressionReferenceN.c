/*
 * XREFs of ?GetReferenceInfoFromNode@CExpression@@QEAAPEAUExpressionReferenceInfo@@PEAUExpressionReferenceNode@@@Z @ 0x1801FC8D0
 * Callers:
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180200B7C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     <none>
 */

struct ExpressionReferenceInfo *__fastcall CExpression::GetReferenceInfoFromNode(
        CExpression *this,
        struct ExpressionReferenceNode *a2)
{
  __int64 v2; // rax

  v2 = *((unsigned int *)a2 + 1);
  if ( (unsigned int)v2 < *((_DWORD *)this + 104) )
    return (struct ExpressionReferenceInfo *)(*((_QWORD *)this + 51) + 24 * v2);
  else
    return 0LL;
}
