/*
 * XREFs of ?PushValueToStack@CNaturalAnimation@@AEAAXTInternalValue@1@PEAVCExpressionValueStack@@@Z @ 0x180227470
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225B8C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180225EF0 (-CalculateValueWorker@CNaturalAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180070BEC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18024F4C4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::PushValueToStack(__int64 a1, float *a2, CExpressionValueStack *a3)
{
  int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_DWORD *)(a1 + 152);
  if ( v3 == 18 )
    return CExpressionValueStack::PushConstant(a3, *a2);
  if ( v3 == 35 )
    return CExpressionValueStack::PushConstant(a3, (const struct D2DVector2 *)a2);
  if ( v3 != 52 )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  return CExpressionValueStack::PushConstant(a3, (const struct D2DVector3 *)a2);
}
