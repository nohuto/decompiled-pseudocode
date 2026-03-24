/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x180062A20
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAX_K@Z @ 0x1800643F0 (-InsertInOrder@CBaseExpression@@QEAAX_K@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180064D40 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x180064EC8 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(CKeyframeAnimation *this, unsigned __int64 a2)
{
  __int64 i; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 j; // rbx
  int v8; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 98); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 46) + 8 * i), a2);
  v5 = (__int64 *)((char *)this + 312);
  v6 = *((_QWORD *)this + 39);
  if ( !v6 )
  {
    *v5 = 0LL;
    v8 = CWeakReference<CVisual>::Create(this, (char *)this + 312);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v8, retaddr);
    v6 = *v5;
  }
  for ( j = CExpressionManager::LookupExpressionsForTarget(*(_QWORD *)(*((_QWORD *)this + 2) + 272LL), v6, 31LL);
        j;
        j = *(_QWORD *)(j + 16) )
  {
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
  }
}
