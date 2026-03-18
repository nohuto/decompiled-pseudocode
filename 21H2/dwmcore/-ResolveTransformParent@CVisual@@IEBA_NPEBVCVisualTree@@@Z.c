/*
 * XREFs of ?ResolveTransformParent@CVisual@@IEBA_NPEBVCVisualTree@@@Z @ 0x1800DAD1C
 * Callers:
 *     ?UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z @ 0x1800A55E0 (-UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x18008B4E4 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::ResolveTransformParent(CVisual *this, CVisual **a2)
{
  __int64 v2; // r10
  struct TransformParentData *TransformParentDataInternal; // rax

  v2 = 0LL;
  if ( !a2 || this != a2[8] )
  {
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(this);
    if ( TransformParentDataInternal )
      v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 184LL))(*(_QWORD *)TransformParentDataInternal);
  }
  return v2 != 0;
}
