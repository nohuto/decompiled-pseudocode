/*
 * XREFs of ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x18006E810
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18006FD90 (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x180070934 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 */

__int64 __fastcall CResource::GetSourceAnimationsForProperty(__int64 a1)
{
  __int64 Element; // rax

  Element = 0LL;
  if ( *(_QWORD *)(a1 + 40) )
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement();
  return (Element + 8) & -(__int64)(Element != 0);
}
