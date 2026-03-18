/*
 * XREFs of ?GetSourceAnimationsForProperty@CResource@@QEAAPEAV?$DynArray@PEAVCBaseExpression@@$0A@@@I@Z @ 0x1800E633C
 * Callers:
 *     ?RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z @ 0x18004A2AC (-RegisterExpression@CExpressionManager@@QEAAJPEAVCBaseExpression@@@Z.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x18022893C (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 * Callees:
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x18004968C (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 */

__int64 __fastcall CResource::GetSourceAnimationsForProperty(__int64 a1, int a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rcx
  PVOID Element; // rax

  v2 = *(struct _RTL_GENERIC_TABLE **)(a1 + 40);
  Element = 0LL;
  if ( v2 )
    Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(v2, a2);
  return ((unsigned __int64)Element + 8) & -(__int64)(Element != 0LL);
}
