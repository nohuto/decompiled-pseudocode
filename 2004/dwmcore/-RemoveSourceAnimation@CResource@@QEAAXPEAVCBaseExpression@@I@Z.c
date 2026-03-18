/*
 * XREFs of ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x18009B62C
 * Callers:
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18009B58C (-UnregisterSources@CExpression@@IEAAXXZ.c)
 * Callees:
 *     ?RemoveElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntry@@@Z @ 0x18009B544 (-RemoveElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAXPEAVCAnimationSourceMapEntr.c)
 *     ?FindElement@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@I@Z @ 0x18009B894 (-FindElement@-$CGenericTableMap@IVCAnimationSourceMapEntry@@@@QEAAPEAVCAnimationSourceMapEntry@@.c)
 *     ?Remove@?$DynArray@PEAVCBaseExpression@@$0A@@@QEAAHAEBQEAVCBaseExpression@@@Z @ 0x18009B9E4 (-Remove@-$DynArray@PEAVCBaseExpression@@$0A@@@QEAAHAEBQEAVCBaseExpression@@@Z.c)
 */

void __fastcall CResource::RemoveSourceAnimation(CResource *this, struct CBaseExpression *a2, unsigned int a3)
{
  __int64 Element; // rax
  __int64 v5; // rbx
  struct CBaseExpression *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(*((_QWORD *)this + 5), a3);
  v5 = Element;
  if ( Element )
  {
    DynArray<CBaseExpression *,0>::Remove(Element + 8, &v6);
    if ( !*(_DWORD *)(v5 + 32) )
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(
        *((PRTL_GENERIC_TABLE *)this + 5),
        (char *)v5);
  }
}
