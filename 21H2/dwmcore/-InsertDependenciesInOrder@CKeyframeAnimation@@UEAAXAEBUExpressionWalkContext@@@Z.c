/*
 * XREFs of ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC680
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@?$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18004A518 (-Create@-$CWeakReference@VCResource@@@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x1800CC870 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CKeyframeAnimation::InsertDependenciesInOrder(
        CKeyframeAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  __int64 i; // rdi
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  void *v9; // rbx
  _QWORD *v10; // rdi
  int v11; // eax
  void *v12; // rcx
  __int64 j; // rbx
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int128 Buffer; // [rsp+30h] [rbp-28h] BYREF
  void *v16; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 104); i = (unsigned int)(i + 1) )
    CBaseExpression::InsertInOrder(*(CBaseExpression **)(*((_QWORD *)this + 49) + 8 * i), a2);
  v5 = (__int64 *)((char *)this + 336);
  v6 = *((_QWORD *)this + 42);
  if ( !v6 )
  {
    *v5 = 0LL;
    v11 = CWeakReference<CResource>::Create(this, (struct CWeakResourceReference **)this + 42);
    if ( v11 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
    v6 = *v5;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  v16 = 0LL;
  *(_QWORD *)&v14 = v6;
  DWORD2(v14) = 31;
  Buffer = v14;
  v8 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v7 + 328), &Buffer);
  v9 = v16;
  v10 = v8;
  while ( v9 )
  {
    v12 = v9;
    v9 = (void *)*((_QWORD *)v9 + 2);
    operator delete(v12, 0x18uLL);
  }
  if ( v10 )
  {
    for ( j = v10[2]; j; j = *(_QWORD *)(j + 16) )
      CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
  }
}
