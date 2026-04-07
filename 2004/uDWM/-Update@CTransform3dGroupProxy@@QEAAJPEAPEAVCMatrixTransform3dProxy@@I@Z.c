/*
 * XREFs of ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800BE4CC
 * Callers:
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8574 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransform3dGroupProxy::Update(CTransform3dGroupProxy *this, struct CMatrixTransform3dProxy **a2)
{
  __int64 *v2; // r10
  __int64 v3; // r11
  __int64 v4; // rax
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v2 = &v6;
  v3 = 2LL;
  do
  {
    v4 = (__int64)*a2++;
    *(_DWORD *)v2 = *(_DWORD *)(*(_QWORD *)(v4 + 16) + 24LL);
    v2 = (__int64 *)((char *)v2 + 4);
    --v3;
  }
  while ( v3 );
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 952LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           &v6);
}
